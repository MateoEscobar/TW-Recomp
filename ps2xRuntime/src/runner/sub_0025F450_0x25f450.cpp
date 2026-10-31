#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025F450
// Address: 0x25f450 - 0x25f4c8
void sub_0025F450_0x25f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F450_0x25f450");
#endif

    switch (ctx->pc) {
        case 0x25f47cu: goto label_25f47c;
        case 0x25f48cu: goto label_25f48c;
        case 0x25f49cu: goto label_25f49c;
        case 0x25f4a8u: goto label_25f4a8;
        default: break;
    }

    ctx->pc = 0x25f450u;

    // 0x25f450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25f454: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x25f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x25f458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25f458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25f45c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f464: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x25f464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x25f468: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x25f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x25f46c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F46Cu;
    {
        const bool branch_taken_0x25f46c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F46Cu;
        // 0x25f470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f46c) {
            ctx->pc = 0x25F484u;
            goto label_25f484;
        }
    }
    ctx->pc = 0x25F474u;
    // 0x25f474: 0xc089974  jal         func_2265D0
    ctx->pc = 0x25F474u;
    SET_GPR_U32(ctx, 31, 0x25F47Cu);
    ctx->pc = 0x25F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F474u;
    // 0x25f478: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x25F474u, 0x25F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F47Cu;
label_25f47c:
    // 0x25f47c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25F47Cu;
    {
        const bool branch_taken_0x25f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F47Cu;
        // 0x25f480: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f47c) {
            ctx->pc = 0x25F4ACu;
            goto label_25f4ac;
        }
    }
    ctx->pc = 0x25F484u;
label_25f484:
    // 0x25f484: 0xc089998  jal         func_226660
    ctx->pc = 0x25F484u;
    SET_GPR_U32(ctx, 31, 0x25F48Cu);
    ctx->pc = 0x25F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F484u;
    // 0x25f488: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25F484u, 0x25F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F48Cu;
label_25f48c:
    // 0x25f48c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F48Cu;
    {
        const bool branch_taken_0x25f48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F48Cu;
        // 0x25f490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f48c) {
            ctx->pc = 0x25F4A8u;
            goto label_25f4a8;
        }
    }
    ctx->pc = 0x25F494u;
    // 0x25f494: 0xc0899a2  jal         func_226688
    ctx->pc = 0x25F494u;
    SET_GPR_U32(ctx, 31, 0x25F49Cu);
    ctx->pc = 0x25F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F494u;
    // 0x25f498: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226688u, 0x25F494u, 0x25F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F49Cu;
label_25f49c:
    // 0x25f49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f4a0: 0xc089974  jal         func_2265D0
    ctx->pc = 0x25F4A0u;
    SET_GPR_U32(ctx, 31, 0x25F4A8u);
    ctx->pc = 0x25F4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F4A0u;
    // 0x25f4a4: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x25F4A0u, 0x25F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F4A8u;
label_25f4a8:
    // 0x25f4a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25f4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25f4ac:
    // 0x25f4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25F4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F4B0u;
        // 0x25f4b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F4B8u;
    // 0x25f4b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25f4bc: 0x0  nop
    ctx->pc = 0x25f4bcu;
    // NOP
    // 0x25f4c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25f4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25f4c4: 0x0  nop
    ctx->pc = 0x25f4c4u;
    // NOP
    ctx->pc = 0x25f4c8u;
}

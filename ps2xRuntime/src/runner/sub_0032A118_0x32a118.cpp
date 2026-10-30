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

// Function: sub_0032A118
// Address: 0x32a118 - 0x32a190
void sub_0032A118_0x32a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A118_0x32a118");
#endif

    switch (ctx->pc) {
        case 0x32a12cu: goto label_32a12c;
        case 0x32a134u: goto label_32a134;
        case 0x32a140u: goto label_32a140;
        case 0x32a148u: goto label_32a148;
        case 0x32a17cu: goto label_32a17c;
        default: break;
    }

    ctx->pc = 0x32a118u;

    // 0x32a118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a11c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32a120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a124: 0xc0ca65e  jal         func_329978
    ctx->pc = 0x32A124u;
    SET_GPR_U32(ctx, 31, 0x32A12Cu);
    ctx->pc = 0x32A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A124u;
    // 0x32a128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329978u, 0x32A124u, 0x32A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A12Cu;
label_32a12c:
    // 0x32a12c: 0xc0ca6ce  jal         func_329B38
    ctx->pc = 0x32A12Cu;
    SET_GPR_U32(ctx, 31, 0x32A134u);
    ctx->pc = 0x32A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A12Cu;
    // 0x32a130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329B38u, 0x32A12Cu, 0x32A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A134u;
label_32a134:
    // 0x32a134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a138: 0xc0ca82e  jal         func_32A0B8
    ctx->pc = 0x32A138u;
    SET_GPR_U32(ctx, 31, 0x32A140u);
    ctx->pc = 0x32A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A138u;
    // 0x32a13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A0B8u, 0x32A138u, 0x32A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A140u;
label_32a140:
    // 0x32a140: 0xc0ca7b2  jal         func_329EC8
    ctx->pc = 0x32A140u;
    SET_GPR_U32(ctx, 31, 0x32A148u);
    ctx->pc = 0x32A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A140u;
    // 0x32a144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EC8u, 0x32A140u, 0x32A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A148u;
label_32a148:
    // 0x32a148: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x32a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x32a14c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x32a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x32a150: 0x3c04000a  lui         $a0, 0xA
    ctx->pc = 0x32a150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10 << 16));
    // 0x32a154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32a158: 0x34847000  ori         $a0, $a0, 0x7000
    ctx->pc = 0x32a158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28672);
    // 0x32a15c: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x32a15cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32a160: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32A160u;
    {
        const bool branch_taken_0x32a160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A160u;
        // 0x32a164: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a160) {
            ctx->pc = 0x32A16Cu;
            goto label_32a16c;
        }
    }
    ctx->pc = 0x32A168u;
    // 0x32a168: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x32a168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_32a16c:
    // 0x32a16c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32a170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a174: 0xc0ca7ca  jal         func_329F28
    ctx->pc = 0x32A174u;
    SET_GPR_U32(ctx, 31, 0x32A17Cu);
    ctx->pc = 0x32A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A174u;
    // 0x32a178: 0x24a55af0  addiu       $a1, $a1, 0x5AF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F28u, 0x32A174u, 0x32A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A17Cu;
label_32a17c:
    // 0x32a17c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32a17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a184: 0x3e00008  jr          $ra
    ctx->pc = 0x32A184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A184u;
        // 0x32a188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A18Cu;
    // 0x32a18c: 0x0  nop
    ctx->pc = 0x32a18cu;
    // NOP
    ctx->pc = 0x32a190u;
}

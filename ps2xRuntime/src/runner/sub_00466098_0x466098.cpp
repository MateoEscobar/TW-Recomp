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

// Function: sub_00466098
// Address: 0x466098 - 0x4660f0
void sub_00466098_0x466098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466098_0x466098");
#endif

    switch (ctx->pc) {
        case 0x4660c4u: goto label_4660c4;
        case 0x4660d4u: goto label_4660d4;
        default: break;
    }

    ctx->pc = 0x466098u;

    // 0x466098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x466098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46609c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4660a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4660a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4660a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4660a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4660a8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4660a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4660ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4660acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4660b0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4660b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x4660b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4660B4u;
    {
        const bool branch_taken_0x4660b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4660B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4660B4u;
        // 0x4660b8: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4660b4) {
            ctx->pc = 0x4660CCu;
            goto label_4660cc;
        }
    }
    ctx->pc = 0x4660BCu;
    // 0x4660bc: 0xc11851c  jal         func_461470
    ctx->pc = 0x4660BCu;
    SET_GPR_U32(ctx, 31, 0x4660C4u);
    ctx->pc = 0x4660C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4660BCu;
    // 0x4660c0: 0x3484100e  ori         $a0, $a0, 0x100E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x4660BCu, 0x4660C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4660C4u;
label_4660c4:
    // 0x4660c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4660C4u;
    {
        const bool branch_taken_0x4660c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4660C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4660C4u;
        // 0x4660c8: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4660c4) {
            ctx->pc = 0x4660D8u;
            goto label_4660d8;
        }
    }
    ctx->pc = 0x4660CCu;
label_4660cc:
    // 0x4660cc: 0xc11851c  jal         func_461470
    ctx->pc = 0x4660CCu;
    SET_GPR_U32(ctx, 31, 0x4660D4u);
    ctx->pc = 0x4660D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4660CCu;
    // 0x4660d0: 0x3484100d  ori         $a0, $a0, 0x100D (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4109);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x4660CCu, 0x4660D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4660D4u;
label_4660d4:
    // 0x4660d4: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x4660d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_4660d8:
    // 0x4660d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4660d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4660dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4660dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4660e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4660e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4660e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4660E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4660E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4660E4u;
        // 0x4660e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4660E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4660ECu;
    // 0x4660ec: 0x0  nop
    ctx->pc = 0x4660ecu;
    // NOP
    ctx->pc = 0x4660f0u;
}

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

// Function: sub_00229868
// Address: 0x229868 - 0x2298b8
void sub_00229868_0x229868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229868_0x229868");
#endif

    switch (ctx->pc) {
        case 0x229868u: goto label_229868;
        case 0x22986cu: goto label_22986c;
        case 0x229870u: goto label_229870;
        case 0x229874u: goto label_229874;
        case 0x229878u: goto label_229878;
        case 0x22987cu: goto label_22987c;
        case 0x229880u: goto label_229880;
        case 0x229884u: goto label_229884;
        case 0x229888u: goto label_229888;
        case 0x22988cu: goto label_22988c;
        case 0x229890u: goto label_229890;
        case 0x229894u: goto label_229894;
        case 0x229898u: goto label_229898;
        case 0x22989cu: goto label_22989c;
        case 0x2298a0u: goto label_2298a0;
        case 0x2298a4u: goto label_2298a4;
        case 0x2298a8u: goto label_2298a8;
        case 0x2298acu: goto label_2298ac;
        case 0x2298b0u: goto label_2298b0;
        case 0x2298b4u: goto label_2298b4;
        default: break;
    }

    ctx->pc = 0x229868u;

label_229868:
    // 0x229868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x229868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22986c:
    // 0x22986c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22986cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_229870:
    // 0x229870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x229870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229874:
    // 0x229874: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_229878:
    if (ctx->pc == 0x229878u) {
        ctx->pc = 0x229878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229874u;
        // 0x229878: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22987Cu;
        goto label_22987c;
    }
    ctx->pc = 0x229874u;
    {
        const bool branch_taken_0x229874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229874u;
        // 0x229878: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229874) {
            ctx->pc = 0x22989Cu;
            goto label_22989c;
        }
    }
    ctx->pc = 0x22987Cu;
label_22987c:
    // 0x22987c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_229880:
    // 0x229880: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x229880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_229884:
    // 0x229884: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x229884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_229888:
    // 0x229888: 0x40f809  jalr        $v0
label_22988c:
    if (ctx->pc == 0x22988Cu) {
        ctx->pc = 0x22988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229888u;
        // 0x22988c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229890u;
        goto label_229890;
    }
    ctx->pc = 0x229888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229890u);
        ctx->pc = 0x22988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229888u;
        // 0x22988c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229888u, 0x229890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229890u;
label_229890:
    // 0x229890: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x229890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_229894:
    // 0x229894: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_229898:
    if (ctx->pc == 0x229898u) {
        ctx->pc = 0x229898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229894u;
        // 0x229898: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22989Cu;
        goto label_22989c;
    }
    ctx->pc = 0x229894u;
    {
        const bool branch_taken_0x229894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229894u;
        // 0x229898: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229894) {
            ctx->pc = 0x2298A0u;
            goto label_2298a0;
        }
    }
    ctx->pc = 0x22989Cu;
label_22989c:
    // 0x22989c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22989cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2298a0:
    // 0x2298a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2298a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2298a4:
    // 0x2298a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2298a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2298a8:
    // 0x2298a8: 0x3e00008  jr          $ra
label_2298ac:
    if (ctx->pc == 0x2298ACu) {
        ctx->pc = 0x2298ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298A8u;
        // 0x2298ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298B0u;
        goto label_2298b0;
    }
    ctx->pc = 0x2298A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2298ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298A8u;
        // 0x2298ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2298A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2298B0u;
label_2298b0:
    // 0x2298b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2298b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2298b4:
    // 0x2298b4: 0x0  nop
    ctx->pc = 0x2298b4u;
    // NOP
    ctx->pc = 0x2298b8u;
}

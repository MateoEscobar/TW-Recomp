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

// Function: sub_004986E8
// Address: 0x4986e8 - 0x498760
void sub_004986E8_0x4986e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004986E8_0x4986e8");
#endif

    switch (ctx->pc) {
        case 0x498724u: goto label_498724;
        default: break;
    }

    ctx->pc = 0x4986e8u;

    // 0x4986e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4986e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4986ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4986ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4986f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4986f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4986f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4986f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4986f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4986f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4986fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4986fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x498700: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x498700u;
    {
        const bool branch_taken_0x498700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x498704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498700u;
        // 0x498704: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498700) {
            ctx->pc = 0x498744u;
            goto label_498744;
        }
    }
    ctx->pc = 0x498708u;
    // 0x498708: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x498708u;
    {
        const bool branch_taken_0x498708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498708u;
        // 0x49870c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498708) {
            ctx->pc = 0x498748u;
            goto label_498748;
        }
    }
    ctx->pc = 0x498710u;
    // 0x498710: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x498710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498714: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x498714u;
    {
        const bool branch_taken_0x498714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498714u;
        // 0x498718: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498714) {
            ctx->pc = 0x498744u;
            goto label_498744;
        }
    }
    ctx->pc = 0x49871Cu;
    // 0x49871c: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x49871Cu;
    SET_GPR_U32(ctx, 31, 0x498724u);
    ctx->pc = 0x498720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49871Cu;
    // 0x498720: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x49871Cu, 0x498724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498724u;
label_498724:
    // 0x498724: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x498724u;
    {
        const bool branch_taken_0x498724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498724u;
        // 0x498728: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498724) {
            ctx->pc = 0x498744u;
            goto label_498744;
        }
    }
    ctx->pc = 0x49872Cu;
    // 0x49872c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498730: 0x8f848a20  lw          $a0, -0x75E0($gp)
    ctx->pc = 0x498730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x498734: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x498734u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x498738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49873c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49873Cu;
    {
        const bool branch_taken_0x49873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49873Cu;
        // 0x498740: 0xa4650014  sh          $a1, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49873c) {
            ctx->pc = 0x498748u;
            goto label_498748;
        }
    }
    ctx->pc = 0x498744u;
label_498744:
    // 0x498744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x498744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498748:
    // 0x498748: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x498748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49874c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49874cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498754: 0x3e00008  jr          $ra
    ctx->pc = 0x498754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498754u;
        // 0x498758: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49875Cu;
    // 0x49875c: 0x0  nop
    ctx->pc = 0x49875cu;
    // NOP
    ctx->pc = 0x498760u;
}

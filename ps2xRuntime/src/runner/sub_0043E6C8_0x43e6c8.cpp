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

// Function: sub_0043E6C8
// Address: 0x43e6c8 - 0x43e778
void sub_0043E6C8_0x43e6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E6C8_0x43e6c8");
#endif

    switch (ctx->pc) {
        case 0x43e708u: goto label_43e708;
        default: break;
    }

    ctx->pc = 0x43e6c8u;

    // 0x43e6c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43e6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43e6cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43e6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43e6d0: 0x3c110052  lui         $s1, 0x52
    ctx->pc = 0x43e6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)82 << 16));
    // 0x43e6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43e6d8: 0x8e258e5c  lw          $a1, -0x71A4($s1)
    ctx->pc = 0x43e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x518E5Cu));
    // 0x43e6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43e6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e6e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x43e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x43e6e4: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x43e6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x43e6e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43E6E8u;
    {
        const bool branch_taken_0x43e6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E6E8u;
        // 0x43e6ec: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e6e8) {
            ctx->pc = 0x43E710u;
            goto label_43e710;
        }
    }
    ctx->pc = 0x43E6F0u;
    // 0x43e6f0: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x43e6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x43e6f4: 0xae208e5c  sw          $zero, -0x71A4($s1)
    ctx->pc = 0x43e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938204), GPR_U32(ctx, 0));
    // 0x43e6f8: 0x26420300  addiu       $v0, $s2, 0x300
    ctx->pc = 0x43e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
    // 0x43e6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43e6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e700: 0xc11125a  jal         func_444968
    ctx->pc = 0x43E700u;
    SET_GPR_U32(ctx, 31, 0x43E708u);
    ctx->pc = 0x43E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E700u;
    // 0x43e704: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444968u, 0x43E700u, 0x43E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E708u;
label_43e708:
    // 0x43e708: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43E708u;
    {
        const bool branch_taken_0x43e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E708u;
        // 0x43e70c: 0x8e258e5c  lw          $a1, -0x71A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e708) {
            ctx->pc = 0x43E714u;
            goto label_43e714;
        }
    }
    ctx->pc = 0x43E710u;
label_43e710:
    // 0x43e710: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x43e710u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
label_43e714:
    // 0x43e714: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x43e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x43e718: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x43E718u;
    {
        const bool branch_taken_0x43e718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x43E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E718u;
        // 0x43e71c: 0x26420300  addiu       $v0, $s2, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e718) {
            ctx->pc = 0x43E750u;
            goto label_43e750;
        }
    }
    ctx->pc = 0x43E720u;
    // 0x43e720: 0x26440300  addiu       $a0, $s2, 0x300
    ctx->pc = 0x43e720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
    // 0x43e724: 0xae208e5c  sw          $zero, -0x71A4($s1)
    ctx->pc = 0x43e724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938204), GPR_U32(ctx, 0));
    // 0x43e728: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x43e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x43e72c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43e72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43e730: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x43e730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x43e734: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43e734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e738: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43e738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43e73c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43e73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43e740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e744: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x43e744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x43e748: 0x811125a  j           func_444968
    ctx->pc = 0x43E748u;
    ctx->pc = 0x43E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E748u;
    // 0x43e74c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444968u;
    sub_00444968_0x444968(rdram, ctx, runtime); return;
    ctx->pc = 0x43E750u;
label_43e750:
    // 0x43e750: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x43e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x43e754: 0xae238e5c  sw          $v1, -0x71A4($s1)
    ctx->pc = 0x43e754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938204), GPR_U32(ctx, 3));
    // 0x43e758: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x43e758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x43e75c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x43e75cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x43e760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43e764: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43e764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43e768: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43e768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43e76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43e76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e770: 0x3e00008  jr          $ra
    ctx->pc = 0x43E770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E770u;
        // 0x43e774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E778u;
}

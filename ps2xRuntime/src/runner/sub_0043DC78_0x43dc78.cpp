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

// Function: sub_0043DC78
// Address: 0x43dc78 - 0x43dd50
void sub_0043DC78_0x43dc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043DC78_0x43dc78");
#endif

    switch (ctx->pc) {
        case 0x43dcb8u: goto label_43dcb8;
        case 0x43dcc0u: goto label_43dcc0;
        case 0x43dd18u: goto label_43dd18;
        case 0x43dd28u: goto label_43dd28;
        case 0x43dd38u: goto label_43dd38;
        case 0x43dd48u: goto label_43dd48;
        default: break;
    }

    ctx->pc = 0x43dc78u;

    // 0x43dc78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x43dc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x43dc7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43dc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x43dc80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43dc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43dc84: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x43dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x43dc88: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x43dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x43dc8c: 0x3c160070  lui         $s6, 0x70
    ctx->pc = 0x43dc8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)112 << 16));
    // 0x43dc90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x43dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x43dc94: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x43dc94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
    // 0x43dc98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x43dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x43dc9c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x43dc9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43dca0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x43dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x43dca4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x43dca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x43dca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x43dcac: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x43dcacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x43dcb0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x43dcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x43dcb4: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x43dcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_43dcb8:
    // 0x43dcb8: 0xc10f438  jal         func_43D0E0
    ctx->pc = 0x43DCB8u;
    SET_GPR_U32(ctx, 31, 0x43DCC0u);
    ctx->pc = 0x43DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DCB8u;
    // 0x43dcbc: 0x8ec4fb20  lw          $a0, -0x4E0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294966048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0E0u, 0x43DCB8u, 0x43DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DCC0u;
label_43dcc0:
    // 0x43dcc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x43dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x43dcc4: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x43dcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x43dcc8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x43dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x43dccc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x43dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x43dcd0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x43dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x43dcd4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x43dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x43dcd8: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x43dcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x43dcdc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x43dcdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x43dce0: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x43DCE0u;
    {
        const bool branch_taken_0x43dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x43DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DCE0u;
        // 0x43dce4: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dce0) {
            ctx->pc = 0x43DD20u;
            goto label_43dd20;
        }
    }
    ctx->pc = 0x43DCE8u;
    // 0x43dce8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x43DCE8u;
    {
        const bool branch_taken_0x43dce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DCE8u;
        // 0x43dcec: 0x26a4d810  addiu       $a0, $s5, -0x27F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dce8) {
            ctx->pc = 0x43DD00u;
            goto label_43dd00;
        }
    }
    ctx->pc = 0x43DCF0u;
    // 0x43dcf0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43DCF0u;
    {
        const bool branch_taken_0x43dcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DCF0u;
        // 0x43dcf4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dcf0) {
            ctx->pc = 0x43DD10u;
            goto label_43dd10;
        }
    }
    ctx->pc = 0x43DCF8u;
    // 0x43dcf8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x43DCF8u;
    {
        const bool branch_taken_0x43dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dcf8) {
            ctx->pc = 0x43DD40u;
            goto label_43dd40;
        }
    }
    ctx->pc = 0x43DD00u;
label_43dd00:
    // 0x43dd00: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x43DD00u;
    {
        const bool branch_taken_0x43dd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x43DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43DD00u;
        // 0x43dd04: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43dd00) {
            ctx->pc = 0x43DD30u;
            goto label_43dd30;
        }
    }
    ctx->pc = 0x43DD08u;
    // 0x43dd08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x43DD08u;
    {
        const bool branch_taken_0x43dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd08) {
            ctx->pc = 0x43DD40u;
            goto label_43dd40;
        }
    }
    ctx->pc = 0x43DD10u;
label_43dd10:
    // 0x43dd10: 0xc10f3f4  jal         func_43CFD0
    ctx->pc = 0x43DD10u;
    SET_GPR_U32(ctx, 31, 0x43DD18u);
    ctx->pc = 0x43DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DD10u;
    // 0x43dd14: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CFD0u, 0x43DD10u, 0x43DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DD18u;
label_43dd18:
    // 0x43dd18: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x43DD18u;
    {
        const bool branch_taken_0x43dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd18) {
            ctx->pc = 0x43DCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43dcb8;
        }
    }
    ctx->pc = 0x43DD20u;
label_43dd20:
    // 0x43dd20: 0xc10f3d4  jal         func_43CF50
    ctx->pc = 0x43DD20u;
    SET_GPR_U32(ctx, 31, 0x43DD28u);
    ctx->pc = 0x43DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DD20u;
    // 0x43dd24: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CF50u, 0x43DD20u, 0x43DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DD28u;
label_43dd28:
    // 0x43dd28: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x43DD28u;
    {
        const bool branch_taken_0x43dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd28) {
            ctx->pc = 0x43DCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43dcb8;
        }
    }
    ctx->pc = 0x43DD30u;
label_43dd30:
    // 0x43dd30: 0xc10f404  jal         func_43D010
    ctx->pc = 0x43DD30u;
    SET_GPR_U32(ctx, 31, 0x43DD38u);
    ctx->pc = 0x43DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43DD30u;
    // 0x43dd34: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D010u, 0x43DD30u, 0x43DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DD38u;
label_43dd38:
    // 0x43dd38: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x43DD38u;
    {
        const bool branch_taken_0x43dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd38) {
            ctx->pc = 0x43DCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43dcb8;
        }
    }
    ctx->pc = 0x43DD40u;
label_43dd40:
    // 0x43dd40: 0xc10fe3c  jal         func_43F8F0
    ctx->pc = 0x43DD40u;
    SET_GPR_U32(ctx, 31, 0x43DD48u);
    ctx->pc = 0x43F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F8F0u, 0x43DD40u, 0x43DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43DD48u;
label_43dd48:
    // 0x43dd48: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x43DD48u;
    {
        const bool branch_taken_0x43dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43dd48) {
            ctx->pc = 0x43DCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43dcb8;
        }
    }
    ctx->pc = 0x43DD50u;
}

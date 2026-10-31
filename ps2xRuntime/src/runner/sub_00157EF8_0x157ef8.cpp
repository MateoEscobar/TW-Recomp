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

// Function: sub_00157EF8
// Address: 0x157ef8 - 0x157ff0
void sub_00157EF8_0x157ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157EF8_0x157ef8");
#endif

    switch (ctx->pc) {
        case 0x157ef8u: goto label_157ef8;
        case 0x157efcu: goto label_157efc;
        case 0x157f00u: goto label_157f00;
        case 0x157f04u: goto label_157f04;
        case 0x157f08u: goto label_157f08;
        case 0x157f0cu: goto label_157f0c;
        case 0x157f10u: goto label_157f10;
        case 0x157f14u: goto label_157f14;
        case 0x157f18u: goto label_157f18;
        case 0x157f1cu: goto label_157f1c;
        case 0x157f20u: goto label_157f20;
        case 0x157f24u: goto label_157f24;
        case 0x157f28u: goto label_157f28;
        case 0x157f2cu: goto label_157f2c;
        case 0x157f30u: goto label_157f30;
        case 0x157f34u: goto label_157f34;
        case 0x157f38u: goto label_157f38;
        case 0x157f3cu: goto label_157f3c;
        case 0x157f40u: goto label_157f40;
        case 0x157f44u: goto label_157f44;
        case 0x157f48u: goto label_157f48;
        case 0x157f4cu: goto label_157f4c;
        case 0x157f50u: goto label_157f50;
        case 0x157f54u: goto label_157f54;
        case 0x157f58u: goto label_157f58;
        case 0x157f5cu: goto label_157f5c;
        case 0x157f60u: goto label_157f60;
        case 0x157f64u: goto label_157f64;
        case 0x157f68u: goto label_157f68;
        case 0x157f6cu: goto label_157f6c;
        case 0x157f70u: goto label_157f70;
        case 0x157f74u: goto label_157f74;
        case 0x157f78u: goto label_157f78;
        case 0x157f7cu: goto label_157f7c;
        case 0x157f80u: goto label_157f80;
        case 0x157f84u: goto label_157f84;
        case 0x157f88u: goto label_157f88;
        case 0x157f8cu: goto label_157f8c;
        case 0x157f90u: goto label_157f90;
        case 0x157f94u: goto label_157f94;
        case 0x157f98u: goto label_157f98;
        case 0x157f9cu: goto label_157f9c;
        case 0x157fa0u: goto label_157fa0;
        case 0x157fa4u: goto label_157fa4;
        case 0x157fa8u: goto label_157fa8;
        case 0x157facu: goto label_157fac;
        case 0x157fb0u: goto label_157fb0;
        case 0x157fb4u: goto label_157fb4;
        case 0x157fb8u: goto label_157fb8;
        case 0x157fbcu: goto label_157fbc;
        case 0x157fc0u: goto label_157fc0;
        case 0x157fc4u: goto label_157fc4;
        case 0x157fc8u: goto label_157fc8;
        case 0x157fccu: goto label_157fcc;
        case 0x157fd0u: goto label_157fd0;
        case 0x157fd4u: goto label_157fd4;
        case 0x157fd8u: goto label_157fd8;
        case 0x157fdcu: goto label_157fdc;
        case 0x157fe0u: goto label_157fe0;
        case 0x157fe4u: goto label_157fe4;
        case 0x157fe8u: goto label_157fe8;
        case 0x157fecu: goto label_157fec;
        default: break;
    }

    ctx->pc = 0x157ef8u;

label_157ef8:
    // 0x157ef8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x157ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_157efc:
    // 0x157efc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x157efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_157f00:
    // 0x157f00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x157f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_157f04:
    // 0x157f04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_157f08:
    // 0x157f08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157f0c:
    // 0x157f0c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x157f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_157f10:
    // 0x157f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_157f14:
    // 0x157f14: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x157f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_157f18:
    // 0x157f18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x157f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_157f1c:
    // 0x157f1c: 0x8c500834  lw          $s0, 0x834($v0)
    ctx->pc = 0x157f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2100)));
label_157f20:
    // 0x157f20: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_157f24:
    // 0x157f24: 0x1000000c  b           . + 4 + (0xC << 2)
label_157f28:
    if (ctx->pc == 0x157F28u) {
        ctx->pc = 0x157F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F24u;
        // 0x157f28: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F2Cu;
        goto label_157f2c;
    }
    ctx->pc = 0x157F24u;
    {
        const bool branch_taken_0x157f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F24u;
        // 0x157f28: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f24) {
            ctx->pc = 0x157F58u;
            goto label_157f58;
        }
    }
    ctx->pc = 0x157F2Cu;
label_157f2c:
    // 0x157f2c: 0x0  nop
    ctx->pc = 0x157f2cu;
    // NOP
label_157f30:
    // 0x157f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157f34:
    // 0x157f34: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x157f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_157f38:
    // 0x157f38: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x157f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_157f3c:
    // 0x157f3c: 0x40f809  jalr        $v0
label_157f40:
    if (ctx->pc == 0x157F40u) {
        ctx->pc = 0x157F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F3Cu;
        // 0x157f40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F44u;
        goto label_157f44;
    }
    ctx->pc = 0x157F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157F44u);
        ctx->pc = 0x157F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F3Cu;
        // 0x157f40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157F3Cu, 0x157F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157F44u;
label_157f44:
    // 0x157f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x157f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_157f48:
    // 0x157f48: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x157f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_157f4c:
    // 0x157f4c: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x157f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_157f50:
    // 0x157f50: 0xa0f809  jalr        $a1
label_157f54:
    if (ctx->pc == 0x157F54u) {
        ctx->pc = 0x157F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F50u;
        // 0x157f54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F58u;
        goto label_157f58;
    }
    ctx->pc = 0x157F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x157F58u);
        ctx->pc = 0x157F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F50u;
        // 0x157f54: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157F50u, 0x157F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157F58u;
label_157f58:
    // 0x157f58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x157f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_157f5c:
    // 0x157f5c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x157f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_157f60:
    // 0x157f60: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x157f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_157f64:
    // 0x157f64: 0x40f809  jalr        $v0
label_157f68:
    if (ctx->pc == 0x157F68u) {
        ctx->pc = 0x157F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F64u;
        // 0x157f68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F6Cu;
        goto label_157f6c;
    }
    ctx->pc = 0x157F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157F6Cu);
        ctx->pc = 0x157F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F64u;
        // 0x157f68: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157F64u, 0x157F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157F6Cu;
label_157f6c:
    // 0x157f6c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_157f70:
    if (ctx->pc == 0x157F70u) {
        ctx->pc = 0x157F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F6Cu;
        // 0x157f70: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F74u;
        goto label_157f74;
    }
    ctx->pc = 0x157F6Cu;
    {
        const bool branch_taken_0x157f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157f6c) {
            ctx->pc = 0x157F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F6Cu;
            // 0x157f70: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157f30;
        }
    }
    ctx->pc = 0x157F74u;
label_157f74:
    // 0x157f74: 0xc043eda  jal         func_10FB68
label_157f78:
    if (ctx->pc == 0x157F78u) {
        ctx->pc = 0x157F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F74u;
        // 0x157f78: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F7Cu;
        goto label_157f7c;
    }
    ctx->pc = 0x157F74u;
    SET_GPR_U32(ctx, 31, 0x157F7Cu);
    ctx->pc = 0x157F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157F74u;
    // 0x157f78: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB68u, 0x157F74u, 0x157F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F7Cu;
label_157f7c:
    // 0x157f7c: 0x82220024  lb          $v0, 0x24($s1)
    ctx->pc = 0x157f7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_157f80:
    // 0x157f80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_157f84:
    if (ctx->pc == 0x157F84u) {
        ctx->pc = 0x157F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F80u;
        // 0x157f84: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157F88u;
        goto label_157f88;
    }
    ctx->pc = 0x157F80u;
    {
        const bool branch_taken_0x157f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F80u;
        // 0x157f84: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f80) {
            ctx->pc = 0x157FC4u;
            goto label_157fc4;
        }
    }
    ctx->pc = 0x157F88u;
label_157f88:
    // 0x157f88: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_157f8c:
    // 0x157f8c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_157f90:
    // 0x157f90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x157f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_157f94:
    // 0x157f94: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x157f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_157f98:
    // 0x157f98: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x157f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_157f9c:
    // 0x157f9c: 0x40f809  jalr        $v0
label_157fa0:
    if (ctx->pc == 0x157FA0u) {
        ctx->pc = 0x157FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F9Cu;
        // 0x157fa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FA4u;
        goto label_157fa4;
    }
    ctx->pc = 0x157F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157FA4u);
        ctx->pc = 0x157FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F9Cu;
        // 0x157fa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157F9Cu, 0x157FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157FA4u;
label_157fa4:
    // 0x157fa4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x157fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_157fa8:
    // 0x157fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157fac:
    // 0x157fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157fb0:
    // 0x157fb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x157fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_157fb4:
    // 0x157fb4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x157fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_157fb8:
    // 0x157fb8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_157fbc:
    // 0x157fbc: 0x60f809  jalr        $v1
label_157fc0:
    if (ctx->pc == 0x157FC0u) {
        ctx->pc = 0x157FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FBCu;
        // 0x157fc0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FC4u;
        goto label_157fc4;
    }
    ctx->pc = 0x157FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157FC4u);
        ctx->pc = 0x157FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FBCu;
        // 0x157fc0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157FBCu, 0x157FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157FC4u;
label_157fc4:
    // 0x157fc4: 0x8e64b734  lw          $a0, -0x48CC($s3)
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_157fc8:
    // 0x157fc8: 0xc0517d8  jal         func_145F60
label_157fcc:
    if (ctx->pc == 0x157FCCu) {
        ctx->pc = 0x157FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FC8u;
        // 0x157fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FD0u;
        goto label_157fd0;
    }
    ctx->pc = 0x157FC8u;
    SET_GPR_U32(ctx, 31, 0x157FD0u);
    ctx->pc = 0x157FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157FC8u;
    // 0x157fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x157FC8u, 0x157FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FD0u;
label_157fd0:
    // 0x157fd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x157fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_157fd4:
    // 0x157fd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x157fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_157fd8:
    // 0x157fd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_157fdc:
    // 0x157fdc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x157fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_157fe0:
    // 0x157fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157fe4:
    // 0x157fe4: 0x3e00008  jr          $ra
label_157fe8:
    if (ctx->pc == 0x157FE8u) {
        ctx->pc = 0x157FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FE4u;
        // 0x157fe8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157FECu;
        goto label_157fec;
    }
    ctx->pc = 0x157FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FE4u;
        // 0x157fe8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157FECu;
label_157fec:
    // 0x157fec: 0x0  nop
    ctx->pc = 0x157fecu;
    // NOP
    ctx->pc = 0x157ff0u;
}

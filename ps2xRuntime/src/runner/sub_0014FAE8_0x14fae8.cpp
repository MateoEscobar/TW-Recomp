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

// Function: sub_0014FAE8
// Address: 0x14fae8 - 0x14fcd8
void sub_0014FAE8_0x14fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FAE8_0x14fae8");
#endif

    switch (ctx->pc) {
        case 0x14fb14u: goto label_14fb14;
        case 0x14fb20u: goto label_14fb20;
        case 0x14fb28u: goto label_14fb28;
        case 0x14fb48u: goto label_14fb48;
        case 0x14fb5cu: goto label_14fb5c;
        case 0x14fb70u: goto label_14fb70;
        case 0x14fb84u: goto label_14fb84;
        case 0x14fbb4u: goto label_14fbb4;
        case 0x14fc10u: goto label_14fc10;
        case 0x14fc54u: goto label_14fc54;
        case 0x14fc64u: goto label_14fc64;
        default: break;
    }

    ctx->pc = 0x14fae8u;

    // 0x14fae8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14fae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14faec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14faf0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14faf4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14faf8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14fafc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x14fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x14fb00: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x14fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14fb04: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x14fb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x14fb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14fb0c: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14FB0Cu;
    SET_GPR_U32(ctx, 31, 0x14FB14u);
    ctx->pc = 0x14FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FB0Cu;
    // 0x14fb10: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14FB0Cu, 0x14FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB14u;
label_14fb14:
    // 0x14fb14: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x14FB14u;
    {
        const bool branch_taken_0x14fb14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB14u;
        // 0x14fb18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb14) {
            ctx->pc = 0x14FB40u;
            goto label_14fb40;
        }
    }
    ctx->pc = 0x14FB1Cu;
    // 0x14fb1c: 0x0  nop
    ctx->pc = 0x14fb1cu;
    // NOP
label_14fb20:
    // 0x14fb20: 0xc054660  jal         func_151980
    ctx->pc = 0x14FB20u;
    SET_GPR_U32(ctx, 31, 0x14FB28u);
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x14FB20u, 0x14FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB28u;
label_14fb28:
    // 0x14fb28: 0x0  nop
    ctx->pc = 0x14fb28u;
    // NOP
    // 0x14fb2c: 0x0  nop
    ctx->pc = 0x14fb2cu;
    // NOP
    // 0x14fb30: 0x1050fffb  beq         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14FB30u;
    {
        const bool branch_taken_0x14fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x14FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB30u;
        // 0x14fb34: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb30) {
            ctx->pc = 0x14FB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fb20;
        }
    }
    ctx->pc = 0x14FB38u;
    // 0x14fb38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14FB38u;
    {
        const bool branch_taken_0x14fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fb38) {
            ctx->pc = 0x14FB68u;
            goto label_14fb68;
        }
    }
    ctx->pc = 0x14FB40u;
label_14fb40:
    // 0x14fb40: 0xc054660  jal         func_151980
    ctx->pc = 0x14FB40u;
    SET_GPR_U32(ctx, 31, 0x14FB48u);
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x14FB40u, 0x14FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB48u;
label_14fb48:
    // 0x14fb48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fb4c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FB4Cu;
    {
        const bool branch_taken_0x14fb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB4Cu;
        // 0x14fb50: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb4c) {
            ctx->pc = 0x14FB68u;
            goto label_14fb68;
        }
    }
    ctx->pc = 0x14FB54u;
    // 0x14fb54: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14FB54u;
    SET_GPR_U32(ctx, 31, 0x14FB5Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14FB54u, 0x14FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB5Cu;
label_14fb5c:
    // 0x14fb5c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14fb60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14FB60u;
    {
        const bool branch_taken_0x14fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB60u;
        // 0x14fb64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb60) {
            ctx->pc = 0x14FB8Cu;
            goto label_14fb8c;
        }
    }
    ctx->pc = 0x14FB68u;
label_14fb68:
    // 0x14fb68: 0xc1102ce  jal         func_440B38
    ctx->pc = 0x14FB68u;
    SET_GPR_U32(ctx, 31, 0x14FB70u);
    ctx->pc = 0x14FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FB68u;
    // 0x14fb6c: 0x24844180  addiu       $a0, $a0, 0x4180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440B38u, 0x14FB68u, 0x14FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB70u;
label_14fb70:
    // 0x14fb70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14fb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb74: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14FB74u;
    {
        const bool branch_taken_0x14fb74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB74u;
        // 0x14fb78: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb74) {
            ctx->pc = 0x14FB9Cu;
            goto label_14fb9c;
        }
    }
    ctx->pc = 0x14FB7Cu;
    // 0x14fb7c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14FB7Cu;
    SET_GPR_U32(ctx, 31, 0x14FB84u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14FB7Cu, 0x14FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FB84u;
label_14fb84:
    // 0x14fb84: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14fb88: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_14fb8c:
    // 0x14fb8c: 0x8c83c550  lw          $v1, -0x3AB0($a0)
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952272)));
    // 0x14fb90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14fb94: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x14FB94u;
    {
        const bool branch_taken_0x14fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB94u;
        // 0x14fb98: 0xac83c550  sw          $v1, -0x3AB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb94) {
            ctx->pc = 0x14FCB0u;
            goto label_14fcb0;
        }
    }
    ctx->pc = 0x14FB9Cu;
label_14fb9c:
    // 0x14fb9c: 0x8222c210  lb          $v0, -0x3DF0($s1)
    ctx->pc = 0x14fb9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294951440)));
    // 0x14fba0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FBA0u;
    {
        const bool branch_taken_0x14fba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBA0u;
        // 0x14fba4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fba0) {
            ctx->pc = 0x14FBB8u;
            goto label_14fbb8;
        }
    }
    ctx->pc = 0x14FBA8u;
    // 0x14fba8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14fbac: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14FBACu;
    SET_GPR_U32(ctx, 31, 0x14FBB4u);
    ctx->pc = 0x14FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FBACu;
    // 0x14fbb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14FBACu, 0x14FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBB4u;
label_14fbb4:
    // 0x14fbb4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_14fbb8:
    // 0x14fbb8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14fbbc: 0x8c45bd14  lw          $a1, -0x42EC($v0)
    ctx->pc = 0x14fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950164)));
    // 0x14fbc0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14fbc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbc4: 0x9486c500  lhu         $a2, -0x3B00($a0)
    ctx->pc = 0x14fbc4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x50C500u));
    // 0x14fbc8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14fbcc: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x14fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x14fbd0: 0xa220c210  sb          $zero, -0x3DF0($s1)
    ctx->pc = 0x14fbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294951440), (uint8_t)GPR_U32(ctx, 0));
    // 0x14fbd4: 0x2467fdc0  addiu       $a3, $v1, -0x240
    ctx->pc = 0x14fbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966720));
    // 0x14fbd8: 0xa462fdc0  sh          $v0, -0x240($v1)
    ctx->pc = 0x14fbd8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DFDC0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5DFDC0u, _value); } while (0);
    // 0x14fbdc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x14fbdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbe0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x14fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x14fbe4: 0xa4e60002  sh          $a2, 0x2($a3)
    ctx->pc = 0x14fbe4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5DFDC2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5DFDC2u, _value); } while (0);
    // 0x14fbe8: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x14fbe8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14fbec: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x14fbecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x14fbf0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x14fbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x14fbf4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x14fbf4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x14fbf8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x14fbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x14fbfc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14FBFCu;
    {
        const bool branch_taken_0x14fbfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBFCu;
        // 0x14fc00: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbfc) {
            ctx->pc = 0x14FC28u;
            goto label_14fc28;
        }
    }
    ctx->pc = 0x14FC04u;
    // 0x14fc04: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x14fc04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14fc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc0c: 0x25040dc0  addiu       $a0, $t0, 0xDC0
    ctx->pc = 0x14fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 3520));
label_14fc10:
    // 0x14fc10: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14fc10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fc14: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x14fc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x14fc18: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x14fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x14fc1c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x14fc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fc20: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14FC20u;
    {
        const bool branch_taken_0x14fc20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC20u;
        // 0x14fc24: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc20) {
            ctx->pc = 0x14FC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fc10;
        }
    }
    ctx->pc = 0x14FC28u;
label_14fc28:
    // 0x14fc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fc2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14fc30: 0x8cc4c548  lw          $a0, -0x3AB8($a2)
    ctx->pc = 0x14fc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952264)));
    // 0x14fc34: 0xac62bd30  sw          $v0, -0x42D0($v1)
    ctx->pc = 0x14fc34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50BD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD30u, _value); } while (0);
    // 0x14fc38: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FC38u;
    {
        const bool branch_taken_0x14fc38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x14FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC38u;
        // 0x14fc3c: 0x25050dc0  addiu       $a1, $t0, 0xDC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc38) {
            ctx->pc = 0x14FC48u;
            goto label_14fc48;
        }
    }
    ctx->pc = 0x14FC40u;
    // 0x14fc40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fc44: 0xacc2c548  sw          $v0, -0x3AB8($a2)
    ctx->pc = 0x14fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952264), GPR_U32(ctx, 2));
label_14fc48:
    // 0x14fc48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14fc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc4c: 0xc05367a  jal         func_14D9E8
    ctx->pc = 0x14FC4Cu;
    SET_GPR_U32(ctx, 31, 0x14FC54u);
    ctx->pc = 0x14FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC4Cu;
    // 0x14fc50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D9E8u, 0x14FC4Cu, 0x14FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC54u;
label_14fc54:
    // 0x14fc54: 0x8eb0bd14  lw          $s0, -0x42EC($s5)
    ctx->pc = 0x14fc54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950164)));
    // 0x14fc58: 0xaea0bd14  sw          $zero, -0x42EC($s5)
    ctx->pc = 0x14fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294950164), GPR_U32(ctx, 0));
    // 0x14fc5c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14FC5Cu;
    SET_GPR_U32(ctx, 31, 0x14FC64u);
    ctx->pc = 0x14FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC5Cu;
    // 0x14fc60: 0xaec0c500  sw          $zero, -0x3B00($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294952192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14FC5Cu, 0x14FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FC64u;
label_14fc64:
    // 0x14fc64: 0x8e62c560  lw          $v0, -0x3AA0($s3)
    ctx->pc = 0x14fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952288)));
    // 0x14fc68: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x14fc68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14fc6c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14FC6Cu;
    {
        const bool branch_taken_0x14fc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fc6c) {
            ctx->pc = 0x14FC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC6Cu;
            // 0x14fc70: 0xae70c560  sw          $s0, -0x3AA0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294952288), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FC74u;
            goto label_14fc74;
        }
    }
    ctx->pc = 0x14FC74u;
label_14fc74:
    // 0x14fc74: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FC74u;
    {
        const bool branch_taken_0x14fc74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC74u;
        // 0x14fc78: 0x8e22c55c  lw          $v0, -0x3AA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc74) {
            ctx->pc = 0x14FC84u;
            goto label_14fc84;
        }
    }
    ctx->pc = 0x14FC7Cu;
    // 0x14fc7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14fc80: 0xae22c55c  sw          $v0, -0x3AA4($s1)
    ctx->pc = 0x14fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952284), GPR_U32(ctx, 2));
label_14fc84:
    // 0x14fc84: 0x8e83c558  lw          $v1, -0x3AA8($s4)
    ctx->pc = 0x14fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952280)));
    // 0x14fc88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14fc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc8c: 0x8e24c55c  lw          $a0, -0x3AA4($s1)
    ctx->pc = 0x14fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952284)));
    // 0x14fc90: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x14fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14fc94: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x14fc94u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x14fc98: 0xae83c558  sw          $v1, -0x3AA8($s4)
    ctx->pc = 0x14fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294952280), GPR_U32(ctx, 3));
    // 0x14fc9c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14FC9Cu;
    {
        const bool branch_taken_0x14fc9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc9c) {
            ctx->pc = 0x14FCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FC9Cu;
            // 0x14fca0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FCA4u;
            goto label_14fca4;
        }
    }
    ctx->pc = 0x14FCA4u;
label_14fca4:
    // 0x14fca4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14fca8: 0x2812  mflo        $a1
    ctx->pc = 0x14fca8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x14fcac: 0xac65c554  sw          $a1, -0x3AAC($v1)
    ctx->pc = 0x14fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952276), GPR_U32(ctx, 5));
label_14fcb0:
    // 0x14fcb0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14fcb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14fcb4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14fcb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fcb8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14fcb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fcbc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14fcbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fcc0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x14fcc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fcc4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14fcc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fcc8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x14fcc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14fcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x14FCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FCD0u;
        // 0x14fcd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FCD8u;
}

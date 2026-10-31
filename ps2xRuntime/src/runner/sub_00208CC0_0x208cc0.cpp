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

// Function: sub_00208CC0
// Address: 0x208cc0 - 0x208e00
void sub_00208CC0_0x208cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208CC0_0x208cc0");
#endif

    switch (ctx->pc) {
        case 0x208cc0u: goto label_208cc0;
        case 0x208cc4u: goto label_208cc4;
        case 0x208cc8u: goto label_208cc8;
        case 0x208cccu: goto label_208ccc;
        case 0x208cd0u: goto label_208cd0;
        case 0x208cd4u: goto label_208cd4;
        case 0x208cd8u: goto label_208cd8;
        case 0x208cdcu: goto label_208cdc;
        case 0x208ce0u: goto label_208ce0;
        case 0x208ce4u: goto label_208ce4;
        case 0x208ce8u: goto label_208ce8;
        case 0x208cecu: goto label_208cec;
        case 0x208cf0u: goto label_208cf0;
        case 0x208cf4u: goto label_208cf4;
        case 0x208cf8u: goto label_208cf8;
        case 0x208cfcu: goto label_208cfc;
        case 0x208d00u: goto label_208d00;
        case 0x208d04u: goto label_208d04;
        case 0x208d08u: goto label_208d08;
        case 0x208d0cu: goto label_208d0c;
        case 0x208d10u: goto label_208d10;
        case 0x208d14u: goto label_208d14;
        case 0x208d18u: goto label_208d18;
        case 0x208d1cu: goto label_208d1c;
        case 0x208d20u: goto label_208d20;
        case 0x208d24u: goto label_208d24;
        case 0x208d28u: goto label_208d28;
        case 0x208d2cu: goto label_208d2c;
        case 0x208d30u: goto label_208d30;
        case 0x208d34u: goto label_208d34;
        case 0x208d38u: goto label_208d38;
        case 0x208d3cu: goto label_208d3c;
        case 0x208d40u: goto label_208d40;
        case 0x208d44u: goto label_208d44;
        case 0x208d48u: goto label_208d48;
        case 0x208d4cu: goto label_208d4c;
        case 0x208d50u: goto label_208d50;
        case 0x208d54u: goto label_208d54;
        case 0x208d58u: goto label_208d58;
        case 0x208d5cu: goto label_208d5c;
        case 0x208d60u: goto label_208d60;
        case 0x208d64u: goto label_208d64;
        case 0x208d68u: goto label_208d68;
        case 0x208d6cu: goto label_208d6c;
        case 0x208d70u: goto label_208d70;
        case 0x208d74u: goto label_208d74;
        case 0x208d78u: goto label_208d78;
        case 0x208d7cu: goto label_208d7c;
        case 0x208d80u: goto label_208d80;
        case 0x208d84u: goto label_208d84;
        case 0x208d88u: goto label_208d88;
        case 0x208d8cu: goto label_208d8c;
        case 0x208d90u: goto label_208d90;
        case 0x208d94u: goto label_208d94;
        case 0x208d98u: goto label_208d98;
        case 0x208d9cu: goto label_208d9c;
        case 0x208da0u: goto label_208da0;
        case 0x208da4u: goto label_208da4;
        case 0x208da8u: goto label_208da8;
        case 0x208dacu: goto label_208dac;
        case 0x208db0u: goto label_208db0;
        case 0x208db4u: goto label_208db4;
        case 0x208db8u: goto label_208db8;
        case 0x208dbcu: goto label_208dbc;
        case 0x208dc0u: goto label_208dc0;
        case 0x208dc4u: goto label_208dc4;
        case 0x208dc8u: goto label_208dc8;
        case 0x208dccu: goto label_208dcc;
        case 0x208dd0u: goto label_208dd0;
        case 0x208dd4u: goto label_208dd4;
        case 0x208dd8u: goto label_208dd8;
        case 0x208ddcu: goto label_208ddc;
        case 0x208de0u: goto label_208de0;
        case 0x208de4u: goto label_208de4;
        case 0x208de8u: goto label_208de8;
        case 0x208decu: goto label_208dec;
        case 0x208df0u: goto label_208df0;
        case 0x208df4u: goto label_208df4;
        case 0x208df8u: goto label_208df8;
        case 0x208dfcu: goto label_208dfc;
        default: break;
    }

    ctx->pc = 0x208cc0u;

label_208cc0:
    // 0x208cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_208cc4:
    // 0x208cc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x208cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_208cc8:
    // 0x208cc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x208cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_208ccc:
    // 0x208ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208cd0:
    // 0x208cd0: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
label_208cd4:
    if (ctx->pc == 0x208CD4u) {
        ctx->pc = 0x208CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD0u;
        // 0x208cd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CD8u;
        goto label_208cd8;
    }
    ctx->pc = 0x208CD0u;
    {
        const bool branch_taken_0x208cd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x208CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD0u;
        // 0x208cd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cd0) {
            ctx->pc = 0x208D28u;
            goto label_208d28;
        }
    }
    ctx->pc = 0x208CD8u;
label_208cd8:
    // 0x208cd8: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x208cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_208cdc:
    // 0x208cdc: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_208ce0:
    if (ctx->pc == 0x208CE0u) {
        ctx->pc = 0x208CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CDCu;
        // 0x208ce0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CE4u;
        goto label_208ce4;
    }
    ctx->pc = 0x208CDCu;
    {
        const bool branch_taken_0x208cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CDCu;
        // 0x208ce0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cdc) {
            ctx->pc = 0x208DECu;
            goto label_208dec;
        }
    }
    ctx->pc = 0x208CE4u;
label_208ce4:
    // 0x208ce4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x208ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_208ce8:
    // 0x208ce8: 0xc043f0c  jal         func_10FC30
label_208cec:
    if (ctx->pc == 0x208CECu) {
        ctx->pc = 0x208CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CE8u;
        // 0x208cec: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CF0u;
        goto label_208cf0;
    }
    ctx->pc = 0x208CE8u;
    SET_GPR_U32(ctx, 31, 0x208CF0u);
    ctx->pc = 0x208CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CE8u;
    // 0x208cec: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x208CE8u, 0x208CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CF0u;
label_208cf0:
    // 0x208cf0: 0x9203009c  lbu         $v1, 0x9C($s0)
    ctx->pc = 0x208cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_208cf4:
    // 0x208cf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208cf8:
    // 0x208cf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208cfc:
    // 0x208cfc: 0x0  nop
    ctx->pc = 0x208cfcu;
    // NOP
label_208d00:
    // 0x208d00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_208d04:
    // 0x208d04: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x208d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_208d08:
    // 0x208d08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x208d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_208d0c:
    // 0x208d0c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x208d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_208d10:
    // 0x208d10: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x208d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_208d14:
    // 0x208d14: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x208d14u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_208d18:
    // 0x208d18: 0x60f809  jalr        $v1
label_208d1c:
    if (ctx->pc == 0x208D1Cu) {
        ctx->pc = 0x208D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D18u;
        // 0x208d1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D20u;
        goto label_208d20;
    }
    ctx->pc = 0x208D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208D20u);
        ctx->pc = 0x208D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D18u;
        // 0x208d1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D18u, 0x208D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208D20u;
label_208d20:
    // 0x208d20: 0x10000033  b           . + 4 + (0x33 << 2)
label_208d24:
    if (ctx->pc == 0x208D24u) {
        ctx->pc = 0x208D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D20u;
        // 0x208d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D28u;
        goto label_208d28;
    }
    ctx->pc = 0x208D20u;
    {
        const bool branch_taken_0x208d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D20u;
        // 0x208d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d20) {
            ctx->pc = 0x208DF0u;
            goto label_208df0;
        }
    }
    ctx->pc = 0x208D28u;
label_208d28:
    // 0x208d28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_208d2c:
    // 0x208d2c: 0x14a20017  bne         $a1, $v0, . + 4 + (0x17 << 2)
label_208d30:
    if (ctx->pc == 0x208D30u) {
        ctx->pc = 0x208D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D2Cu;
        // 0x208d30: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D34u;
        goto label_208d34;
    }
    ctx->pc = 0x208D2Cu;
    {
        const bool branch_taken_0x208d2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x208D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D2Cu;
        // 0x208d30: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d2c) {
            ctx->pc = 0x208D8Cu;
            goto label_208d8c;
        }
    }
    ctx->pc = 0x208D34u;
label_208d34:
    // 0x208d34: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x208d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_208d38:
    // 0x208d38: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x208d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_208d3c:
    // 0x208d3c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_208d40:
    if (ctx->pc == 0x208D40u) {
        ctx->pc = 0x208D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D3Cu;
        // 0x208d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D44u;
        goto label_208d44;
    }
    ctx->pc = 0x208D3Cu;
    {
        const bool branch_taken_0x208d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D3Cu;
        // 0x208d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d3c) {
            ctx->pc = 0x208DF0u;
            goto label_208df0;
        }
    }
    ctx->pc = 0x208D44u;
label_208d44:
    // 0x208d44: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x208d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_208d48:
    // 0x208d48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208d4c:
    // 0x208d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_208d50:
    // 0x208d50: 0x0  nop
    ctx->pc = 0x208d50u;
    // NOP
label_208d54:
    // 0x208d54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x208d54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_208d58:
    // 0x208d58: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x208d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_208d5c:
    // 0x208d5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x208d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_208d60:
    // 0x208d60: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x208d60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_208d64:
    // 0x208d64: 0x8c6500b4  lw          $a1, 0xB4($v1)
    ctx->pc = 0x208d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_208d68:
    // 0x208d68: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x208d68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_208d6c:
    // 0x208d6c: 0xa0f809  jalr        $a1
label_208d70:
    if (ctx->pc == 0x208D70u) {
        ctx->pc = 0x208D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D6Cu;
        // 0x208d70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D74u;
        goto label_208d74;
    }
    ctx->pc = 0x208D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x208D74u);
        ctx->pc = 0x208D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D6Cu;
        // 0x208d70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D6Cu, 0x208D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208D74u;
label_208d74:
    // 0x208d74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x208d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_208d78:
    // 0x208d78: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_208d7c:
    // 0x208d7c: 0xc043f0c  jal         func_10FC30
label_208d80:
    if (ctx->pc == 0x208D80u) {
        ctx->pc = 0x208D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D7Cu;
        // 0x208d80: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D84u;
        goto label_208d84;
    }
    ctx->pc = 0x208D7Cu;
    SET_GPR_U32(ctx, 31, 0x208D84u);
    ctx->pc = 0x208D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208D7Cu;
    // 0x208d80: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x208D7Cu, 0x208D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D84u;
label_208d84:
    // 0x208d84: 0x1000001a  b           . + 4 + (0x1A << 2)
label_208d88:
    if (ctx->pc == 0x208D88u) {
        ctx->pc = 0x208D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D84u;
        // 0x208d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D8Cu;
        goto label_208d8c;
    }
    ctx->pc = 0x208D84u;
    {
        const bool branch_taken_0x208d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D84u;
        // 0x208d88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d84) {
            ctx->pc = 0x208DF0u;
            goto label_208df0;
        }
    }
    ctx->pc = 0x208D8Cu;
label_208d8c:
    // 0x208d8c: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
label_208d90:
    if (ctx->pc == 0x208D90u) {
        ctx->pc = 0x208D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D8Cu;
        // 0x208d90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D94u;
        goto label_208d94;
    }
    ctx->pc = 0x208D8Cu;
    {
        const bool branch_taken_0x208d8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x208d8c) {
            ctx->pc = 0x208D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208D8Cu;
            // 0x208d90: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208DB0u;
            goto label_208db0;
        }
    }
    ctx->pc = 0x208D94u;
label_208d94:
    // 0x208d94: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x208d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_208d98:
    // 0x208d98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x208d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_208d9c:
    // 0x208d9c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x208d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_208da0:
    // 0x208da0: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x208da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_208da4:
    // 0x208da4: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x208da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_208da8:
    // 0x208da8: 0x1000000b  b           . + 4 + (0xB << 2)
label_208dac:
    if (ctx->pc == 0x208DACu) {
        ctx->pc = 0x208DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DA8u;
        // 0x208dac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DB0u;
        goto label_208db0;
    }
    ctx->pc = 0x208DA8u;
    {
        const bool branch_taken_0x208da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DA8u;
        // 0x208dac: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208da8) {
            ctx->pc = 0x208DD8u;
            goto label_208dd8;
        }
    }
    ctx->pc = 0x208DB0u;
label_208db0:
    // 0x208db0: 0x54a2000f  bnel        $a1, $v0, . + 4 + (0xF << 2)
label_208db4:
    if (ctx->pc == 0x208DB4u) {
        ctx->pc = 0x208DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DB0u;
        // 0x208db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DB8u;
        goto label_208db8;
    }
    ctx->pc = 0x208DB0u;
    {
        const bool branch_taken_0x208db0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x208db0) {
            ctx->pc = 0x208DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208DB0u;
            // 0x208db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208DF0u;
            goto label_208df0;
        }
    }
    ctx->pc = 0x208DB8u;
label_208db8:
    // 0x208db8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x208db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_208dbc:
    // 0x208dbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x208dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_208dc0:
    // 0x208dc0: 0x8c665024  lw          $a2, 0x5024($v1)
    ctx->pc = 0x208dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20516)));
label_208dc4:
    // 0x208dc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208dc8:
    // 0x208dc8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x208dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_208dcc:
    // 0x208dcc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x208dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_208dd0:
    // 0x208dd0: 0xacc70124  sw          $a3, 0x124($a2)
    ctx->pc = 0x208dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 7));
label_208dd4:
    // 0x208dd4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x208dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_208dd8:
    // 0x208dd8: 0xc043f0c  jal         func_10FC30
label_208ddc:
    if (ctx->pc == 0x208DDCu) {
        ctx->pc = 0x208DE0u;
        goto label_208de0;
    }
    ctx->pc = 0x208DD8u;
    SET_GPR_U32(ctx, 31, 0x208DE0u);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x208DD8u, 0x208DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DE0u;
label_208de0:
    // 0x208de0: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x208de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_208de4:
    // 0x208de4: 0x10000002  b           . + 4 + (0x2 << 2)
label_208de8:
    if (ctx->pc == 0x208DE8u) {
        ctx->pc = 0x208DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE4u;
        // 0x208de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208DECu;
        goto label_208dec;
    }
    ctx->pc = 0x208DE4u;
    {
        const bool branch_taken_0x208de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE4u;
        // 0x208de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208de4) {
            ctx->pc = 0x208DF0u;
            goto label_208df0;
        }
    }
    ctx->pc = 0x208DECu;
label_208dec:
    // 0x208dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x208decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208df0:
    // 0x208df0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x208df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208df4:
    // 0x208df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208df8:
    // 0x208df8: 0x3e00008  jr          $ra
label_208dfc:
    if (ctx->pc == 0x208DFCu) {
        ctx->pc = 0x208DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DF8u;
        // 0x208dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208E00u;
        goto label_fallthrough_0x208df8;
    }
    ctx->pc = 0x208DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DF8u;
        // 0x208dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x208df8:
    ctx->pc = 0x208E00u;
}

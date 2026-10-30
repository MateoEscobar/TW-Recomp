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

// Function: sub_004A8CF0
// Address: 0x4a8cf0 - 0x4a8e88
void sub_004A8CF0_0x4a8cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8CF0_0x4a8cf0");
#endif

    switch (ctx->pc) {
        case 0x4a8cf0u: goto label_4a8cf0;
        case 0x4a8cf4u: goto label_4a8cf4;
        case 0x4a8cf8u: goto label_4a8cf8;
        case 0x4a8cfcu: goto label_4a8cfc;
        case 0x4a8d00u: goto label_4a8d00;
        case 0x4a8d04u: goto label_4a8d04;
        case 0x4a8d08u: goto label_4a8d08;
        case 0x4a8d0cu: goto label_4a8d0c;
        case 0x4a8d10u: goto label_4a8d10;
        case 0x4a8d14u: goto label_4a8d14;
        case 0x4a8d18u: goto label_4a8d18;
        case 0x4a8d1cu: goto label_4a8d1c;
        case 0x4a8d20u: goto label_4a8d20;
        case 0x4a8d24u: goto label_4a8d24;
        case 0x4a8d28u: goto label_4a8d28;
        case 0x4a8d2cu: goto label_4a8d2c;
        case 0x4a8d30u: goto label_4a8d30;
        case 0x4a8d34u: goto label_4a8d34;
        case 0x4a8d38u: goto label_4a8d38;
        case 0x4a8d3cu: goto label_4a8d3c;
        case 0x4a8d40u: goto label_4a8d40;
        case 0x4a8d44u: goto label_4a8d44;
        case 0x4a8d48u: goto label_4a8d48;
        case 0x4a8d4cu: goto label_4a8d4c;
        case 0x4a8d50u: goto label_4a8d50;
        case 0x4a8d54u: goto label_4a8d54;
        case 0x4a8d58u: goto label_4a8d58;
        case 0x4a8d5cu: goto label_4a8d5c;
        case 0x4a8d60u: goto label_4a8d60;
        case 0x4a8d64u: goto label_4a8d64;
        case 0x4a8d68u: goto label_4a8d68;
        case 0x4a8d6cu: goto label_4a8d6c;
        case 0x4a8d70u: goto label_4a8d70;
        case 0x4a8d74u: goto label_4a8d74;
        case 0x4a8d78u: goto label_4a8d78;
        case 0x4a8d7cu: goto label_4a8d7c;
        case 0x4a8d80u: goto label_4a8d80;
        case 0x4a8d84u: goto label_4a8d84;
        case 0x4a8d88u: goto label_4a8d88;
        case 0x4a8d8cu: goto label_4a8d8c;
        case 0x4a8d90u: goto label_4a8d90;
        case 0x4a8d94u: goto label_4a8d94;
        case 0x4a8d98u: goto label_4a8d98;
        case 0x4a8d9cu: goto label_4a8d9c;
        case 0x4a8da0u: goto label_4a8da0;
        case 0x4a8da4u: goto label_4a8da4;
        case 0x4a8da8u: goto label_4a8da8;
        case 0x4a8dacu: goto label_4a8dac;
        case 0x4a8db0u: goto label_4a8db0;
        case 0x4a8db4u: goto label_4a8db4;
        case 0x4a8db8u: goto label_4a8db8;
        case 0x4a8dbcu: goto label_4a8dbc;
        case 0x4a8dc0u: goto label_4a8dc0;
        case 0x4a8dc4u: goto label_4a8dc4;
        case 0x4a8dc8u: goto label_4a8dc8;
        case 0x4a8dccu: goto label_4a8dcc;
        case 0x4a8dd0u: goto label_4a8dd0;
        case 0x4a8dd4u: goto label_4a8dd4;
        case 0x4a8dd8u: goto label_4a8dd8;
        case 0x4a8ddcu: goto label_4a8ddc;
        case 0x4a8de0u: goto label_4a8de0;
        case 0x4a8de4u: goto label_4a8de4;
        case 0x4a8de8u: goto label_4a8de8;
        case 0x4a8decu: goto label_4a8dec;
        case 0x4a8df0u: goto label_4a8df0;
        case 0x4a8df4u: goto label_4a8df4;
        case 0x4a8df8u: goto label_4a8df8;
        case 0x4a8dfcu: goto label_4a8dfc;
        case 0x4a8e00u: goto label_4a8e00;
        case 0x4a8e04u: goto label_4a8e04;
        case 0x4a8e08u: goto label_4a8e08;
        case 0x4a8e0cu: goto label_4a8e0c;
        case 0x4a8e10u: goto label_4a8e10;
        case 0x4a8e14u: goto label_4a8e14;
        case 0x4a8e18u: goto label_4a8e18;
        case 0x4a8e1cu: goto label_4a8e1c;
        case 0x4a8e20u: goto label_4a8e20;
        case 0x4a8e24u: goto label_4a8e24;
        case 0x4a8e28u: goto label_4a8e28;
        case 0x4a8e2cu: goto label_4a8e2c;
        case 0x4a8e30u: goto label_4a8e30;
        case 0x4a8e34u: goto label_4a8e34;
        case 0x4a8e38u: goto label_4a8e38;
        case 0x4a8e3cu: goto label_4a8e3c;
        case 0x4a8e40u: goto label_4a8e40;
        case 0x4a8e44u: goto label_4a8e44;
        case 0x4a8e48u: goto label_4a8e48;
        case 0x4a8e4cu: goto label_4a8e4c;
        case 0x4a8e50u: goto label_4a8e50;
        case 0x4a8e54u: goto label_4a8e54;
        case 0x4a8e58u: goto label_4a8e58;
        case 0x4a8e5cu: goto label_4a8e5c;
        case 0x4a8e60u: goto label_4a8e60;
        case 0x4a8e64u: goto label_4a8e64;
        case 0x4a8e68u: goto label_4a8e68;
        case 0x4a8e6cu: goto label_4a8e6c;
        case 0x4a8e70u: goto label_4a8e70;
        case 0x4a8e74u: goto label_4a8e74;
        case 0x4a8e78u: goto label_4a8e78;
        case 0x4a8e7cu: goto label_4a8e7c;
        case 0x4a8e80u: goto label_4a8e80;
        case 0x4a8e84u: goto label_4a8e84;
        default: break;
    }

    ctx->pc = 0x4a8cf0u;

label_4a8cf0:
    // 0x4a8cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a8cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a8cf4:
    // 0x4a8cf4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4a8cf8:
    // 0x4a8cf8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a8cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4a8cfc:
    // 0x4a8cfc: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x4a8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_4a8d00:
    // 0x4a8d00: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a8d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4a8d04:
    // 0x4a8d04: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x4a8d04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4a8d08:
    // 0x4a8d08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a8d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a8d0c:
    // 0x4a8d0c: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x4a8d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_4a8d10:
    // 0x4a8d10: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4a8d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4a8d14:
    // 0x4a8d14: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x4a8d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4a8d18:
    // 0x4a8d18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4a8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4a8d1c:
    // 0x4a8d1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4a8d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8d20:
    // 0x4a8d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a8d24:
    // 0x4a8d24: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x4a8d24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_4a8d28:
    // 0x4a8d28: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x4a8d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_4a8d2c:
    // 0x4a8d2c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x4a8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4a8d30:
    // 0x4a8d30: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x4a8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_4a8d34:
    // 0x4a8d34: 0x40f809  jalr        $v0
label_4a8d38:
    if (ctx->pc == 0x4A8D38u) {
        ctx->pc = 0x4A8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D34u;
        // 0x4a8d38: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8D3Cu;
        goto label_4a8d3c;
    }
    ctx->pc = 0x4A8D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8D3Cu);
        ctx->pc = 0x4A8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D34u;
        // 0x4a8d38: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8D34u, 0x4A8D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8D3Cu;
label_4a8d3c:
    // 0x4a8d3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a8d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8d40:
    // 0x4a8d40: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
label_4a8d44:
    if (ctx->pc == 0x4A8D44u) {
        ctx->pc = 0x4A8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D40u;
        // 0x4a8d44: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8D48u;
        goto label_4a8d48;
    }
    ctx->pc = 0x4A8D40u;
    {
        const bool branch_taken_0x4a8d40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D40u;
        // 0x4a8d44: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8d40) {
            ctx->pc = 0x4A8E60u;
            goto label_4a8e60;
        }
    }
    ctx->pc = 0x4A8D48u;
label_4a8d48:
    // 0x4a8d48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a8d4c:
    // 0x4a8d4c: 0x2604001f  addiu       $a0, $s0, 0x1F
    ctx->pc = 0x4a8d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
label_4a8d50:
    // 0x4a8d50: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x4a8d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
label_4a8d54:
    // 0x4a8d54: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4a8d54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4a8d58:
    // 0x4a8d58: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x4a8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4a8d5c:
    // 0x4a8d5c: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x4a8d5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4a8d60:
    // 0x4a8d60: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x4a8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_4a8d64:
    // 0x4a8d64: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x4a8d64u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_4a8d68:
    // 0x4a8d68: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x4a8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_4a8d6c:
    // 0x4a8d6c: 0x2604008b  addiu       $a0, $s0, 0x8B
    ctx->pc = 0x4a8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 139));
label_4a8d70:
    // 0x4a8d70: 0x40f809  jalr        $v0
label_4a8d74:
    if (ctx->pc == 0x4A8D74u) {
        ctx->pc = 0x4A8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D70u;
        // 0x4a8d74: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8D78u;
        goto label_4a8d78;
    }
    ctx->pc = 0x4A8D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8D78u);
        ctx->pc = 0x4A8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D70u;
        // 0x4a8d74: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8D70u, 0x4A8D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8D78u;
label_4a8d78:
    // 0x4a8d78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a8d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8d7c:
    // 0x4a8d7c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_4a8d80:
    if (ctx->pc == 0x4A8D80u) {
        ctx->pc = 0x4A8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D7Cu;
        // 0x4a8d80: 0x2643008b  addiu       $v1, $s2, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8D84u;
        goto label_4a8d84;
    }
    ctx->pc = 0x4A8D7Cu;
    {
        const bool branch_taken_0x4a8d7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D7Cu;
        // 0x4a8d80: 0x2643008b  addiu       $v1, $s2, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8d7c) {
            ctx->pc = 0x4A8D9Cu;
            goto label_4a8d9c;
        }
    }
    ctx->pc = 0x4A8D84u;
label_4a8d84:
    // 0x4a8d84: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a8d88:
    // 0x4a8d88: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x4a8d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_4a8d8c:
    // 0x4a8d8c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x4a8d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_4a8d90:
    // 0x4a8d90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8d94:
    // 0x4a8d94: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x4a8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_4a8d98:
    // 0x4a8d98: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4a8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4a8d9c:
    // 0x4a8d9c: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
label_4a8da0:
    if (ctx->pc == 0x4A8DA0u) {
        ctx->pc = 0x4A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D9Cu;
        // 0x4a8da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8DA4u;
        goto label_4a8da4;
    }
    ctx->pc = 0x4A8D9Cu;
    {
        const bool branch_taken_0x4a8d9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8D9Cu;
        // 0x4a8da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8d9c) {
            ctx->pc = 0x4A8E50u;
            goto label_4a8e50;
        }
    }
    ctx->pc = 0x4A8DA4u;
label_4a8da4:
    // 0x4a8da4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x4a8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_4a8da8:
    // 0x4a8da8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x4a8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_4a8dac:
    // 0x4a8dac: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4a8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4a8db0:
    // 0x4a8db0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x4a8db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_4a8db4:
    // 0x4a8db4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x4a8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_4a8db8:
    // 0x4a8db8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x4a8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_4a8dbc:
    // 0x4a8dbc: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x4a8dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a8dc0:
    // 0x4a8dc0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4a8dc4:
    if (ctx->pc == 0x4A8DC4u) {
        ctx->pc = 0x4A8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DC0u;
        // 0x4a8dc4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8DC8u;
        goto label_4a8dc8;
    }
    ctx->pc = 0x4A8DC0u;
    {
        const bool branch_taken_0x4a8dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DC0u;
        // 0x4a8dc4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8dc0) {
            ctx->pc = 0x4A8E00u;
            goto label_4a8e00;
        }
    }
    ctx->pc = 0x4A8DC8u;
label_4a8dc8:
    // 0x4a8dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8dcc:
    // 0x4a8dcc: 0x0  nop
    ctx->pc = 0x4a8dccu;
    // NOP
label_4a8dd0:
    // 0x4a8dd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a8dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a8dd4:
    // 0x4a8dd4: 0xc12a222  jal         func_4A8888
label_4a8dd8:
    if (ctx->pc == 0x4A8DD8u) {
        ctx->pc = 0x4A8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DD4u;
        // 0x4a8dd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8DDCu;
        goto label_4a8ddc;
    }
    ctx->pc = 0x4A8DD4u;
    SET_GPR_U32(ctx, 31, 0x4A8DDCu);
    ctx->pc = 0x4A8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8DD4u;
    // 0x4a8dd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8888u, 0x4A8DD4u, 0x4A8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8DDCu;
label_4a8ddc:
    // 0x4a8ddc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4a8de0:
    if (ctx->pc == 0x4A8DE0u) {
        ctx->pc = 0x4A8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DDCu;
        // 0x4a8de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8DE4u;
        goto label_4a8de4;
    }
    ctx->pc = 0x4A8DDCu;
    {
        const bool branch_taken_0x4a8ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DDCu;
        // 0x4a8de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ddc) {
            ctx->pc = 0x4A8E34u;
            goto label_4a8e34;
        }
    }
    ctx->pc = 0x4A8DE4u;
label_4a8de4:
    // 0x4a8de4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_4a8de8:
    if (ctx->pc == 0x4A8DE8u) {
        ctx->pc = 0x4A8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DE4u;
        // 0x4a8de8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8DECu;
        goto label_4a8dec;
    }
    ctx->pc = 0x4A8DE4u;
    {
        const bool branch_taken_0x4a8de4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DE4u;
        // 0x4a8de8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8de4) {
            ctx->pc = 0x4A8DF4u;
            goto label_4a8df4;
        }
    }
    ctx->pc = 0x4A8DECu;
label_4a8dec:
    // 0x4a8dec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a8decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a8df0:
    // 0x4a8df0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4a8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4a8df4:
    // 0x4a8df4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x4a8df4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a8df8:
    // 0x4a8df8: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_4a8dfc:
    if (ctx->pc == 0x4A8DFCu) {
        ctx->pc = 0x4A8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DF8u;
        // 0x4a8dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E00u;
        goto label_4a8e00;
    }
    ctx->pc = 0x4A8DF8u;
    {
        const bool branch_taken_0x4a8df8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8DF8u;
        // 0x4a8dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8df8) {
            ctx->pc = 0x4A8DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8dd0;
        }
    }
    ctx->pc = 0x4A8E00u;
label_4a8e00:
    // 0x4a8e00: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x4a8e00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a8e04:
    // 0x4a8e04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a8e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e08:
    // 0x4a8e08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a8e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e0c:
    // 0x4a8e0c: 0xc12a222  jal         func_4A8888
label_4a8e10:
    if (ctx->pc == 0x4A8E10u) {
        ctx->pc = 0x4A8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E0Cu;
        // 0x4a8e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E14u;
        goto label_4a8e14;
    }
    ctx->pc = 0x4A8E0Cu;
    SET_GPR_U32(ctx, 31, 0x4A8E14u);
    ctx->pc = 0x4A8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8E0Cu;
    // 0x4a8e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8888u, 0x4A8E0Cu, 0x4A8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8E14u;
label_4a8e14:
    // 0x4a8e14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4a8e18:
    if (ctx->pc == 0x4A8E18u) {
        ctx->pc = 0x4A8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E14u;
        // 0x4a8e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E1Cu;
        goto label_4a8e1c;
    }
    ctx->pc = 0x4A8E14u;
    {
        const bool branch_taken_0x4a8e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E14u;
        // 0x4a8e18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8e14) {
            ctx->pc = 0x4A8E34u;
            goto label_4a8e34;
        }
    }
    ctx->pc = 0x4A8E1Cu;
label_4a8e1c:
    // 0x4a8e1c: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
label_4a8e20:
    if (ctx->pc == 0x4A8E20u) {
        ctx->pc = 0x4A8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E1Cu;
        // 0x4a8e20: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E24u;
        goto label_4a8e24;
    }
    ctx->pc = 0x4A8E1Cu;
    {
        const bool branch_taken_0x4a8e1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8e1c) {
            ctx->pc = 0x4A8E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8E1Cu;
            // 0x4a8e20: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8E30u;
            goto label_4a8e30;
        }
    }
    ctx->pc = 0x4A8E24u;
label_4a8e24:
    // 0x4a8e24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a8e28:
    // 0x4a8e28: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4a8e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4a8e2c:
    // 0x4a8e2c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x4a8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_4a8e30:
    // 0x4a8e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a8e34:
    // 0x4a8e34: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_4a8e38:
    if (ctx->pc == 0x4A8E38u) {
        ctx->pc = 0x4A8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E34u;
        // 0x4a8e38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E3Cu;
        goto label_4a8e3c;
    }
    ctx->pc = 0x4A8E34u;
    {
        const bool branch_taken_0x4a8e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E34u;
        // 0x4a8e38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8e34) {
            ctx->pc = 0x4A8E64u;
            goto label_4a8e64;
        }
    }
    ctx->pc = 0x4A8E3Cu;
label_4a8e3c:
    // 0x4a8e3c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_4a8e40:
    if (ctx->pc == 0x4A8E40u) {
        ctx->pc = 0x4A8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E3Cu;
        // 0x4a8e40: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E44u;
        goto label_4a8e44;
    }
    ctx->pc = 0x4A8E3Cu;
    {
        const bool branch_taken_0x4a8e3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E3Cu;
        // 0x4a8e40: 0x2683ad18  addiu       $v1, $s4, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8e3c) {
            ctx->pc = 0x4A8E50u;
            goto label_4a8e50;
        }
    }
    ctx->pc = 0x4A8E44u;
label_4a8e44:
    // 0x4a8e44: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x4a8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_4a8e48:
    // 0x4a8e48: 0x40f809  jalr        $v0
label_4a8e4c:
    if (ctx->pc == 0x4A8E4Cu) {
        ctx->pc = 0x4A8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E48u;
        // 0x4a8e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E50u;
        goto label_4a8e50;
    }
    ctx->pc = 0x4A8E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8E50u);
        ctx->pc = 0x4A8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E48u;
        // 0x4a8e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8E48u, 0x4A8E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8E50u;
label_4a8e50:
    // 0x4a8e50: 0x2683ad18  addiu       $v1, $s4, -0x52E8
    ctx->pc = 0x4a8e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946072));
label_4a8e54:
    // 0x4a8e54: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x4a8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_4a8e58:
    // 0x4a8e58: 0x40f809  jalr        $v0
label_4a8e5c:
    if (ctx->pc == 0x4A8E5Cu) {
        ctx->pc = 0x4A8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E58u;
        // 0x4a8e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E60u;
        goto label_4a8e60;
    }
    ctx->pc = 0x4A8E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8E60u);
        ctx->pc = 0x4A8E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E58u;
        // 0x4a8e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8E58u, 0x4A8E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8E60u;
label_4a8e60:
    // 0x4a8e60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a8e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e64:
    // 0x4a8e64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a8e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8e68:
    // 0x4a8e68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a8e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8e6c:
    // 0x4a8e6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a8e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8e70:
    // 0x4a8e70: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4a8e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8e74:
    // 0x4a8e74: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4a8e74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8e78:
    // 0x4a8e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8e7c:
    // 0x4a8e7c: 0x3e00008  jr          $ra
label_4a8e80:
    if (ctx->pc == 0x4A8E80u) {
        ctx->pc = 0x4A8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E7Cu;
        // 0x4a8e80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8E84u;
        goto label_4a8e84;
    }
    ctx->pc = 0x4A8E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8E7Cu;
        // 0x4a8e80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8E84u;
label_4a8e84:
    // 0x4a8e84: 0x0  nop
    ctx->pc = 0x4a8e84u;
    // NOP
    ctx->pc = 0x4a8e88u;
}

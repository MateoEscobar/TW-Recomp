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

// Function: sub_00460CF0
// Address: 0x460cf0 - 0x460f08
void sub_00460CF0_0x460cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460CF0_0x460cf0");
#endif

    switch (ctx->pc) {
        case 0x460cf0u: goto label_460cf0;
        case 0x460cf4u: goto label_460cf4;
        case 0x460cf8u: goto label_460cf8;
        case 0x460cfcu: goto label_460cfc;
        case 0x460d00u: goto label_460d00;
        case 0x460d04u: goto label_460d04;
        case 0x460d08u: goto label_460d08;
        case 0x460d0cu: goto label_460d0c;
        case 0x460d10u: goto label_460d10;
        case 0x460d14u: goto label_460d14;
        case 0x460d18u: goto label_460d18;
        case 0x460d1cu: goto label_460d1c;
        case 0x460d20u: goto label_460d20;
        case 0x460d24u: goto label_460d24;
        case 0x460d28u: goto label_460d28;
        case 0x460d2cu: goto label_460d2c;
        case 0x460d30u: goto label_460d30;
        case 0x460d34u: goto label_460d34;
        case 0x460d38u: goto label_460d38;
        case 0x460d3cu: goto label_460d3c;
        case 0x460d40u: goto label_460d40;
        case 0x460d44u: goto label_460d44;
        case 0x460d48u: goto label_460d48;
        case 0x460d4cu: goto label_460d4c;
        case 0x460d50u: goto label_460d50;
        case 0x460d54u: goto label_460d54;
        case 0x460d58u: goto label_460d58;
        case 0x460d5cu: goto label_460d5c;
        case 0x460d60u: goto label_460d60;
        case 0x460d64u: goto label_460d64;
        case 0x460d68u: goto label_460d68;
        case 0x460d6cu: goto label_460d6c;
        case 0x460d70u: goto label_460d70;
        case 0x460d74u: goto label_460d74;
        case 0x460d78u: goto label_460d78;
        case 0x460d7cu: goto label_460d7c;
        case 0x460d80u: goto label_460d80;
        case 0x460d84u: goto label_460d84;
        case 0x460d88u: goto label_460d88;
        case 0x460d8cu: goto label_460d8c;
        case 0x460d90u: goto label_460d90;
        case 0x460d94u: goto label_460d94;
        case 0x460d98u: goto label_460d98;
        case 0x460d9cu: goto label_460d9c;
        case 0x460da0u: goto label_460da0;
        case 0x460da4u: goto label_460da4;
        case 0x460da8u: goto label_460da8;
        case 0x460dacu: goto label_460dac;
        case 0x460db0u: goto label_460db0;
        case 0x460db4u: goto label_460db4;
        case 0x460db8u: goto label_460db8;
        case 0x460dbcu: goto label_460dbc;
        case 0x460dc0u: goto label_460dc0;
        case 0x460dc4u: goto label_460dc4;
        case 0x460dc8u: goto label_460dc8;
        case 0x460dccu: goto label_460dcc;
        case 0x460dd0u: goto label_460dd0;
        case 0x460dd4u: goto label_460dd4;
        case 0x460dd8u: goto label_460dd8;
        case 0x460ddcu: goto label_460ddc;
        case 0x460de0u: goto label_460de0;
        case 0x460de4u: goto label_460de4;
        case 0x460de8u: goto label_460de8;
        case 0x460decu: goto label_460dec;
        case 0x460df0u: goto label_460df0;
        case 0x460df4u: goto label_460df4;
        case 0x460df8u: goto label_460df8;
        case 0x460dfcu: goto label_460dfc;
        case 0x460e00u: goto label_460e00;
        case 0x460e04u: goto label_460e04;
        case 0x460e08u: goto label_460e08;
        case 0x460e0cu: goto label_460e0c;
        case 0x460e10u: goto label_460e10;
        case 0x460e14u: goto label_460e14;
        case 0x460e18u: goto label_460e18;
        case 0x460e1cu: goto label_460e1c;
        case 0x460e20u: goto label_460e20;
        case 0x460e24u: goto label_460e24;
        case 0x460e28u: goto label_460e28;
        case 0x460e2cu: goto label_460e2c;
        case 0x460e30u: goto label_460e30;
        case 0x460e34u: goto label_460e34;
        case 0x460e38u: goto label_460e38;
        case 0x460e3cu: goto label_460e3c;
        case 0x460e40u: goto label_460e40;
        case 0x460e44u: goto label_460e44;
        case 0x460e48u: goto label_460e48;
        case 0x460e4cu: goto label_460e4c;
        case 0x460e50u: goto label_460e50;
        case 0x460e54u: goto label_460e54;
        case 0x460e58u: goto label_460e58;
        case 0x460e5cu: goto label_460e5c;
        case 0x460e60u: goto label_460e60;
        case 0x460e64u: goto label_460e64;
        case 0x460e68u: goto label_460e68;
        case 0x460e6cu: goto label_460e6c;
        case 0x460e70u: goto label_460e70;
        case 0x460e74u: goto label_460e74;
        case 0x460e78u: goto label_460e78;
        case 0x460e7cu: goto label_460e7c;
        case 0x460e80u: goto label_460e80;
        case 0x460e84u: goto label_460e84;
        case 0x460e88u: goto label_460e88;
        case 0x460e8cu: goto label_460e8c;
        case 0x460e90u: goto label_460e90;
        case 0x460e94u: goto label_460e94;
        case 0x460e98u: goto label_460e98;
        case 0x460e9cu: goto label_460e9c;
        case 0x460ea0u: goto label_460ea0;
        case 0x460ea4u: goto label_460ea4;
        case 0x460ea8u: goto label_460ea8;
        case 0x460eacu: goto label_460eac;
        case 0x460eb0u: goto label_460eb0;
        case 0x460eb4u: goto label_460eb4;
        case 0x460eb8u: goto label_460eb8;
        case 0x460ebcu: goto label_460ebc;
        case 0x460ec0u: goto label_460ec0;
        case 0x460ec4u: goto label_460ec4;
        case 0x460ec8u: goto label_460ec8;
        case 0x460eccu: goto label_460ecc;
        case 0x460ed0u: goto label_460ed0;
        case 0x460ed4u: goto label_460ed4;
        case 0x460ed8u: goto label_460ed8;
        case 0x460edcu: goto label_460edc;
        case 0x460ee0u: goto label_460ee0;
        case 0x460ee4u: goto label_460ee4;
        case 0x460ee8u: goto label_460ee8;
        case 0x460eecu: goto label_460eec;
        case 0x460ef0u: goto label_460ef0;
        case 0x460ef4u: goto label_460ef4;
        case 0x460ef8u: goto label_460ef8;
        case 0x460efcu: goto label_460efc;
        case 0x460f00u: goto label_460f00;
        case 0x460f04u: goto label_460f04;
        default: break;
    }

    ctx->pc = 0x460cf0u;

label_460cf0:
    // 0x460cf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x460cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_460cf4:
    // 0x460cf4: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x460cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
label_460cf8:
    // 0x460cf8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x460cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_460cfc:
    // 0x460cfc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x460cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_460d00:
    // 0x460d00: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x460d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_460d04:
    // 0x460d04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x460d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_460d08:
    // 0x460d08: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x460d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_460d0c:
    // 0x460d0c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x460d0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_460d10:
    // 0x460d10: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x460d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_460d14:
    // 0x460d14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x460d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_460d18:
    // 0x460d18: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x460d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_460d1c:
    // 0x460d1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x460d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_460d20:
    // 0x460d20: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x460d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_460d24:
    // 0x460d24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_460d28:
    if (ctx->pc == 0x460D28u) {
        ctx->pc = 0x460D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D24u;
        // 0x460d28: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460D2Cu;
        goto label_460d2c;
    }
    ctx->pc = 0x460D24u;
    {
        const bool branch_taken_0x460d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D24u;
        // 0x460d28: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460d24) {
            ctx->pc = 0x460D40u;
            goto label_460d40;
        }
    }
    ctx->pc = 0x460D2Cu;
label_460d2c:
    // 0x460d2c: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x460d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_460d30:
    // 0x460d30: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x460d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_460d34:
    // 0x460d34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x460d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_460d38:
    // 0x460d38: 0x10000003  b           . + 4 + (0x3 << 2)
label_460d3c:
    if (ctx->pc == 0x460D3Cu) {
        ctx->pc = 0x460D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D38u;
        // 0x460d3c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460D40u;
        goto label_460d40;
    }
    ctx->pc = 0x460D38u;
    {
        const bool branch_taken_0x460d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x460D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D38u;
        // 0x460d3c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460d38) {
            ctx->pc = 0x460D48u;
            goto label_460d48;
        }
    }
    ctx->pc = 0x460D40u;
label_460d40:
    // 0x460d40: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x460d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_460d44:
    // 0x460d44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x460d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_460d48:
    // 0x460d48: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x460d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_460d4c:
    // 0x460d4c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x460d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_460d50:
    // 0x460d50: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x460d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_460d54:
    // 0x460d54: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_460d58:
    if (ctx->pc == 0x460D58u) {
        ctx->pc = 0x460D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D54u;
        // 0x460d58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460D5Cu;
        goto label_460d5c;
    }
    ctx->pc = 0x460D54u;
    {
        const bool branch_taken_0x460d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x460D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D54u;
        // 0x460d58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460d54) {
            ctx->pc = 0x460D84u;
            goto label_460d84;
        }
    }
    ctx->pc = 0x460D5Cu;
label_460d5c:
    // 0x460d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x460d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460d60:
    // 0x460d60: 0xc10c1fa  jal         func_4307E8
label_460d64:
    if (ctx->pc == 0x460D64u) {
        ctx->pc = 0x460D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D60u;
        // 0x460d64: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460D68u;
        goto label_460d68;
    }
    ctx->pc = 0x460D60u;
    SET_GPR_U32(ctx, 31, 0x460D68u);
    ctx->pc = 0x460D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x460D60u;
    // 0x460d64: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x460D60u, 0x460D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460D68u;
label_460d68:
    // 0x460d68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x460d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_460d6c:
    // 0x460d6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x460d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_460d70:
    // 0x460d70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x460d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_460d74:
    // 0x460d74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x460d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_460d78:
    // 0x460d78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x460d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_460d7c:
    // 0x460d7c: 0x60f809  jalr        $v1
label_460d80:
    if (ctx->pc == 0x460D80u) {
        ctx->pc = 0x460D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D7Cu;
        // 0x460d80: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460D84u;
        goto label_460d84;
    }
    ctx->pc = 0x460D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x460D84u);
        ctx->pc = 0x460D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D7Cu;
        // 0x460d80: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460D7Cu, 0x460D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460D84u;
label_460d84:
    // 0x460d84: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x460d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_460d88:
    // 0x460d88: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_460d8c:
    if (ctx->pc == 0x460D8Cu) {
        ctx->pc = 0x460D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D88u;
        // 0x460d8c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460D90u;
        goto label_460d90;
    }
    ctx->pc = 0x460D88u;
    {
        const bool branch_taken_0x460d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x460D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D88u;
        // 0x460d8c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460d88) {
            ctx->pc = 0x460DACu;
            goto label_460dac;
        }
    }
    ctx->pc = 0x460D90u;
label_460d90:
    // 0x460d90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_460d94:
    if (ctx->pc == 0x460D94u) {
        ctx->pc = 0x460D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D90u;
        // 0x460d94: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460D98u;
        goto label_460d98;
    }
    ctx->pc = 0x460D90u;
    {
        const bool branch_taken_0x460d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460D90u;
        // 0x460d94: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460d90) {
            ctx->pc = 0x460DACu;
            goto label_460dac;
        }
    }
    ctx->pc = 0x460D98u;
label_460d98:
    // 0x460d98: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x460d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_460d9c:
    // 0x460d9c: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x460d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_460da0:
    // 0x460da0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x460da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_460da4:
    // 0x460da4: 0x60f809  jalr        $v1
label_460da8:
    if (ctx->pc == 0x460DA8u) {
        ctx->pc = 0x460DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DA4u;
        // 0x460da8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460DACu;
        goto label_460dac;
    }
    ctx->pc = 0x460DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x460DACu);
        ctx->pc = 0x460DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DA4u;
        // 0x460da8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460DA4u, 0x460DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460DACu;
label_460dac:
    // 0x460dac: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x460dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_460db0:
    // 0x460db0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_460db4:
    if (ctx->pc == 0x460DB4u) {
        ctx->pc = 0x460DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DB0u;
        // 0x460db4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460DB8u;
        goto label_460db8;
    }
    ctx->pc = 0x460DB0u;
    {
        const bool branch_taken_0x460db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x460DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DB0u;
        // 0x460db4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460db0) {
            ctx->pc = 0x460DCCu;
            goto label_460dcc;
        }
    }
    ctx->pc = 0x460DB8u;
label_460db8:
    // 0x460db8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_460dbc:
    if (ctx->pc == 0x460DBCu) {
        ctx->pc = 0x460DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DB8u;
        // 0x460dbc: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460DC0u;
        goto label_460dc0;
    }
    ctx->pc = 0x460DB8u;
    {
        const bool branch_taken_0x460db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DB8u;
        // 0x460dbc: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460db8) {
            ctx->pc = 0x460DCCu;
            goto label_460dcc;
        }
    }
    ctx->pc = 0x460DC0u;
label_460dc0:
    // 0x460dc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x460dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_460dc4:
    // 0x460dc4: 0x60f809  jalr        $v1
label_460dc8:
    if (ctx->pc == 0x460DC8u) {
        ctx->pc = 0x460DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DC4u;
        // 0x460dc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460DCCu;
        goto label_460dcc;
    }
    ctx->pc = 0x460DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x460DCCu);
        ctx->pc = 0x460DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DC4u;
        // 0x460dc8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460DC4u, 0x460DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460DCCu;
label_460dcc:
    // 0x460dcc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x460dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_460dd0:
    // 0x460dd0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_460dd4:
    if (ctx->pc == 0x460DD4u) {
        ctx->pc = 0x460DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DD0u;
        // 0x460dd4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460DD8u;
        goto label_460dd8;
    }
    ctx->pc = 0x460DD0u;
    {
        const bool branch_taken_0x460dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x460DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DD0u;
        // 0x460dd4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460dd0) {
            ctx->pc = 0x460DECu;
            goto label_460dec;
        }
    }
    ctx->pc = 0x460DD8u;
label_460dd8:
    // 0x460dd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_460ddc:
    if (ctx->pc == 0x460DDCu) {
        ctx->pc = 0x460DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DD8u;
        // 0x460ddc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460DE0u;
        goto label_460de0;
    }
    ctx->pc = 0x460DD8u;
    {
        const bool branch_taken_0x460dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DD8u;
        // 0x460ddc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460dd8) {
            ctx->pc = 0x460DECu;
            goto label_460dec;
        }
    }
    ctx->pc = 0x460DE0u;
label_460de0:
    // 0x460de0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x460de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_460de4:
    // 0x460de4: 0x60f809  jalr        $v1
label_460de8:
    if (ctx->pc == 0x460DE8u) {
        ctx->pc = 0x460DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DE4u;
        // 0x460de8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460DECu;
        goto label_460dec;
    }
    ctx->pc = 0x460DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x460DECu);
        ctx->pc = 0x460DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DE4u;
        // 0x460de8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460DE4u, 0x460DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460DECu;
label_460dec:
    // 0x460dec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x460decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_460df0:
    // 0x460df0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_460df4:
    if (ctx->pc == 0x460DF4u) {
        ctx->pc = 0x460DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DF0u;
        // 0x460df4: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460DF8u;
        goto label_460df8;
    }
    ctx->pc = 0x460DF0u;
    {
        const bool branch_taken_0x460df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x460DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DF0u;
        // 0x460df4: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460df0) {
            ctx->pc = 0x460E0Cu;
            goto label_460e0c;
        }
    }
    ctx->pc = 0x460DF8u;
label_460df8:
    // 0x460df8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_460dfc:
    if (ctx->pc == 0x460DFCu) {
        ctx->pc = 0x460DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DF8u;
        // 0x460dfc: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460E00u;
        goto label_460e00;
    }
    ctx->pc = 0x460DF8u;
    {
        const bool branch_taken_0x460df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460DF8u;
        // 0x460dfc: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460df8) {
            ctx->pc = 0x460E0Cu;
            goto label_460e0c;
        }
    }
    ctx->pc = 0x460E00u;
label_460e00:
    // 0x460e00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x460e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_460e04:
    // 0x460e04: 0x60f809  jalr        $v1
label_460e08:
    if (ctx->pc == 0x460E08u) {
        ctx->pc = 0x460E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E04u;
        // 0x460e08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460E0Cu;
        goto label_460e0c;
    }
    ctx->pc = 0x460E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x460E0Cu);
        ctx->pc = 0x460E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E04u;
        // 0x460e08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460E04u, 0x460E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460E0Cu;
label_460e0c:
    // 0x460e0c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x460e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_460e10:
    // 0x460e10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_460e14:
    if (ctx->pc == 0x460E14u) {
        ctx->pc = 0x460E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E10u;
        // 0x460e14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460E18u;
        goto label_460e18;
    }
    ctx->pc = 0x460E10u;
    {
        const bool branch_taken_0x460e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x460E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E10u;
        // 0x460e14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460e10) {
            ctx->pc = 0x460E2Cu;
            goto label_460e2c;
        }
    }
    ctx->pc = 0x460E18u;
label_460e18:
    // 0x460e18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x460e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_460e1c:
    // 0x460e1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x460e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_460e20:
    // 0x460e20: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x460e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_460e24:
    // 0x460e24: 0x40f809  jalr        $v0
label_460e28:
    if (ctx->pc == 0x460E28u) {
        ctx->pc = 0x460E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E24u;
        // 0x460e28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460E2Cu;
        goto label_460e2c;
    }
    ctx->pc = 0x460E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x460E2Cu);
        ctx->pc = 0x460E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E24u;
        // 0x460e28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460E24u, 0x460E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460E2Cu;
label_460e2c:
    // 0x460e2c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x460e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_460e30:
    // 0x460e30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x460e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460e34:
    // 0x460e34: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x460e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_460e38:
    // 0x460e38: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x460e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_460e3c:
    // 0x460e3c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x460e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_460e40:
    // 0x460e40: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x460e40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_460e44:
    // 0x460e44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x460e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_460e48:
    // 0x460e48: 0x3e00008  jr          $ra
label_460e4c:
    if (ctx->pc == 0x460E4Cu) {
        ctx->pc = 0x460E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E48u;
        // 0x460e4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460E50u;
        goto label_460e50;
    }
    ctx->pc = 0x460E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x460E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E48u;
        // 0x460e4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460E50u;
label_460e50:
    // 0x460e50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x460e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_460e54:
    // 0x460e54: 0x0  nop
    ctx->pc = 0x460e54u;
    // NOP
label_460e58:
    // 0x460e58: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x460e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_460e5c:
    // 0x460e5c: 0x8cc70028  lw          $a3, 0x28($a2)
    ctx->pc = 0x460e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_460e60:
    // 0x460e60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x460e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_460e64:
    // 0x460e64: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
label_460e68:
    if (ctx->pc == 0x460E68u) {
        ctx->pc = 0x460E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E64u;
        // 0x460e68: 0x8cc60024  lw          $a2, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460E6Cu;
        goto label_460e6c;
    }
    ctx->pc = 0x460E64u;
    {
        const bool branch_taken_0x460e64 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x460E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E64u;
        // 0x460e68: 0x8cc60024  lw          $a2, 0x24($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460e64) {
            ctx->pc = 0x460EA0u;
            goto label_460ea0;
        }
    }
    ctx->pc = 0x460E6Cu;
label_460e6c:
    // 0x460e6c: 0x0  nop
    ctx->pc = 0x460e6cu;
    // NOP
label_460e70:
    // 0x460e70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x460e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_460e74:
    // 0x460e74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x460e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_460e78:
    // 0x460e78: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x460e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_460e7c:
    // 0x460e7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_460e80:
    // 0x460e80: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x460e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_460e84:
    // 0x460e84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_460e88:
    // 0x460e88: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x460e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_460e8c:
    // 0x460e8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_460e90:
    // 0x460e90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x460e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_460e94:
    // 0x460e94: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_460e98:
    // 0x460e98: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_460e9c:
    if (ctx->pc == 0x460E9Cu) {
        ctx->pc = 0x460E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E98u;
        // 0x460e9c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460EA0u;
        goto label_460ea0;
    }
    ctx->pc = 0x460E98u;
    {
        const bool branch_taken_0x460e98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x460E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460E98u;
        // 0x460e9c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460e98) {
            ctx->pc = 0x460E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460e70;
        }
    }
    ctx->pc = 0x460EA0u;
label_460ea0:
    // 0x460ea0: 0x3e00008  jr          $ra
label_460ea4:
    if (ctx->pc == 0x460EA4u) {
        ctx->pc = 0x460EA8u;
        goto label_460ea8;
    }
    ctx->pc = 0x460EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460EA8u;
label_460ea8:
    // 0x460ea8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x460ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_460eac:
    // 0x460eac: 0x8cc80030  lw          $t0, 0x30($a2)
    ctx->pc = 0x460eacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_460eb0:
    // 0x460eb0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x460eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_460eb4:
    // 0x460eb4: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
label_460eb8:
    if (ctx->pc == 0x460EB8u) {
        ctx->pc = 0x460EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460EB4u;
        // 0x460eb8: 0x8cc6002c  lw          $a2, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460EBCu;
        goto label_460ebc;
    }
    ctx->pc = 0x460EB4u;
    {
        const bool branch_taken_0x460eb4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x460EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460EB4u;
        // 0x460eb8: 0x8cc6002c  lw          $a2, 0x2C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460eb4) {
            ctx->pc = 0x460F00u;
            goto label_460f00;
        }
    }
    ctx->pc = 0x460EBCu;
label_460ebc:
    // 0x460ebc: 0x0  nop
    ctx->pc = 0x460ebcu;
    // NOP
label_460ec0:
    // 0x460ec0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x460ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_460ec4:
    // 0x460ec4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x460ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_460ec8:
    // 0x460ec8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x460ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_460ecc:
    // 0x460ecc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x460eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_460ed0:
    // 0x460ed0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_460ed4:
    // 0x460ed4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x460ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_460ed8:
    // 0x460ed8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x460ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_460edc:
    // 0x460edc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_460ee0:
    // 0x460ee0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x460ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_460ee4:
    // 0x460ee4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x460ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_460ee8:
    // 0x460ee8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_460eec:
    // 0x460eec: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x460eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_460ef0:
    // 0x460ef0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x460ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_460ef4:
    // 0x460ef4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x460ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_460ef8:
    // 0x460ef8: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_460efc:
    if (ctx->pc == 0x460EFCu) {
        ctx->pc = 0x460EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460EF8u;
        // 0x460efc: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x460F00u;
        goto label_460f00;
    }
    ctx->pc = 0x460EF8u;
    {
        const bool branch_taken_0x460ef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x460EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x460EF8u;
        // 0x460efc: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x460ef8) {
            ctx->pc = 0x460EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_460ec0;
        }
    }
    ctx->pc = 0x460F00u;
label_460f00:
    // 0x460f00: 0x3e00008  jr          $ra
label_460f04:
    if (ctx->pc == 0x460F04u) {
        ctx->pc = 0x460F08u;
        goto label_fallthrough_0x460f00;
    }
    ctx->pc = 0x460F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x460f00:
    ctx->pc = 0x460F08u;
}

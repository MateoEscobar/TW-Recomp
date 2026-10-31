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

// Function: sub_00386D08
// Address: 0x386d08 - 0x386f50
void sub_00386D08_0x386d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386D08_0x386d08");
#endif

    switch (ctx->pc) {
        case 0x386d08u: goto label_386d08;
        case 0x386d0cu: goto label_386d0c;
        case 0x386d10u: goto label_386d10;
        case 0x386d14u: goto label_386d14;
        case 0x386d18u: goto label_386d18;
        case 0x386d1cu: goto label_386d1c;
        case 0x386d20u: goto label_386d20;
        case 0x386d24u: goto label_386d24;
        case 0x386d28u: goto label_386d28;
        case 0x386d2cu: goto label_386d2c;
        case 0x386d30u: goto label_386d30;
        case 0x386d34u: goto label_386d34;
        case 0x386d38u: goto label_386d38;
        case 0x386d3cu: goto label_386d3c;
        case 0x386d40u: goto label_386d40;
        case 0x386d44u: goto label_386d44;
        case 0x386d48u: goto label_386d48;
        case 0x386d4cu: goto label_386d4c;
        case 0x386d50u: goto label_386d50;
        case 0x386d54u: goto label_386d54;
        case 0x386d58u: goto label_386d58;
        case 0x386d5cu: goto label_386d5c;
        case 0x386d60u: goto label_386d60;
        case 0x386d64u: goto label_386d64;
        case 0x386d68u: goto label_386d68;
        case 0x386d6cu: goto label_386d6c;
        case 0x386d70u: goto label_386d70;
        case 0x386d74u: goto label_386d74;
        case 0x386d78u: goto label_386d78;
        case 0x386d7cu: goto label_386d7c;
        case 0x386d80u: goto label_386d80;
        case 0x386d84u: goto label_386d84;
        case 0x386d88u: goto label_386d88;
        case 0x386d8cu: goto label_386d8c;
        case 0x386d90u: goto label_386d90;
        case 0x386d94u: goto label_386d94;
        case 0x386d98u: goto label_386d98;
        case 0x386d9cu: goto label_386d9c;
        case 0x386da0u: goto label_386da0;
        case 0x386da4u: goto label_386da4;
        case 0x386da8u: goto label_386da8;
        case 0x386dacu: goto label_386dac;
        case 0x386db0u: goto label_386db0;
        case 0x386db4u: goto label_386db4;
        case 0x386db8u: goto label_386db8;
        case 0x386dbcu: goto label_386dbc;
        case 0x386dc0u: goto label_386dc0;
        case 0x386dc4u: goto label_386dc4;
        case 0x386dc8u: goto label_386dc8;
        case 0x386dccu: goto label_386dcc;
        case 0x386dd0u: goto label_386dd0;
        case 0x386dd4u: goto label_386dd4;
        case 0x386dd8u: goto label_386dd8;
        case 0x386ddcu: goto label_386ddc;
        case 0x386de0u: goto label_386de0;
        case 0x386de4u: goto label_386de4;
        case 0x386de8u: goto label_386de8;
        case 0x386decu: goto label_386dec;
        case 0x386df0u: goto label_386df0;
        case 0x386df4u: goto label_386df4;
        case 0x386df8u: goto label_386df8;
        case 0x386dfcu: goto label_386dfc;
        case 0x386e00u: goto label_386e00;
        case 0x386e04u: goto label_386e04;
        case 0x386e08u: goto label_386e08;
        case 0x386e0cu: goto label_386e0c;
        case 0x386e10u: goto label_386e10;
        case 0x386e14u: goto label_386e14;
        case 0x386e18u: goto label_386e18;
        case 0x386e1cu: goto label_386e1c;
        case 0x386e20u: goto label_386e20;
        case 0x386e24u: goto label_386e24;
        case 0x386e28u: goto label_386e28;
        case 0x386e2cu: goto label_386e2c;
        case 0x386e30u: goto label_386e30;
        case 0x386e34u: goto label_386e34;
        case 0x386e38u: goto label_386e38;
        case 0x386e3cu: goto label_386e3c;
        case 0x386e40u: goto label_386e40;
        case 0x386e44u: goto label_386e44;
        case 0x386e48u: goto label_386e48;
        case 0x386e4cu: goto label_386e4c;
        case 0x386e50u: goto label_386e50;
        case 0x386e54u: goto label_386e54;
        case 0x386e58u: goto label_386e58;
        case 0x386e5cu: goto label_386e5c;
        case 0x386e60u: goto label_386e60;
        case 0x386e64u: goto label_386e64;
        case 0x386e68u: goto label_386e68;
        case 0x386e6cu: goto label_386e6c;
        case 0x386e70u: goto label_386e70;
        case 0x386e74u: goto label_386e74;
        case 0x386e78u: goto label_386e78;
        case 0x386e7cu: goto label_386e7c;
        case 0x386e80u: goto label_386e80;
        case 0x386e84u: goto label_386e84;
        case 0x386e88u: goto label_386e88;
        case 0x386e8cu: goto label_386e8c;
        case 0x386e90u: goto label_386e90;
        case 0x386e94u: goto label_386e94;
        case 0x386e98u: goto label_386e98;
        case 0x386e9cu: goto label_386e9c;
        case 0x386ea0u: goto label_386ea0;
        case 0x386ea4u: goto label_386ea4;
        case 0x386ea8u: goto label_386ea8;
        case 0x386eacu: goto label_386eac;
        case 0x386eb0u: goto label_386eb0;
        case 0x386eb4u: goto label_386eb4;
        case 0x386eb8u: goto label_386eb8;
        case 0x386ebcu: goto label_386ebc;
        case 0x386ec0u: goto label_386ec0;
        case 0x386ec4u: goto label_386ec4;
        case 0x386ec8u: goto label_386ec8;
        case 0x386eccu: goto label_386ecc;
        case 0x386ed0u: goto label_386ed0;
        case 0x386ed4u: goto label_386ed4;
        case 0x386ed8u: goto label_386ed8;
        case 0x386edcu: goto label_386edc;
        case 0x386ee0u: goto label_386ee0;
        case 0x386ee4u: goto label_386ee4;
        case 0x386ee8u: goto label_386ee8;
        case 0x386eecu: goto label_386eec;
        case 0x386ef0u: goto label_386ef0;
        case 0x386ef4u: goto label_386ef4;
        case 0x386ef8u: goto label_386ef8;
        case 0x386efcu: goto label_386efc;
        case 0x386f00u: goto label_386f00;
        case 0x386f04u: goto label_386f04;
        case 0x386f08u: goto label_386f08;
        case 0x386f0cu: goto label_386f0c;
        case 0x386f10u: goto label_386f10;
        case 0x386f14u: goto label_386f14;
        case 0x386f18u: goto label_386f18;
        case 0x386f1cu: goto label_386f1c;
        case 0x386f20u: goto label_386f20;
        case 0x386f24u: goto label_386f24;
        case 0x386f28u: goto label_386f28;
        case 0x386f2cu: goto label_386f2c;
        case 0x386f30u: goto label_386f30;
        case 0x386f34u: goto label_386f34;
        case 0x386f38u: goto label_386f38;
        case 0x386f3cu: goto label_386f3c;
        case 0x386f40u: goto label_386f40;
        case 0x386f44u: goto label_386f44;
        case 0x386f48u: goto label_386f48;
        case 0x386f4cu: goto label_386f4c;
        default: break;
    }

    ctx->pc = 0x386d08u;

label_386d08:
    // 0x386d08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x386d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_386d0c:
    // 0x386d0c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x386d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_386d10:
    // 0x386d10: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x386d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_386d14:
    // 0x386d14: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x386d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_386d18:
    // 0x386d18: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x386d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386d1c:
    // 0x386d1c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x386d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_386d20:
    // 0x386d20: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x386d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_386d24:
    // 0x386d24: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x386d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_386d28:
    // 0x386d28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x386d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_386d2c:
    // 0x386d2c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x386d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_386d30:
    // 0x386d30: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_386d34:
    if (ctx->pc == 0x386D34u) {
        ctx->pc = 0x386D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D30u;
        // 0x386d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386D38u;
        goto label_386d38;
    }
    ctx->pc = 0x386D30u;
    {
        const bool branch_taken_0x386d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D30u;
        // 0x386d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d30) {
            ctx->pc = 0x386F30u;
            goto label_386f30;
        }
    }
    ctx->pc = 0x386D38u;
label_386d38:
    // 0x386d38: 0x26820004  addiu       $v0, $s4, 0x4
    ctx->pc = 0x386d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_386d3c:
    // 0x386d3c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x386d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_386d40:
    // 0x386d40: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x386d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_386d44:
    // 0x386d44: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x386d44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386d48:
    // 0x386d48: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x386d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_386d4c:
    // 0x386d4c: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x386d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_386d50:
    // 0x386d50: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x386d50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_386d54:
    // 0x386d54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x386d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386d58:
    // 0x386d58: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x386d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_386d5c:
    // 0x386d5c: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x386d5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_386d60:
    // 0x386d60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_386d64:
    if (ctx->pc == 0x386D64u) {
        ctx->pc = 0x386D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D60u;
        // 0x386d64: 0x34083  sra         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386D68u;
        goto label_386d68;
    }
    ctx->pc = 0x386D60u;
    {
        const bool branch_taken_0x386d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D60u;
        // 0x386d64: 0x34083  sra         $t0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d60) {
            ctx->pc = 0x386D8Cu;
            goto label_386d8c;
        }
    }
    ctx->pc = 0x386D68u;
label_386d68:
    // 0x386d68: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x386d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
label_386d6c:
    // 0x386d6c: 0x718b8  dsll        $v1, $a3, 2
    ctx->pc = 0x386d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 2);
label_386d70:
    // 0x386d70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x386d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_386d74:
    // 0x386d74: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x386d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
label_386d78:
    // 0x386d78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x386d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_386d7c:
    // 0x386d7c: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x386d7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_386d80:
    // 0x386d80: 0x62382d  daddu       $a3, $v1, $v0
    ctx->pc = 0x386d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_386d84:
    // 0x386d84: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_386d88:
    if (ctx->pc == 0x386D88u) {
        ctx->pc = 0x386D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D84u;
        // 0x386d88: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386D8Cu;
        goto label_386d8c;
    }
    ctx->pc = 0x386D84u;
    {
        const bool branch_taken_0x386d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x386D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D84u;
        // 0x386d88: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386d84) {
            ctx->pc = 0x386D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386d68;
        }
    }
    ctx->pc = 0x386D8Cu;
label_386d8c:
    // 0x386d8c: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x386d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
label_386d90:
    // 0x386d90: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x386d90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_386d94:
    // 0x386d94: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_386d98:
    if (ctx->pc == 0x386D98u) {
        ctx->pc = 0x386D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386D94u;
        // 0x386d98: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x386D9Cu;
        goto label_386d9c;
    }
    ctx->pc = 0x386D94u;
    {
        const bool branch_taken_0x386d94 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x386d94) {
            ctx->pc = 0x386D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386D94u;
            // 0x386d98: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x386D9Cu;
            goto label_386d9c;
        }
    }
    ctx->pc = 0x386D9Cu;
label_386d9c:
    // 0x386d9c: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x386d9cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_386da0:
    // 0x386da0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x386da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_386da4:
    // 0x386da4: 0x1010  mfhi        $v0
    ctx->pc = 0x386da4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_386da8:
    // 0x386da8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_386dac:
    // 0x386dac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_386db0:
    // 0x386db0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x386db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_386db4:
    // 0x386db4: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
label_386db8:
    if (ctx->pc == 0x386DB8u) {
        ctx->pc = 0x386DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DB4u;
        // 0x386db8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386DBCu;
        goto label_386dbc;
    }
    ctx->pc = 0x386DB4u;
    {
        const bool branch_taken_0x386db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x386db4) {
            ctx->pc = 0x386DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386DB4u;
            // 0x386db8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386E20u;
            goto label_386e20;
        }
    }
    ctx->pc = 0x386DBCu;
label_386dbc:
    // 0x386dbc: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x386dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_386dc0:
    // 0x386dc0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x386dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_386dc4:
    // 0x386dc4: 0x0  nop
    ctx->pc = 0x386dc4u;
    // NOP
label_386dc8:
    // 0x386dc8: 0x10000005  b           . + 4 + (0x5 << 2)
label_386dcc:
    if (ctx->pc == 0x386DCCu) {
        ctx->pc = 0x386DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DC8u;
        // 0x386dcc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386DD0u;
        goto label_386dd0;
    }
    ctx->pc = 0x386DC8u;
    {
        const bool branch_taken_0x386dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DC8u;
        // 0x386dcc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386dc8) {
            ctx->pc = 0x386DE0u;
            goto label_386de0;
        }
    }
    ctx->pc = 0x386DD0u;
label_386dd0:
    // 0x386dd0: 0x14e3000d  bne         $a3, $v1, . + 4 + (0xD << 2)
label_386dd4:
    if (ctx->pc == 0x386DD4u) {
        ctx->pc = 0x386DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DD0u;
        // 0x386dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386DD8u;
        goto label_386dd8;
    }
    ctx->pc = 0x386DD0u;
    {
        const bool branch_taken_0x386dd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x386DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DD0u;
        // 0x386dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386dd0) {
            ctx->pc = 0x386E08u;
            goto label_386e08;
        }
    }
    ctx->pc = 0x386DD8u;
label_386dd8:
    // 0x386dd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x386dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_386ddc:
    // 0x386ddc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x386ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_386de0:
    // 0x386de0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x386de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_386de4:
    // 0x386de4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_386de8:
    if (ctx->pc == 0x386DE8u) {
        ctx->pc = 0x386DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DE4u;
        // 0x386de8: 0x90a70000  lbu         $a3, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386DECu;
        goto label_386dec;
    }
    ctx->pc = 0x386DE4u;
    {
        const bool branch_taken_0x386de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DE4u;
        // 0x386de8: 0x90a70000  lbu         $a3, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386de4) {
            ctx->pc = 0x386DFCu;
            goto label_386dfc;
        }
    }
    ctx->pc = 0x386DECu;
label_386dec:
    // 0x386dec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x386decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_386df0:
    // 0x386df0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_386df4:
    if (ctx->pc == 0x386DF4u) {
        ctx->pc = 0x386DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DF0u;
        // 0x386df4: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386DF8u;
        goto label_386df8;
    }
    ctx->pc = 0x386DF0u;
    {
        const bool branch_taken_0x386df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DF0u;
        // 0x386df4: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386df0) {
            ctx->pc = 0x386DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386dd0;
        }
    }
    ctx->pc = 0x386DF8u;
label_386df8:
    // 0x386df8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x386df8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_386dfc:
    // 0x386dfc: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x386dfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_386e00:
    // 0x386e00: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x386e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_386e04:
    // 0x386e04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x386e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_386e08:
    // 0x386e08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_386e0c:
    if (ctx->pc == 0x386E0Cu) {
        ctx->pc = 0x386E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E08u;
        // 0x386e0c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386E10u;
        goto label_386e10;
    }
    ctx->pc = 0x386E08u;
    {
        const bool branch_taken_0x386e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386e08) {
            ctx->pc = 0x386E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386E08u;
            // 0x386e0c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386E20u;
            goto label_386e20;
        }
    }
    ctx->pc = 0x386E10u;
label_386e10:
    // 0x386e10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x386e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_386e14:
    // 0x386e14: 0x5480ffec  bnel        $a0, $zero, . + 4 + (-0x14 << 2)
label_386e18:
    if (ctx->pc == 0x386E18u) {
        ctx->pc = 0x386E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E14u;
        // 0x386e18: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386E1Cu;
        goto label_386e1c;
    }
    ctx->pc = 0x386E14u;
    {
        const bool branch_taken_0x386e14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x386e14) {
            ctx->pc = 0x386E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386E14u;
            // 0x386e18: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_386dc8;
        }
    }
    ctx->pc = 0x386E1Cu;
label_386e1c:
    // 0x386e1c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x386e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_386e20:
    // 0x386e20: 0xafb40004  sw          $s4, 0x4($sp)
    ctx->pc = 0x386e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
label_386e24:
    // 0x386e24: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x386e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_386e28:
    // 0x386e28: 0x14800040  bnez        $a0, . + 4 + (0x40 << 2)
label_386e2c:
    if (ctx->pc == 0x386E2Cu) {
        ctx->pc = 0x386E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E28u;
        // 0x386e2c: 0xafb40014  sw          $s4, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386E30u;
        goto label_386e30;
    }
    ctx->pc = 0x386E28u;
    {
        const bool branch_taken_0x386e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x386E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E28u;
        // 0x386e2c: 0xafb40014  sw          $s4, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e28) {
            ctx->pc = 0x386F2Cu;
            goto label_386f2c;
        }
    }
    ctx->pc = 0x386E30u;
label_386e30:
    // 0x386e30: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x386e30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_386e34:
    // 0x386e34: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x386e34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_386e38:
    // 0x386e38: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x386e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_386e3c:
    // 0x386e3c: 0x8e65b9b8  lw          $a1, -0x4648($s3)
    ctx->pc = 0x386e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949304)));
label_386e40:
    // 0x386e40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x386e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_386e44:
    // 0x386e44: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x386e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_386e48:
    // 0x386e48: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x386e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_386e4c:
    // 0x386e4c: 0x60f809  jalr        $v1
label_386e50:
    if (ctx->pc == 0x386E50u) {
        ctx->pc = 0x386E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E4Cu;
        // 0x386e50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386E54u;
        goto label_386e54;
    }
    ctx->pc = 0x386E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386E54u);
        ctx->pc = 0x386E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E4Cu;
        // 0x386e50: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386E4Cu, 0x386E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386E54u;
label_386e54:
    // 0x386e54: 0xc10c3ac  jal         func_430EB0
label_386e58:
    if (ctx->pc == 0x386E58u) {
        ctx->pc = 0x386E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E54u;
        // 0x386e58: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386E5Cu;
        goto label_386e5c;
    }
    ctx->pc = 0x386E54u;
    SET_GPR_U32(ctx, 31, 0x386E5Cu);
    ctx->pc = 0x386E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E54u;
    // 0x386e58: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x386E54u, 0x386E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E5Cu;
label_386e5c:
    // 0x386e5c: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x386e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_386e60:
    // 0x386e60: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x386e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_386e64:
    // 0x386e64: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x386e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_386e68:
    // 0x386e68: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x386e68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_386e6c:
    // 0x386e6c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x386e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_386e70:
    // 0x386e70: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x386e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_386e74:
    // 0x386e74: 0x2409003e  addiu       $t1, $zero, 0x3E
    ctx->pc = 0x386e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_386e78:
    // 0x386e78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x386e78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386e7c:
    // 0x386e7c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x386e7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_386e80:
    // 0x386e80: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x386e80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386e84:
    // 0x386e84: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x386e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_386e88:
    // 0x386e88: 0x2508df98  addiu       $t0, $t0, -0x2068
    ctx->pc = 0x386e88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959000));
label_386e8c:
    // 0x386e8c: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x386e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_386e90:
    // 0x386e90: 0x24a5dfd0  addiu       $a1, $a1, -0x2030
    ctx->pc = 0x386e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959056));
label_386e94:
    // 0x386e94: 0x40f809  jalr        $v0
label_386e98:
    if (ctx->pc == 0x386E98u) {
        ctx->pc = 0x386E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E94u;
        // 0x386e98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386E9Cu;
        goto label_386e9c;
    }
    ctx->pc = 0x386E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x386E9Cu);
        ctx->pc = 0x386E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E94u;
        // 0x386e98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386E94u, 0x386E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386E9Cu;
label_386e9c:
    // 0x386e9c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x386e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_386ea0:
    // 0x386ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x386ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386ea4:
    // 0x386ea4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x386ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386ea8:
    // 0x386ea8: 0xc10c4de  jal         func_431378
label_386eac:
    if (ctx->pc == 0x386EACu) {
        ctx->pc = 0x386EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386EA8u;
        // 0x386eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386EB0u;
        goto label_386eb0;
    }
    ctx->pc = 0x386EA8u;
    SET_GPR_U32(ctx, 31, 0x386EB0u);
    ctx->pc = 0x386EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386EA8u;
    // 0x386eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x386EA8u, 0x386EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386EB0u;
label_386eb0:
    // 0x386eb0: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x386eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_386eb4:
    // 0x386eb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x386eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_386eb8:
    // 0x386eb8: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x386eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_386ebc:
    // 0x386ebc: 0xc13c8fa  jal         func_4F23E8
label_386ec0:
    if (ctx->pc == 0x386EC0u) {
        ctx->pc = 0x386EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386EBCu;
        // 0x386ec0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386EC4u;
        goto label_386ec4;
    }
    ctx->pc = 0x386EBCu;
    SET_GPR_U32(ctx, 31, 0x386EC4u);
    ctx->pc = 0x386EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386EBCu;
    // 0x386ec0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F23E8u, 0x386EBCu, 0x386EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386EC4u;
label_386ec4:
    // 0x386ec4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x386ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_386ec8:
    // 0x386ec8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x386ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_386ecc:
    // 0x386ecc: 0xc13c994  jal         func_4F2650
label_386ed0:
    if (ctx->pc == 0x386ED0u) {
        ctx->pc = 0x386ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386ECCu;
        // 0x386ed0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386ED4u;
        goto label_386ed4;
    }
    ctx->pc = 0x386ECCu;
    SET_GPR_U32(ctx, 31, 0x386ED4u);
    ctx->pc = 0x386ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386ECCu;
    // 0x386ed0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F2650u, 0x386ECCu, 0x386ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386ED4u;
label_386ed4:
    // 0x386ed4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x386ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_386ed8:
    // 0x386ed8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x386ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_386edc:
    // 0x386edc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x386edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_386ee0:
    // 0x386ee0: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x386ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_386ee4:
    // 0x386ee4: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x386ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_386ee8:
    // 0x386ee8: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x386ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_386eec:
    // 0x386eec: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x386eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_386ef0:
    // 0x386ef0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x386ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_386ef4:
    // 0x386ef4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x386ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_386ef8:
    // 0x386ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x386ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_386efc:
    // 0x386efc: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x386efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_386f00:
    // 0x386f00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x386f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_386f04:
    // 0x386f04: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x386f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_386f08:
    // 0x386f08: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x386f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_386f0c:
    // 0x386f0c: 0x8e65b9b8  lw          $a1, -0x4648($s3)
    ctx->pc = 0x386f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949304)));
label_386f10:
    // 0x386f10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x386f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_386f14:
    // 0x386f14: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x386f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_386f18:
    // 0x386f18: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x386f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_386f1c:
    // 0x386f1c: 0x60f809  jalr        $v1
label_386f20:
    if (ctx->pc == 0x386F20u) {
        ctx->pc = 0x386F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F1Cu;
        // 0x386f20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F24u;
        goto label_386f24;
    }
    ctx->pc = 0x386F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386F24u);
        ctx->pc = 0x386F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F1Cu;
        // 0x386f20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386F1Cu, 0x386F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386F24u;
label_386f24:
    // 0x386f24: 0x10000002  b           . + 4 + (0x2 << 2)
label_386f28:
    if (ctx->pc == 0x386F28u) {
        ctx->pc = 0x386F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F24u;
        // 0x386f28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F2Cu;
        goto label_386f2c;
    }
    ctx->pc = 0x386F24u;
    {
        const bool branch_taken_0x386f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F24u;
        // 0x386f28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386f24) {
            ctx->pc = 0x386F30u;
            goto label_386f30;
        }
    }
    ctx->pc = 0x386F2Cu;
label_386f2c:
    // 0x386f2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x386f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_386f30:
    // 0x386f30: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x386f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_386f34:
    // 0x386f34: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x386f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_386f38:
    // 0x386f38: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x386f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_386f3c:
    // 0x386f3c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x386f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_386f40:
    // 0x386f40: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x386f40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_386f44:
    // 0x386f44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x386f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_386f48:
    // 0x386f48: 0x3e00008  jr          $ra
label_386f4c:
    if (ctx->pc == 0x386F4Cu) {
        ctx->pc = 0x386F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F48u;
        // 0x386f4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386F50u;
        goto label_fallthrough_0x386f48;
    }
    ctx->pc = 0x386F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386F48u;
        // 0x386f4c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x386f48:
    ctx->pc = 0x386F50u;
}

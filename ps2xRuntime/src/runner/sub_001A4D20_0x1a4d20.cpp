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

// Function: sub_001A4D20
// Address: 0x1a4d20 - 0x1a4f68
void sub_001A4D20_0x1a4d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4D20_0x1a4d20");
#endif

    switch (ctx->pc) {
        case 0x1a4d20u: goto label_1a4d20;
        case 0x1a4d24u: goto label_1a4d24;
        case 0x1a4d28u: goto label_1a4d28;
        case 0x1a4d2cu: goto label_1a4d2c;
        case 0x1a4d30u: goto label_1a4d30;
        case 0x1a4d34u: goto label_1a4d34;
        case 0x1a4d38u: goto label_1a4d38;
        case 0x1a4d3cu: goto label_1a4d3c;
        case 0x1a4d40u: goto label_1a4d40;
        case 0x1a4d44u: goto label_1a4d44;
        case 0x1a4d48u: goto label_1a4d48;
        case 0x1a4d4cu: goto label_1a4d4c;
        case 0x1a4d50u: goto label_1a4d50;
        case 0x1a4d54u: goto label_1a4d54;
        case 0x1a4d58u: goto label_1a4d58;
        case 0x1a4d5cu: goto label_1a4d5c;
        case 0x1a4d60u: goto label_1a4d60;
        case 0x1a4d64u: goto label_1a4d64;
        case 0x1a4d68u: goto label_1a4d68;
        case 0x1a4d6cu: goto label_1a4d6c;
        case 0x1a4d70u: goto label_1a4d70;
        case 0x1a4d74u: goto label_1a4d74;
        case 0x1a4d78u: goto label_1a4d78;
        case 0x1a4d7cu: goto label_1a4d7c;
        case 0x1a4d80u: goto label_1a4d80;
        case 0x1a4d84u: goto label_1a4d84;
        case 0x1a4d88u: goto label_1a4d88;
        case 0x1a4d8cu: goto label_1a4d8c;
        case 0x1a4d90u: goto label_1a4d90;
        case 0x1a4d94u: goto label_1a4d94;
        case 0x1a4d98u: goto label_1a4d98;
        case 0x1a4d9cu: goto label_1a4d9c;
        case 0x1a4da0u: goto label_1a4da0;
        case 0x1a4da4u: goto label_1a4da4;
        case 0x1a4da8u: goto label_1a4da8;
        case 0x1a4dacu: goto label_1a4dac;
        case 0x1a4db0u: goto label_1a4db0;
        case 0x1a4db4u: goto label_1a4db4;
        case 0x1a4db8u: goto label_1a4db8;
        case 0x1a4dbcu: goto label_1a4dbc;
        case 0x1a4dc0u: goto label_1a4dc0;
        case 0x1a4dc4u: goto label_1a4dc4;
        case 0x1a4dc8u: goto label_1a4dc8;
        case 0x1a4dccu: goto label_1a4dcc;
        case 0x1a4dd0u: goto label_1a4dd0;
        case 0x1a4dd4u: goto label_1a4dd4;
        case 0x1a4dd8u: goto label_1a4dd8;
        case 0x1a4ddcu: goto label_1a4ddc;
        case 0x1a4de0u: goto label_1a4de0;
        case 0x1a4de4u: goto label_1a4de4;
        case 0x1a4de8u: goto label_1a4de8;
        case 0x1a4decu: goto label_1a4dec;
        case 0x1a4df0u: goto label_1a4df0;
        case 0x1a4df4u: goto label_1a4df4;
        case 0x1a4df8u: goto label_1a4df8;
        case 0x1a4dfcu: goto label_1a4dfc;
        case 0x1a4e00u: goto label_1a4e00;
        case 0x1a4e04u: goto label_1a4e04;
        case 0x1a4e08u: goto label_1a4e08;
        case 0x1a4e0cu: goto label_1a4e0c;
        case 0x1a4e10u: goto label_1a4e10;
        case 0x1a4e14u: goto label_1a4e14;
        case 0x1a4e18u: goto label_1a4e18;
        case 0x1a4e1cu: goto label_1a4e1c;
        case 0x1a4e20u: goto label_1a4e20;
        case 0x1a4e24u: goto label_1a4e24;
        case 0x1a4e28u: goto label_1a4e28;
        case 0x1a4e2cu: goto label_1a4e2c;
        case 0x1a4e30u: goto label_1a4e30;
        case 0x1a4e34u: goto label_1a4e34;
        case 0x1a4e38u: goto label_1a4e38;
        case 0x1a4e3cu: goto label_1a4e3c;
        case 0x1a4e40u: goto label_1a4e40;
        case 0x1a4e44u: goto label_1a4e44;
        case 0x1a4e48u: goto label_1a4e48;
        case 0x1a4e4cu: goto label_1a4e4c;
        case 0x1a4e50u: goto label_1a4e50;
        case 0x1a4e54u: goto label_1a4e54;
        case 0x1a4e58u: goto label_1a4e58;
        case 0x1a4e5cu: goto label_1a4e5c;
        case 0x1a4e60u: goto label_1a4e60;
        case 0x1a4e64u: goto label_1a4e64;
        case 0x1a4e68u: goto label_1a4e68;
        case 0x1a4e6cu: goto label_1a4e6c;
        case 0x1a4e70u: goto label_1a4e70;
        case 0x1a4e74u: goto label_1a4e74;
        case 0x1a4e78u: goto label_1a4e78;
        case 0x1a4e7cu: goto label_1a4e7c;
        case 0x1a4e80u: goto label_1a4e80;
        case 0x1a4e84u: goto label_1a4e84;
        case 0x1a4e88u: goto label_1a4e88;
        case 0x1a4e8cu: goto label_1a4e8c;
        case 0x1a4e90u: goto label_1a4e90;
        case 0x1a4e94u: goto label_1a4e94;
        case 0x1a4e98u: goto label_1a4e98;
        case 0x1a4e9cu: goto label_1a4e9c;
        case 0x1a4ea0u: goto label_1a4ea0;
        case 0x1a4ea4u: goto label_1a4ea4;
        case 0x1a4ea8u: goto label_1a4ea8;
        case 0x1a4eacu: goto label_1a4eac;
        case 0x1a4eb0u: goto label_1a4eb0;
        case 0x1a4eb4u: goto label_1a4eb4;
        case 0x1a4eb8u: goto label_1a4eb8;
        case 0x1a4ebcu: goto label_1a4ebc;
        case 0x1a4ec0u: goto label_1a4ec0;
        case 0x1a4ec4u: goto label_1a4ec4;
        case 0x1a4ec8u: goto label_1a4ec8;
        case 0x1a4eccu: goto label_1a4ecc;
        case 0x1a4ed0u: goto label_1a4ed0;
        case 0x1a4ed4u: goto label_1a4ed4;
        case 0x1a4ed8u: goto label_1a4ed8;
        case 0x1a4edcu: goto label_1a4edc;
        case 0x1a4ee0u: goto label_1a4ee0;
        case 0x1a4ee4u: goto label_1a4ee4;
        case 0x1a4ee8u: goto label_1a4ee8;
        case 0x1a4eecu: goto label_1a4eec;
        case 0x1a4ef0u: goto label_1a4ef0;
        case 0x1a4ef4u: goto label_1a4ef4;
        case 0x1a4ef8u: goto label_1a4ef8;
        case 0x1a4efcu: goto label_1a4efc;
        case 0x1a4f00u: goto label_1a4f00;
        case 0x1a4f04u: goto label_1a4f04;
        case 0x1a4f08u: goto label_1a4f08;
        case 0x1a4f0cu: goto label_1a4f0c;
        case 0x1a4f10u: goto label_1a4f10;
        case 0x1a4f14u: goto label_1a4f14;
        case 0x1a4f18u: goto label_1a4f18;
        case 0x1a4f1cu: goto label_1a4f1c;
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f24u: goto label_1a4f24;
        case 0x1a4f28u: goto label_1a4f28;
        case 0x1a4f2cu: goto label_1a4f2c;
        case 0x1a4f30u: goto label_1a4f30;
        case 0x1a4f34u: goto label_1a4f34;
        case 0x1a4f38u: goto label_1a4f38;
        case 0x1a4f3cu: goto label_1a4f3c;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f44u: goto label_1a4f44;
        case 0x1a4f48u: goto label_1a4f48;
        case 0x1a4f4cu: goto label_1a4f4c;
        case 0x1a4f50u: goto label_1a4f50;
        case 0x1a4f54u: goto label_1a4f54;
        case 0x1a4f58u: goto label_1a4f58;
        case 0x1a4f5cu: goto label_1a4f5c;
        case 0x1a4f60u: goto label_1a4f60;
        case 0x1a4f64u: goto label_1a4f64;
        default: break;
    }

    ctx->pc = 0x1a4d20u;

label_1a4d20:
    // 0x1a4d20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a4d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a4d24:
    // 0x1a4d24: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1a4d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1a4d28:
    // 0x1a4d28: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1a4d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1a4d2c:
    // 0x1a4d2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a4d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d30:
    // 0x1a4d30: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1a4d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1a4d34:
    // 0x1a4d34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a4d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d38:
    // 0x1a4d38: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1a4d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1a4d3c:
    // 0x1a4d3c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a4d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a4d40:
    // 0x1a4d40: 0x8e640350  lw          $a0, 0x350($s3)
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
label_1a4d44:
    // 0x1a4d44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a4d48:
    // 0x1a4d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4d4c:
    // 0x1a4d4c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a4d50:
    // 0x1a4d50: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a4d54:
    // 0x1a4d54: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1a4d58:
    if (ctx->pc == 0x1A4D58u) {
        ctx->pc = 0x1A4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D54u;
        // 0x1a4d58: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D5Cu;
        goto label_1a4d5c;
    }
    ctx->pc = 0x1A4D54u;
    {
        const bool branch_taken_0x1a4d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D54u;
        // 0x1a4d58: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d54) {
            ctx->pc = 0x1A4D94u;
            goto label_1a4d94;
        }
    }
    ctx->pc = 0x1A4D5Cu;
label_1a4d5c:
    // 0x1a4d5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a4d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d60:
    // 0x1a4d60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4d64:
    // 0x1a4d64: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a4d68:
    // 0x1a4d68: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x1a4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_1a4d6c:
    // 0x1a4d6c: 0x54720003  bnel        $v1, $s2, . + 4 + (0x3 << 2)
label_1a4d70:
    if (ctx->pc == 0x1A4D70u) {
        ctx->pc = 0x1A4D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D6Cu;
        // 0x1a4d70: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D74u;
        goto label_1a4d74;
    }
    ctx->pc = 0x1A4D6Cu;
    {
        const bool branch_taken_0x1a4d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a4d6c) {
            ctx->pc = 0x1A4D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4D6Cu;
            // 0x1a4d70: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4D7Cu;
            goto label_1a4d7c;
        }
    }
    ctx->pc = 0x1A4D74u;
label_1a4d74:
    // 0x1a4d74: 0x10000072  b           . + 4 + (0x72 << 2)
label_1a4d78:
    if (ctx->pc == 0x1A4D78u) {
        ctx->pc = 0x1A4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D74u;
        // 0x1a4d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D7Cu;
        goto label_1a4d7c;
    }
    ctx->pc = 0x1A4D74u;
    {
        const bool branch_taken_0x1a4d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D74u;
        // 0x1a4d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d74) {
            ctx->pc = 0x1A4F40u;
            goto label_1a4f40;
        }
    }
    ctx->pc = 0x1A4D7Cu;
label_1a4d7c:
    // 0x1a4d7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4d80:
    // 0x1a4d80: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a4d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1a4d84:
    // 0x1a4d84: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a4d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a4d88:
    // 0x1a4d88: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a4d8c:
    // 0x1a4d8c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1a4d90:
    if (ctx->pc == 0x1A4D90u) {
        ctx->pc = 0x1A4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D8Cu;
        // 0x1a4d90: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4D94u;
        goto label_1a4d94;
    }
    ctx->pc = 0x1A4D8Cu;
    {
        const bool branch_taken_0x1a4d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4D8Cu;
        // 0x1a4d90: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d8c) {
            ctx->pc = 0x1A4D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4d60;
        }
    }
    ctx->pc = 0x1A4D94u;
label_1a4d94:
    // 0x1a4d94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a4d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a4d98:
    // 0x1a4d98: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a4d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a4d9c:
    // 0x1a4d9c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1a4d9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1a4da0:
    // 0x1a4da0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1a4da4:
    // 0x1a4da4: 0x24a53f30  addiu       $a1, $a1, 0x3F30
    ctx->pc = 0x1a4da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16176));
label_1a4da8:
    // 0x1a4da8: 0x25083ea0  addiu       $t0, $t0, 0x3EA0
    ctx->pc = 0x1a4da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16032));
label_1a4dac:
    // 0x1a4dac: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a4dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a4db0:
    // 0x1a4db0: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1a4db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1a4db4:
    // 0x1a4db4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4db8:
    // 0x1a4db8: 0x24090129  addiu       $t1, $zero, 0x129
    ctx->pc = 0x1a4db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
label_1a4dbc:
    // 0x1a4dbc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a4dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a4dc0:
    // 0x1a4dc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a4dc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dc4:
    // 0x1a4dc4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a4dc8:
    // 0x1a4dc8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a4dc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dcc:
    // 0x1a4dcc: 0x40f809  jalr        $v0
label_1a4dd0:
    if (ctx->pc == 0x1A4DD0u) {
        ctx->pc = 0x1A4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DCCu;
        // 0x1a4dd0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DD4u;
        goto label_1a4dd4;
    }
    ctx->pc = 0x1A4DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4DD4u);
        ctx->pc = 0x1A4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DCCu;
        // 0x1a4dd0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4DCCu, 0x1A4DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4DD4u;
label_1a4dd4:
    // 0x1a4dd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dd8:
    // 0x1a4dd8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1a4ddc:
    if (ctx->pc == 0x1A4DDCu) {
        ctx->pc = 0x1A4DE0u;
        goto label_1a4de0;
    }
    ctx->pc = 0x1A4DD8u;
    {
        const bool branch_taken_0x1a4dd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4dd8) {
            ctx->pc = 0x1A4DECu;
            goto label_1a4dec;
        }
    }
    ctx->pc = 0x1A4DE0u;
label_1a4de0:
    // 0x1a4de0: 0xc0691a4  jal         func_1A4690
label_1a4de4:
    if (ctx->pc == 0x1A4DE4u) {
        ctx->pc = 0x1A4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DE0u;
        // 0x1a4de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4DE8u;
        goto label_1a4de8;
    }
    ctx->pc = 0x1A4DE0u;
    SET_GPR_U32(ctx, 31, 0x1A4DE8u);
    ctx->pc = 0x1A4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DE0u;
    // 0x1a4de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4690u, 0x1A4DE0u, 0x1A4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4DE8u;
label_1a4de8:
    // 0x1a4de8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dec:
    // 0x1a4dec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a4df0:
    // 0x1a4df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4df4:
    // 0x1a4df4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1a4df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a4df8:
    // 0x1a4df8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a4df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1a4dfc:
    // 0x1a4dfc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1a4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1a4e00:
    // 0x1a4e00: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a4e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1a4e04:
    // 0x1a4e04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a4e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4e08:
    // 0x1a4e08: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1a4e0c:
    // 0x1a4e0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a4e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4e10:
    // 0x1a4e10: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1a4e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1a4e14:
    // 0x1a4e14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a4e14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e18:
    // 0x1a4e18: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1a4e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_1a4e1c:
    // 0x1a4e1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a4e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4e20:
    // 0x1a4e20: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a4e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1a4e24:
    // 0x1a4e24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a4e24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a4e28:
    // 0x1a4e28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4e2c:
    // 0x1a4e2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a4e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e30:
    // 0x1a4e30: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1a4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1a4e34:
    // 0x1a4e34: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1a4e34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4e38:
    // 0x1a4e38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a4e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e3c:
    // 0x1a4e3c: 0xc0691d2  jal         func_1A4748
label_1a4e40:
    if (ctx->pc == 0x1A4E40u) {
        ctx->pc = 0x1A4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E3Cu;
        // 0x1a4e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E44u;
        goto label_1a4e44;
    }
    ctx->pc = 0x1A4E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A4E44u);
    ctx->pc = 0x1A4E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E3Cu;
    // 0x1a4e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4748u, 0x1A4E3Cu, 0x1A4E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E44u;
label_1a4e44:
    // 0x1a4e44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a4e48:
    // 0x1a4e48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a4e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e4c:
    // 0x1a4e4c: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x1a4e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1a4e50:
    // 0x1a4e50: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1a4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_1a4e54:
    // 0x1a4e54: 0x60f809  jalr        $v1
label_1a4e58:
    if (ctx->pc == 0x1A4E58u) {
        ctx->pc = 0x1A4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E54u;
        // 0x1a4e58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E5Cu;
        goto label_1a4e5c;
    }
    ctx->pc = 0x1A4E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A4E5Cu);
        ctx->pc = 0x1A4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E54u;
        // 0x1a4e58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E54u, 0x1A4E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4E5Cu;
label_1a4e5c:
    // 0x1a4e5c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1a4e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1a4e60:
    // 0x1a4e60: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a4e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1a4e64:
    // 0x1a4e64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4e68:
    // 0x1a4e68: 0xc06e4a2  jal         func_1B9288
label_1a4e6c:
    if (ctx->pc == 0x1A4E6Cu) {
        ctx->pc = 0x1A4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E68u;
        // 0x1a4e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E70u;
        goto label_1a4e70;
    }
    ctx->pc = 0x1A4E68u;
    SET_GPR_U32(ctx, 31, 0x1A4E70u);
    ctx->pc = 0x1A4E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E68u;
    // 0x1a4e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9288u, 0x1A4E68u, 0x1A4E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E70u;
label_1a4e70:
    // 0x1a4e70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a4e74:
    // 0x1a4e74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4e78:
    // 0x1a4e78: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1a4e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1a4e7c:
    // 0x1a4e7c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1a4e80:
    // 0x1a4e80: 0x60f809  jalr        $v1
label_1a4e84:
    if (ctx->pc == 0x1A4E84u) {
        ctx->pc = 0x1A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E80u;
        // 0x1a4e84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E88u;
        goto label_1a4e88;
    }
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A4E88u);
        ctx->pc = 0x1A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E80u;
        // 0x1a4e84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E80u, 0x1A4E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4E88u;
label_1a4e88:
    // 0x1a4e88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a4e8c:
    // 0x1a4e8c: 0xae3001b8  sw          $s0, 0x1B8($s1)
    ctx->pc = 0x1a4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 16));
label_1a4e90:
    // 0x1a4e90: 0xc44cd1d4  lwc1        $f12, -0x2E2C($v0)
    ctx->pc = 0x1a4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4e94:
    // 0x1a4e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e98:
    // 0x1a4e98: 0xc06ece4  jal         func_1BB390
label_1a4e9c:
    if (ctx->pc == 0x1A4E9Cu) {
        ctx->pc = 0x1A4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E98u;
        // 0x1a4e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EA0u;
        goto label_1a4ea0;
    }
    ctx->pc = 0x1A4E98u;
    SET_GPR_U32(ctx, 31, 0x1A4EA0u);
    ctx->pc = 0x1A4E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E98u;
    // 0x1a4e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1A4E98u, 0x1A4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EA0u;
label_1a4ea0:
    // 0x1a4ea0: 0x8e630350  lw          $v1, 0x350($s3)
    ctx->pc = 0x1a4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
label_1a4ea4:
    // 0x1a4ea4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1a4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1a4ea8:
    // 0x1a4ea8: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1a4ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1a4eac:
    // 0x1a4eac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a4eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a4eb0:
    // 0x1a4eb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a4eb4:
    // 0x1a4eb4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1a4eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1a4eb8:
    // 0x1a4eb8: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1a4eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1a4ebc:
    // 0x1a4ebc: 0x24a53ed8  addiu       $a1, $a1, 0x3ED8
    ctx->pc = 0x1a4ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16088));
label_1a4ec0:
    // 0x1a4ec0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4ec4:
    // 0x1a4ec4: 0x25083ee0  addiu       $t0, $t0, 0x3EE0
    ctx->pc = 0x1a4ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16096));
label_1a4ec8:
    // 0x1a4ec8: 0x254a3f08  addiu       $t2, $t2, 0x3F08
    ctx->pc = 0x1a4ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16136));
label_1a4ecc:
    // 0x1a4ecc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1a4eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a4ed0:
    // 0x1a4ed0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1a4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_1a4ed4:
    // 0x1a4ed4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a4ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4ed8:
    // 0x1a4ed8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1a4ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a4edc:
    // 0x1a4edc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a4edcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ee0:
    // 0x1a4ee0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a4ee4:
    // 0x1a4ee4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a4ee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a4ee8:
    // 0x1a4ee8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a4eec:
    // 0x1a4eec: 0x40f809  jalr        $v0
label_1a4ef0:
    if (ctx->pc == 0x1A4EF0u) {
        ctx->pc = 0x1A4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EECu;
        // 0x1a4ef0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EF4u;
        goto label_1a4ef4;
    }
    ctx->pc = 0x1A4EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4EF4u);
        ctx->pc = 0x1A4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EECu;
        // 0x1a4ef0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4EECu, 0x1A4EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4EF4u;
label_1a4ef4:
    // 0x1a4ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ef8:
    // 0x1a4ef8: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x1a4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1a4efc:
    // 0x1a4efc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a4f00:
    if (ctx->pc == 0x1A4F00u) {
        ctx->pc = 0x1A4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EFCu;
        // 0x1a4f00: 0xacb10008  sw          $s1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F04u;
        goto label_1a4f04;
    }
    ctx->pc = 0x1A4EFCu;
    {
        const bool branch_taken_0x1a4efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4efc) {
            ctx->pc = 0x1A4F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4EFCu;
            // 0x1a4f00: 0xacb10008  sw          $s1, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4F04u;
            goto label_1a4f04;
        }
    }
    ctx->pc = 0x1A4F04u;
label_1a4f04:
    // 0x1a4f04: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4f08:
    // 0x1a4f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4f0c:
    // 0x1a4f0c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1a4f10:
    // 0x1a4f10: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a4f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4f14:
    // 0x1a4f14: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a4f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a4f18:
    // 0x1a4f18: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1a4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1a4f1c:
    // 0x1a4f1c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4f20:
    // 0x1a4f20: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a4f24:
    // 0x1a4f24: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a4f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1a4f28:
    // 0x1a4f28: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4f2c:
    // 0x1a4f2c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1a4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_1a4f30:
    // 0x1a4f30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a4f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1a4f34:
    // 0x1a4f34: 0x8e630158  lw          $v1, 0x158($s3)
    ctx->pc = 0x1a4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
label_1a4f38:
    // 0x1a4f38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a4f3c:
    // 0x1a4f3c: 0xae630158  sw          $v1, 0x158($s3)
    ctx->pc = 0x1a4f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 3));
label_1a4f40:
    // 0x1a4f40: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1a4f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a4f44:
    // 0x1a4f44: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1a4f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a4f48:
    // 0x1a4f48: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1a4f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a4f4c:
    // 0x1a4f4c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1a4f4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a4f50:
    // 0x1a4f50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a4f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a4f54:
    // 0x1a4f54: 0x3e00008  jr          $ra
label_1a4f58:
    if (ctx->pc == 0x1A4F58u) {
        ctx->pc = 0x1A4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F54u;
        // 0x1a4f58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F5Cu;
        goto label_1a4f5c;
    }
    ctx->pc = 0x1A4F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F54u;
        // 0x1a4f58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F5Cu;
label_1a4f5c:
    // 0x1a4f5c: 0x0  nop
    ctx->pc = 0x1a4f5cu;
    // NOP
label_1a4f60:
    // 0x1a4f60: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1a4f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1a4f64:
    // 0x1a4f64: 0x0  nop
    ctx->pc = 0x1a4f64u;
    // NOP
    ctx->pc = 0x1a4f68u;
}

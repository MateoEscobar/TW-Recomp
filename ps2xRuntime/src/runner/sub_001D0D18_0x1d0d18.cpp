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

// Function: sub_001D0D18
// Address: 0x1d0d18 - 0x1d0fe8
void sub_001D0D18_0x1d0d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0D18_0x1d0d18");
#endif

    switch (ctx->pc) {
        case 0x1d0d18u: goto label_1d0d18;
        case 0x1d0d1cu: goto label_1d0d1c;
        case 0x1d0d20u: goto label_1d0d20;
        case 0x1d0d24u: goto label_1d0d24;
        case 0x1d0d28u: goto label_1d0d28;
        case 0x1d0d2cu: goto label_1d0d2c;
        case 0x1d0d30u: goto label_1d0d30;
        case 0x1d0d34u: goto label_1d0d34;
        case 0x1d0d38u: goto label_1d0d38;
        case 0x1d0d3cu: goto label_1d0d3c;
        case 0x1d0d40u: goto label_1d0d40;
        case 0x1d0d44u: goto label_1d0d44;
        case 0x1d0d48u: goto label_1d0d48;
        case 0x1d0d4cu: goto label_1d0d4c;
        case 0x1d0d50u: goto label_1d0d50;
        case 0x1d0d54u: goto label_1d0d54;
        case 0x1d0d58u: goto label_1d0d58;
        case 0x1d0d5cu: goto label_1d0d5c;
        case 0x1d0d60u: goto label_1d0d60;
        case 0x1d0d64u: goto label_1d0d64;
        case 0x1d0d68u: goto label_1d0d68;
        case 0x1d0d6cu: goto label_1d0d6c;
        case 0x1d0d70u: goto label_1d0d70;
        case 0x1d0d74u: goto label_1d0d74;
        case 0x1d0d78u: goto label_1d0d78;
        case 0x1d0d7cu: goto label_1d0d7c;
        case 0x1d0d80u: goto label_1d0d80;
        case 0x1d0d84u: goto label_1d0d84;
        case 0x1d0d88u: goto label_1d0d88;
        case 0x1d0d8cu: goto label_1d0d8c;
        case 0x1d0d90u: goto label_1d0d90;
        case 0x1d0d94u: goto label_1d0d94;
        case 0x1d0d98u: goto label_1d0d98;
        case 0x1d0d9cu: goto label_1d0d9c;
        case 0x1d0da0u: goto label_1d0da0;
        case 0x1d0da4u: goto label_1d0da4;
        case 0x1d0da8u: goto label_1d0da8;
        case 0x1d0dacu: goto label_1d0dac;
        case 0x1d0db0u: goto label_1d0db0;
        case 0x1d0db4u: goto label_1d0db4;
        case 0x1d0db8u: goto label_1d0db8;
        case 0x1d0dbcu: goto label_1d0dbc;
        case 0x1d0dc0u: goto label_1d0dc0;
        case 0x1d0dc4u: goto label_1d0dc4;
        case 0x1d0dc8u: goto label_1d0dc8;
        case 0x1d0dccu: goto label_1d0dcc;
        case 0x1d0dd0u: goto label_1d0dd0;
        case 0x1d0dd4u: goto label_1d0dd4;
        case 0x1d0dd8u: goto label_1d0dd8;
        case 0x1d0ddcu: goto label_1d0ddc;
        case 0x1d0de0u: goto label_1d0de0;
        case 0x1d0de4u: goto label_1d0de4;
        case 0x1d0de8u: goto label_1d0de8;
        case 0x1d0decu: goto label_1d0dec;
        case 0x1d0df0u: goto label_1d0df0;
        case 0x1d0df4u: goto label_1d0df4;
        case 0x1d0df8u: goto label_1d0df8;
        case 0x1d0dfcu: goto label_1d0dfc;
        case 0x1d0e00u: goto label_1d0e00;
        case 0x1d0e04u: goto label_1d0e04;
        case 0x1d0e08u: goto label_1d0e08;
        case 0x1d0e0cu: goto label_1d0e0c;
        case 0x1d0e10u: goto label_1d0e10;
        case 0x1d0e14u: goto label_1d0e14;
        case 0x1d0e18u: goto label_1d0e18;
        case 0x1d0e1cu: goto label_1d0e1c;
        case 0x1d0e20u: goto label_1d0e20;
        case 0x1d0e24u: goto label_1d0e24;
        case 0x1d0e28u: goto label_1d0e28;
        case 0x1d0e2cu: goto label_1d0e2c;
        case 0x1d0e30u: goto label_1d0e30;
        case 0x1d0e34u: goto label_1d0e34;
        case 0x1d0e38u: goto label_1d0e38;
        case 0x1d0e3cu: goto label_1d0e3c;
        case 0x1d0e40u: goto label_1d0e40;
        case 0x1d0e44u: goto label_1d0e44;
        case 0x1d0e48u: goto label_1d0e48;
        case 0x1d0e4cu: goto label_1d0e4c;
        case 0x1d0e50u: goto label_1d0e50;
        case 0x1d0e54u: goto label_1d0e54;
        case 0x1d0e58u: goto label_1d0e58;
        case 0x1d0e5cu: goto label_1d0e5c;
        case 0x1d0e60u: goto label_1d0e60;
        case 0x1d0e64u: goto label_1d0e64;
        case 0x1d0e68u: goto label_1d0e68;
        case 0x1d0e6cu: goto label_1d0e6c;
        case 0x1d0e70u: goto label_1d0e70;
        case 0x1d0e74u: goto label_1d0e74;
        case 0x1d0e78u: goto label_1d0e78;
        case 0x1d0e7cu: goto label_1d0e7c;
        case 0x1d0e80u: goto label_1d0e80;
        case 0x1d0e84u: goto label_1d0e84;
        case 0x1d0e88u: goto label_1d0e88;
        case 0x1d0e8cu: goto label_1d0e8c;
        case 0x1d0e90u: goto label_1d0e90;
        case 0x1d0e94u: goto label_1d0e94;
        case 0x1d0e98u: goto label_1d0e98;
        case 0x1d0e9cu: goto label_1d0e9c;
        case 0x1d0ea0u: goto label_1d0ea0;
        case 0x1d0ea4u: goto label_1d0ea4;
        case 0x1d0ea8u: goto label_1d0ea8;
        case 0x1d0eacu: goto label_1d0eac;
        case 0x1d0eb0u: goto label_1d0eb0;
        case 0x1d0eb4u: goto label_1d0eb4;
        case 0x1d0eb8u: goto label_1d0eb8;
        case 0x1d0ebcu: goto label_1d0ebc;
        case 0x1d0ec0u: goto label_1d0ec0;
        case 0x1d0ec4u: goto label_1d0ec4;
        case 0x1d0ec8u: goto label_1d0ec8;
        case 0x1d0eccu: goto label_1d0ecc;
        case 0x1d0ed0u: goto label_1d0ed0;
        case 0x1d0ed4u: goto label_1d0ed4;
        case 0x1d0ed8u: goto label_1d0ed8;
        case 0x1d0edcu: goto label_1d0edc;
        case 0x1d0ee0u: goto label_1d0ee0;
        case 0x1d0ee4u: goto label_1d0ee4;
        case 0x1d0ee8u: goto label_1d0ee8;
        case 0x1d0eecu: goto label_1d0eec;
        case 0x1d0ef0u: goto label_1d0ef0;
        case 0x1d0ef4u: goto label_1d0ef4;
        case 0x1d0ef8u: goto label_1d0ef8;
        case 0x1d0efcu: goto label_1d0efc;
        case 0x1d0f00u: goto label_1d0f00;
        case 0x1d0f04u: goto label_1d0f04;
        case 0x1d0f08u: goto label_1d0f08;
        case 0x1d0f0cu: goto label_1d0f0c;
        case 0x1d0f10u: goto label_1d0f10;
        case 0x1d0f14u: goto label_1d0f14;
        case 0x1d0f18u: goto label_1d0f18;
        case 0x1d0f1cu: goto label_1d0f1c;
        case 0x1d0f20u: goto label_1d0f20;
        case 0x1d0f24u: goto label_1d0f24;
        case 0x1d0f28u: goto label_1d0f28;
        case 0x1d0f2cu: goto label_1d0f2c;
        case 0x1d0f30u: goto label_1d0f30;
        case 0x1d0f34u: goto label_1d0f34;
        case 0x1d0f38u: goto label_1d0f38;
        case 0x1d0f3cu: goto label_1d0f3c;
        case 0x1d0f40u: goto label_1d0f40;
        case 0x1d0f44u: goto label_1d0f44;
        case 0x1d0f48u: goto label_1d0f48;
        case 0x1d0f4cu: goto label_1d0f4c;
        case 0x1d0f50u: goto label_1d0f50;
        case 0x1d0f54u: goto label_1d0f54;
        case 0x1d0f58u: goto label_1d0f58;
        case 0x1d0f5cu: goto label_1d0f5c;
        case 0x1d0f60u: goto label_1d0f60;
        case 0x1d0f64u: goto label_1d0f64;
        case 0x1d0f68u: goto label_1d0f68;
        case 0x1d0f6cu: goto label_1d0f6c;
        case 0x1d0f70u: goto label_1d0f70;
        case 0x1d0f74u: goto label_1d0f74;
        case 0x1d0f78u: goto label_1d0f78;
        case 0x1d0f7cu: goto label_1d0f7c;
        case 0x1d0f80u: goto label_1d0f80;
        case 0x1d0f84u: goto label_1d0f84;
        case 0x1d0f88u: goto label_1d0f88;
        case 0x1d0f8cu: goto label_1d0f8c;
        case 0x1d0f90u: goto label_1d0f90;
        case 0x1d0f94u: goto label_1d0f94;
        case 0x1d0f98u: goto label_1d0f98;
        case 0x1d0f9cu: goto label_1d0f9c;
        case 0x1d0fa0u: goto label_1d0fa0;
        case 0x1d0fa4u: goto label_1d0fa4;
        case 0x1d0fa8u: goto label_1d0fa8;
        case 0x1d0facu: goto label_1d0fac;
        case 0x1d0fb0u: goto label_1d0fb0;
        case 0x1d0fb4u: goto label_1d0fb4;
        case 0x1d0fb8u: goto label_1d0fb8;
        case 0x1d0fbcu: goto label_1d0fbc;
        case 0x1d0fc0u: goto label_1d0fc0;
        case 0x1d0fc4u: goto label_1d0fc4;
        case 0x1d0fc8u: goto label_1d0fc8;
        case 0x1d0fccu: goto label_1d0fcc;
        case 0x1d0fd0u: goto label_1d0fd0;
        case 0x1d0fd4u: goto label_1d0fd4;
        case 0x1d0fd8u: goto label_1d0fd8;
        case 0x1d0fdcu: goto label_1d0fdc;
        case 0x1d0fe0u: goto label_1d0fe0;
        case 0x1d0fe4u: goto label_1d0fe4;
        default: break;
    }

    ctx->pc = 0x1d0d18u;

label_1d0d18:
    // 0x1d0d18: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d0d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1d0d1c:
    // 0x1d0d1c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x1d0d1cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d20:
    // 0x1d0d20: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1d0d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1d0d24:
    // 0x1d0d24: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1d0d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1d0d28:
    // 0x1d0d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d2c:
    // 0x1d0d2c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d0d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1d0d30:
    // 0x1d0d30: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1d0d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d34:
    // 0x1d0d34: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1d0d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1d0d38:
    // 0x1d0d38: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d0d38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d3c:
    // 0x1d0d3c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1d0d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1d0d40:
    // 0x1d0d40: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1d0d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1d0d44:
    // 0x1d0d44: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d0d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1d0d48:
    // 0x1d0d48: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1d0d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1d0d4c:
    // 0x1d0d4c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1d0d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1d0d50:
    // 0x1d0d50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d0d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d0d54:
    // 0x1d0d54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d0d58:
    // 0x1d0d58: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x1d0d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
label_1d0d5c:
    // 0x1d0d5c: 0xafaa002c  sw          $t2, 0x2C($sp)
    ctx->pc = 0x1d0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 10));
label_1d0d60:
    // 0x1d0d60: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
label_1d0d64:
    if (ctx->pc == 0x1D0D64u) {
        ctx->pc = 0x1D0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D60u;
        // 0x1d0d64: 0xafab0030  sw          $t3, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0D68u;
        goto label_1d0d68;
    }
    ctx->pc = 0x1D0D60u;
    {
        const bool branch_taken_0x1d0d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D60u;
        // 0x1d0d64: 0xafab0030  sw          $t3, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d60) {
            ctx->pc = 0x1D0FB4u;
            goto label_1d0fb4;
        }
    }
    ctx->pc = 0x1D0D68u;
label_1d0d68:
    // 0x1d0d68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d0d6c:
    // 0x1d0d6c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1d0d70:
    // 0x1d0d70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d0d74:
    // 0x1d0d74: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d0d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1d0d78:
    // 0x1d0d78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d0d7c:
    if (ctx->pc == 0x1D0D7Cu) {
        ctx->pc = 0x1D0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D78u;
        // 0x1d0d7c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0D80u;
        goto label_1d0d80;
    }
    ctx->pc = 0x1D0D78u;
    {
        const bool branch_taken_0x1d0d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D78u;
        // 0x1d0d7c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d78) {
            ctx->pc = 0x1D0DA0u;
            goto label_1d0da0;
        }
    }
    ctx->pc = 0x1D0D80u;
label_1d0d80:
    // 0x1d0d80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1d0d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1d0d84:
    // 0x1d0d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0d88:
    // 0x1d0d88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1d0d8c:
    if (ctx->pc == 0x1D0D8Cu) {
        ctx->pc = 0x1D0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D88u;
        // 0x1d0d8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0D90u;
        goto label_1d0d90;
    }
    ctx->pc = 0x1D0D88u;
    {
        const bool branch_taken_0x1d0d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D88u;
        // 0x1d0d8c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d88) {
            ctx->pc = 0x1D0DB8u;
            goto label_1d0db8;
        }
    }
    ctx->pc = 0x1D0D90u;
label_1d0d90:
    // 0x1d0d90: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1d0d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1d0d94:
    // 0x1d0d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0d98:
    // 0x1d0d98: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d0d9c:
    if (ctx->pc == 0x1D0D9Cu) {
        ctx->pc = 0x1D0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D98u;
        // 0x1d0d9c: 0xe440ec64  swc1        $f0, -0x139C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0DA0u;
        goto label_1d0da0;
    }
    ctx->pc = 0x1D0D98u;
    {
        const bool branch_taken_0x1d0d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D98u;
        // 0x1d0d9c: 0xe440ec64  swc1        $f0, -0x139C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d98) {
            ctx->pc = 0x1D0DBCu;
            goto label_1d0dbc;
        }
    }
    ctx->pc = 0x1D0DA0u;
label_1d0da0:
    // 0x1d0da0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d0da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1d0da4:
    // 0x1d0da4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1d0da8:
    if (ctx->pc == 0x1D0DA8u) {
        ctx->pc = 0x1D0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DA4u;
        // 0x1d0da8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0DACu;
        goto label_1d0dac;
    }
    ctx->pc = 0x1D0DA4u;
    {
        const bool branch_taken_0x1d0da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0da4) {
            ctx->pc = 0x1D0DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0DA4u;
            // 0x1d0da8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0DACu;
            goto label_1d0dac;
        }
    }
    ctx->pc = 0x1D0DACu;
label_1d0dac:
    // 0x1d0dac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1d0dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1d0db0:
    // 0x1d0db0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0db4:
    // 0x1d0db4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d0db8:
    // 0x1d0db8: 0xe440ec64  swc1        $f0, -0x139C($v0)
    ctx->pc = 0x1d0db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962276), bits); }
label_1d0dbc:
    // 0x1d0dbc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1d0dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1d0dc0:
    // 0x1d0dc0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d0dc4:
    // 0x1d0dc4: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1d0dc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1d0dc8:
    // 0x1d0dc8: 0x3c0c0060  lui         $t4, 0x60
    ctx->pc = 0x1d0dc8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)96 << 16));
label_1d0dcc:
    // 0x1d0dcc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d0dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1d0dd0:
    // 0x1d0dd0: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1d0dd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d0dd4:
    // 0x1d0dd4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1d0dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_1d0dd8:
    // 0x1d0dd8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1d0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1d0ddc:
    // 0x1d0ddc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d0ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d0de0:
    // 0x1d0de0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d0de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0de4:
    // 0x1d0de4: 0x79a20000  lq          $v0, 0x0($t5)
    ctx->pc = 0x1d0de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 13), 0)));
label_1d0de8:
    // 0x1d0de8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0de8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0dec:
    // 0x1d0dec: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1d0decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1d0df0:
    // 0x1d0df0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0df0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0df4:
    // 0x1d0df4: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1d0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_1d0df8:
    // 0x1d0df8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d0df8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0dfc:
    // 0x1d0dfc: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x1d0dfcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d0e00:
    // 0x1d0e00: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x1d0e00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0e04:
    // 0x1d0e04: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1d0e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1d0e08:
    // 0x1d0e08: 0x26110250  addiu       $s1, $s0, 0x250
    ctx->pc = 0x1d0e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1d0e0c:
    // 0x1d0e0c: 0x26140450  addiu       $s4, $s0, 0x450
    ctx->pc = 0x1d0e0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
label_1d0e10:
    // 0x1d0e10: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d0e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e14:
    // 0x1d0e14: 0x7e020240  sq          $v0, 0x240($s0)
    ctx->pc = 0x1d0e14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), GPR_VEC(ctx, 2));
label_1d0e18:
    // 0x1d0e18: 0x8c67d320  lw          $a3, -0x2CE0($v1)
    ctx->pc = 0x1d0e18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955808)));
label_1d0e1c:
    // 0x1d0e1c: 0xae070130  sw          $a3, 0x130($s0)
    ctx->pc = 0x1d0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 7));
label_1d0e20:
    // 0x1d0e20: 0x8d82d318  lw          $v0, -0x2CE8($t4)
    ctx->pc = 0x1d0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294955800)));
label_1d0e24:
    // 0x1d0e24: 0xe60c05f0  swc1        $f12, 0x5F0($s0)
    ctx->pc = 0x1d0e24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_1d0e28:
    // 0x1d0e28: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x1d0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_1d0e2c:
    // 0x1d0e2c: 0xc073418  jal         func_1CD060
label_1d0e30:
    if (ctx->pc == 0x1D0E30u) {
        ctx->pc = 0x1D0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E2Cu;
        // 0x1d0e30: 0xe60d05f4  swc1        $f13, 0x5F4($s0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1524), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E34u;
        goto label_1d0e34;
    }
    ctx->pc = 0x1D0E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E34u);
    ctx->pc = 0x1D0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E2Cu;
    // 0x1d0e30: 0xe60d05f4  swc1        $f13, 0x5F4($s0) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1524), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1D0E2Cu, 0x1D0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E34u;
label_1d0e34:
    // 0x1d0e34: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d0e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d0e38:
    // 0x1d0e38: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d0e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d0e3c:
    // 0x1d0e3c: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x1d0e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_1d0e40:
    // 0x1d0e40: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x1d0e40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0e44:
    // 0x1d0e44: 0xa04b0003  sb          $t3, 0x3($v0)
    ctx->pc = 0x1d0e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 11));
label_1d0e48:
    // 0x1d0e48: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1d0e48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e4c:
    // 0x1d0e4c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1d0e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1d0e50:
    // 0x1d0e50: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x1d0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_1d0e54:
    // 0x1d0e54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d0e58:
    // 0x1d0e58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d0e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0e5c:
    // 0x1d0e5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d0e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e60:
    // 0x1d0e60: 0x8faa0030  lw          $t2, 0x30($sp)
    ctx->pc = 0x1d0e60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0e64:
    // 0x1d0e64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0e68:
    // 0x1d0e68: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1d0e68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1d0e6c:
    // 0x1d0e6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d0e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0e70:
    // 0x1d0e70: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x1d0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
label_1d0e74:
    // 0x1d0e74: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x1d0e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0e78:
    // 0x1d0e78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d0e78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e7c:
    // 0x1d0e7c: 0x3c014603  lui         $at, 0x4603
    ctx->pc = 0x1d0e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17923 << 16));
label_1d0e80:
    // 0x1d0e80: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1d0e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1d0e84:
    // 0x1d0e84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1d0e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d0e88:
    // 0x1d0e88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d0e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d0e8c:
    // 0x1d0e8c: 0xc06876e  jal         func_1A1DB8
label_1d0e90:
    if (ctx->pc == 0x1D0E90u) {
        ctx->pc = 0x1D0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E8Cu;
        // 0x1d0e90: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E94u;
        goto label_1d0e94;
    }
    ctx->pc = 0x1D0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E94u);
    ctx->pc = 0x1D0E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E8Cu;
    // 0x1d0e90: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1D0E8Cu, 0x1D0E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E94u;
label_1d0e94:
    // 0x1d0e94: 0x27b30024  addiu       $s3, $sp, 0x24
    ctx->pc = 0x1d0e94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1d0e98:
    // 0x1d0e98: 0x8e430450  lw          $v1, 0x450($s2)
    ctx->pc = 0x1d0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
label_1d0e9c:
    // 0x1d0e9c: 0x0  nop
    ctx->pc = 0x1d0e9cu;
    // NOP
label_1d0ea0:
    // 0x1d0ea0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d0ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ea4:
    // 0x1d0ea4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1d0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1d0ea8:
    // 0x1d0ea8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d0ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0eac:
    // 0x1d0eac: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1d0eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1d0eb0:
    // 0x1d0eb0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0eb4:
    // 0x1d0eb4: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x1d0eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_1d0eb8:
    // 0x1d0eb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0eb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ebc:
    // 0x1d0ebc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d0ec0:
    // 0x1d0ec0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_1d0ec4:
    // 0x1d0ec4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1d0ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1d0ec8:
    // 0x1d0ec8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d0ecc:
    // 0x1d0ecc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1d0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1d0ed0:
    // 0x1d0ed0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d0ed0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1d0ed4:
    // 0x1d0ed4: 0x40f809  jalr        $v0
label_1d0ed8:
    if (ctx->pc == 0x1D0ED8u) {
        ctx->pc = 0x1D0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED4u;
        // 0x1d0ed8: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0EDCu;
        goto label_1d0edc;
    }
    ctx->pc = 0x1D0ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0EDCu);
        ctx->pc = 0x1D0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED4u;
        // 0x1d0ed8: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0ED4u, 0x1D0EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0EDCu;
label_1d0edc:
    // 0x1d0edc: 0xa2400514  sb          $zero, 0x514($s2)
    ctx->pc = 0x1d0edcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1300), (uint8_t)GPR_U32(ctx, 0));
label_1d0ee0:
    // 0x1d0ee0: 0x2403ffa0  addiu       $v1, $zero, -0x60
    ctx->pc = 0x1d0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967200));
label_1d0ee4:
    // 0x1d0ee4: 0xa3a30024  sb          $v1, 0x24($sp)
    ctx->pc = 0x1d0ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 3));
label_1d0ee8:
    // 0x1d0ee8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d0ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d0eec:
    // 0x1d0eec: 0xa27e0001  sb          $fp, 0x1($s3)
    ctx->pc = 0x1d0eecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 30));
label_1d0ef0:
    // 0x1d0ef0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0ef4:
    // 0x1d0ef4: 0xa27e0002  sb          $fp, 0x2($s3)
    ctx->pc = 0x1d0ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 30));
label_1d0ef8:
    // 0x1d0ef8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d0ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0efc:
    // 0x1d0efc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d0efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1d0f00:
    // 0x1d0f00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d0f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d0f04:
    // 0x1d0f04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d0f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0f08:
    // 0x1d0f08: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d0f08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0f0c:
    // 0x1d0f0c: 0x8fa9002c  lw          $t1, 0x2C($sp)
    ctx->pc = 0x1d0f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1d0f10:
    // 0x1d0f10: 0x265200d0  addiu       $s2, $s2, 0xD0
    ctx->pc = 0x1d0f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_1d0f14:
    // 0x1d0f14: 0xa2770003  sb          $s7, 0x3($s3)
    ctx->pc = 0x1d0f14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 23));
label_1d0f18:
    // 0x1d0f18: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x1d0f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
label_1d0f1c:
    // 0x1d0f1c: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x1d0f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
label_1d0f20:
    // 0x1d0f20: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1d0f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d0f24:
    // 0x1d0f24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d0f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0f28:
    // 0x1d0f28: 0x8faa00e0  lw          $t2, 0xE0($sp)
    ctx->pc = 0x1d0f28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d0f2c:
    // 0x1d0f2c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1d0f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1d0f30:
    // 0x1d0f30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1d0f34:
    // 0x1d0f34: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d0f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1d0f38:
    // 0x1d0f38: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1d0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1d0f3c:
    // 0x1d0f3c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x1d0f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
label_1d0f40:
    // 0x1d0f40: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1d0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1d0f44:
    // 0x1d0f44: 0x40f809  jalr        $v0
label_1d0f48:
    if (ctx->pc == 0x1D0F48u) {
        ctx->pc = 0x1D0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F44u;
        // 0x1d0f48: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0F4Cu;
        goto label_1d0f4c;
    }
    ctx->pc = 0x1D0F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0F4Cu);
        ctx->pc = 0x1D0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F44u;
        // 0x1d0f48: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0F44u, 0x1D0F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0F4Cu;
label_1d0f4c:
    // 0x1d0f4c: 0xc60c05f0  lwc1        $f12, 0x5F0($s0)
    ctx->pc = 0x1d0f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0f50:
    // 0x1d0f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0f54:
    // 0x1d0f54: 0xc60d05f4  lwc1        $f13, 0x5F4($s0)
    ctx->pc = 0x1d0f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d0f58:
    // 0x1d0f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0f5c:
    // 0x1d0f5c: 0xc068848  jal         func_1A2120
label_1d0f60:
    if (ctx->pc == 0x1D0F60u) {
        ctx->pc = 0x1D0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F5Cu;
        // 0x1d0f60: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0F64u;
        goto label_1d0f64;
    }
    ctx->pc = 0x1D0F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0F64u);
    ctx->pc = 0x1D0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0F5Cu;
    // 0x1d0f60: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1D0F5Cu, 0x1D0F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0F64u;
label_1d0f64:
    // 0x1d0f64: 0x2ec20002  sltiu       $v0, $s6, 0x2
    ctx->pc = 0x1d0f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d0f68:
    // 0x1d0f68: 0x5440ffcd  bnel        $v0, $zero, . + 4 + (-0x33 << 2)
label_1d0f6c:
    if (ctx->pc == 0x1D0F6Cu) {
        ctx->pc = 0x1D0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F68u;
        // 0x1d0f6c: 0x8e430450  lw          $v1, 0x450($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0F70u;
        goto label_1d0f70;
    }
    ctx->pc = 0x1D0F68u;
    {
        const bool branch_taken_0x1d0f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f68) {
            ctx->pc = 0x1D0F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0F68u;
            // 0x1d0f6c: 0x8e430450  lw          $v1, 0x450($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ea0;
        }
    }
    ctx->pc = 0x1D0F70u;
label_1d0f70:
    // 0x1d0f70: 0xc60005f4  lwc1        $f0, 0x5F4($s0)
    ctx->pc = 0x1d0f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0f74:
    // 0x1d0f74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d0f78:
    // 0x1d0f78: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1d0f7c:
    // 0x1d0f7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d0f7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1d0f80:
    // 0x1d0f80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d0f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0f84:
    // 0x1d0f84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0f88:
    // 0x1d0f88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d0f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d0f8c:
    // 0x1d0f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d0f90:
    // 0x1d0f90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d0f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d0f94:
    // 0x1d0f94: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1d0f94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1d0f98:
    // 0x1d0f98: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x1d0f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1d0f9c:
    // 0x1d0f9c: 0xe440ec68  swc1        $f0, -0x1398($v0)
    ctx->pc = 0x1d0f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962280), bits); }
label_1d0fa0:
    // 0x1d0fa0: 0xa0f809  jalr        $a1
label_1d0fa4:
    if (ctx->pc == 0x1D0FA4u) {
        ctx->pc = 0x1D0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FA0u;
        // 0x1d0fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0FA8u;
        goto label_1d0fa8;
    }
    ctx->pc = 0x1D0FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1D0FA8u);
        ctx->pc = 0x1D0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FA0u;
        // 0x1d0fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0FA0u, 0x1D0FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0FA8u;
label_1d0fa8:
    // 0x1d0fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0fac:
    // 0x1d0fac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d0facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1d0fb0:
    // 0x1d0fb0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1d0fb4:
    // 0x1d0fb4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1d0fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1d0fb8:
    // 0x1d0fb8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1d0fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1d0fbc:
    // 0x1d0fbc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1d0fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d0fc0:
    // 0x1d0fc0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1d0fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d0fc4:
    // 0x1d0fc4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1d0fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d0fc8:
    // 0x1d0fc8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d0fc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d0fcc:
    // 0x1d0fcc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d0fccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d0fd0:
    // 0x1d0fd0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1d0fd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d0fd4:
    // 0x1d0fd4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1d0fd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d0fd8:
    // 0x1d0fd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d0fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d0fdc:
    // 0x1d0fdc: 0x3e00008  jr          $ra
label_1d0fe0:
    if (ctx->pc == 0x1D0FE0u) {
        ctx->pc = 0x1D0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FDCu;
        // 0x1d0fe0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0FE4u;
        goto label_1d0fe4;
    }
    ctx->pc = 0x1D0FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FDCu;
        // 0x1d0fe0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0FE4u;
label_1d0fe4:
    // 0x1d0fe4: 0x0  nop
    ctx->pc = 0x1d0fe4u;
    // NOP
    ctx->pc = 0x1d0fe8u;
}

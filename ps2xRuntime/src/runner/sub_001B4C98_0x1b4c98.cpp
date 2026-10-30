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

// Function: sub_001B4C98
// Address: 0x1b4c98 - 0x1b4ed0
void sub_001B4C98_0x1b4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4C98_0x1b4c98");
#endif

    switch (ctx->pc) {
        case 0x1b4c98u: goto label_1b4c98;
        case 0x1b4c9cu: goto label_1b4c9c;
        case 0x1b4ca0u: goto label_1b4ca0;
        case 0x1b4ca4u: goto label_1b4ca4;
        case 0x1b4ca8u: goto label_1b4ca8;
        case 0x1b4cacu: goto label_1b4cac;
        case 0x1b4cb0u: goto label_1b4cb0;
        case 0x1b4cb4u: goto label_1b4cb4;
        case 0x1b4cb8u: goto label_1b4cb8;
        case 0x1b4cbcu: goto label_1b4cbc;
        case 0x1b4cc0u: goto label_1b4cc0;
        case 0x1b4cc4u: goto label_1b4cc4;
        case 0x1b4cc8u: goto label_1b4cc8;
        case 0x1b4cccu: goto label_1b4ccc;
        case 0x1b4cd0u: goto label_1b4cd0;
        case 0x1b4cd4u: goto label_1b4cd4;
        case 0x1b4cd8u: goto label_1b4cd8;
        case 0x1b4cdcu: goto label_1b4cdc;
        case 0x1b4ce0u: goto label_1b4ce0;
        case 0x1b4ce4u: goto label_1b4ce4;
        case 0x1b4ce8u: goto label_1b4ce8;
        case 0x1b4cecu: goto label_1b4cec;
        case 0x1b4cf0u: goto label_1b4cf0;
        case 0x1b4cf4u: goto label_1b4cf4;
        case 0x1b4cf8u: goto label_1b4cf8;
        case 0x1b4cfcu: goto label_1b4cfc;
        case 0x1b4d00u: goto label_1b4d00;
        case 0x1b4d04u: goto label_1b4d04;
        case 0x1b4d08u: goto label_1b4d08;
        case 0x1b4d0cu: goto label_1b4d0c;
        case 0x1b4d10u: goto label_1b4d10;
        case 0x1b4d14u: goto label_1b4d14;
        case 0x1b4d18u: goto label_1b4d18;
        case 0x1b4d1cu: goto label_1b4d1c;
        case 0x1b4d20u: goto label_1b4d20;
        case 0x1b4d24u: goto label_1b4d24;
        case 0x1b4d28u: goto label_1b4d28;
        case 0x1b4d2cu: goto label_1b4d2c;
        case 0x1b4d30u: goto label_1b4d30;
        case 0x1b4d34u: goto label_1b4d34;
        case 0x1b4d38u: goto label_1b4d38;
        case 0x1b4d3cu: goto label_1b4d3c;
        case 0x1b4d40u: goto label_1b4d40;
        case 0x1b4d44u: goto label_1b4d44;
        case 0x1b4d48u: goto label_1b4d48;
        case 0x1b4d4cu: goto label_1b4d4c;
        case 0x1b4d50u: goto label_1b4d50;
        case 0x1b4d54u: goto label_1b4d54;
        case 0x1b4d58u: goto label_1b4d58;
        case 0x1b4d5cu: goto label_1b4d5c;
        case 0x1b4d60u: goto label_1b4d60;
        case 0x1b4d64u: goto label_1b4d64;
        case 0x1b4d68u: goto label_1b4d68;
        case 0x1b4d6cu: goto label_1b4d6c;
        case 0x1b4d70u: goto label_1b4d70;
        case 0x1b4d74u: goto label_1b4d74;
        case 0x1b4d78u: goto label_1b4d78;
        case 0x1b4d7cu: goto label_1b4d7c;
        case 0x1b4d80u: goto label_1b4d80;
        case 0x1b4d84u: goto label_1b4d84;
        case 0x1b4d88u: goto label_1b4d88;
        case 0x1b4d8cu: goto label_1b4d8c;
        case 0x1b4d90u: goto label_1b4d90;
        case 0x1b4d94u: goto label_1b4d94;
        case 0x1b4d98u: goto label_1b4d98;
        case 0x1b4d9cu: goto label_1b4d9c;
        case 0x1b4da0u: goto label_1b4da0;
        case 0x1b4da4u: goto label_1b4da4;
        case 0x1b4da8u: goto label_1b4da8;
        case 0x1b4dacu: goto label_1b4dac;
        case 0x1b4db0u: goto label_1b4db0;
        case 0x1b4db4u: goto label_1b4db4;
        case 0x1b4db8u: goto label_1b4db8;
        case 0x1b4dbcu: goto label_1b4dbc;
        case 0x1b4dc0u: goto label_1b4dc0;
        case 0x1b4dc4u: goto label_1b4dc4;
        case 0x1b4dc8u: goto label_1b4dc8;
        case 0x1b4dccu: goto label_1b4dcc;
        case 0x1b4dd0u: goto label_1b4dd0;
        case 0x1b4dd4u: goto label_1b4dd4;
        case 0x1b4dd8u: goto label_1b4dd8;
        case 0x1b4ddcu: goto label_1b4ddc;
        case 0x1b4de0u: goto label_1b4de0;
        case 0x1b4de4u: goto label_1b4de4;
        case 0x1b4de8u: goto label_1b4de8;
        case 0x1b4decu: goto label_1b4dec;
        case 0x1b4df0u: goto label_1b4df0;
        case 0x1b4df4u: goto label_1b4df4;
        case 0x1b4df8u: goto label_1b4df8;
        case 0x1b4dfcu: goto label_1b4dfc;
        case 0x1b4e00u: goto label_1b4e00;
        case 0x1b4e04u: goto label_1b4e04;
        case 0x1b4e08u: goto label_1b4e08;
        case 0x1b4e0cu: goto label_1b4e0c;
        case 0x1b4e10u: goto label_1b4e10;
        case 0x1b4e14u: goto label_1b4e14;
        case 0x1b4e18u: goto label_1b4e18;
        case 0x1b4e1cu: goto label_1b4e1c;
        case 0x1b4e20u: goto label_1b4e20;
        case 0x1b4e24u: goto label_1b4e24;
        case 0x1b4e28u: goto label_1b4e28;
        case 0x1b4e2cu: goto label_1b4e2c;
        case 0x1b4e30u: goto label_1b4e30;
        case 0x1b4e34u: goto label_1b4e34;
        case 0x1b4e38u: goto label_1b4e38;
        case 0x1b4e3cu: goto label_1b4e3c;
        case 0x1b4e40u: goto label_1b4e40;
        case 0x1b4e44u: goto label_1b4e44;
        case 0x1b4e48u: goto label_1b4e48;
        case 0x1b4e4cu: goto label_1b4e4c;
        case 0x1b4e50u: goto label_1b4e50;
        case 0x1b4e54u: goto label_1b4e54;
        case 0x1b4e58u: goto label_1b4e58;
        case 0x1b4e5cu: goto label_1b4e5c;
        case 0x1b4e60u: goto label_1b4e60;
        case 0x1b4e64u: goto label_1b4e64;
        case 0x1b4e68u: goto label_1b4e68;
        case 0x1b4e6cu: goto label_1b4e6c;
        case 0x1b4e70u: goto label_1b4e70;
        case 0x1b4e74u: goto label_1b4e74;
        case 0x1b4e78u: goto label_1b4e78;
        case 0x1b4e7cu: goto label_1b4e7c;
        case 0x1b4e80u: goto label_1b4e80;
        case 0x1b4e84u: goto label_1b4e84;
        case 0x1b4e88u: goto label_1b4e88;
        case 0x1b4e8cu: goto label_1b4e8c;
        case 0x1b4e90u: goto label_1b4e90;
        case 0x1b4e94u: goto label_1b4e94;
        case 0x1b4e98u: goto label_1b4e98;
        case 0x1b4e9cu: goto label_1b4e9c;
        case 0x1b4ea0u: goto label_1b4ea0;
        case 0x1b4ea4u: goto label_1b4ea4;
        case 0x1b4ea8u: goto label_1b4ea8;
        case 0x1b4eacu: goto label_1b4eac;
        case 0x1b4eb0u: goto label_1b4eb0;
        case 0x1b4eb4u: goto label_1b4eb4;
        case 0x1b4eb8u: goto label_1b4eb8;
        case 0x1b4ebcu: goto label_1b4ebc;
        case 0x1b4ec0u: goto label_1b4ec0;
        case 0x1b4ec4u: goto label_1b4ec4;
        case 0x1b4ec8u: goto label_1b4ec8;
        case 0x1b4eccu: goto label_1b4ecc;
        default: break;
    }

    ctx->pc = 0x1b4c98u;

label_1b4c98:
    // 0x1b4c98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b4c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b4c9c:
    // 0x1b4c9c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1b4c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b4ca0:
    // 0x1b4ca0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1b4ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1b4ca4:
    // 0x1b4ca4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b4ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b4ca8:
    // 0x1b4ca8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b4ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b4cac:
    // 0x1b4cac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1b4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1b4cb0:
    // 0x1b4cb0: 0x30f300ff  andi        $s3, $a3, 0xFF
    ctx->pc = 0x1b4cb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1b4cb4:
    // 0x1b4cb4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1b4cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1b4cb8:
    // 0x1b4cb8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1b4cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1b4cbc:
    // 0x1b4cbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b4cc0:
    // 0x1b4cc0: 0x10800070  beqz        $a0, . + 4 + (0x70 << 2)
label_1b4cc4:
    if (ctx->pc == 0x1B4CC4u) {
        ctx->pc = 0x1B4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CC0u;
        // 0x1b4cc4: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4CC8u;
        goto label_1b4cc8;
    }
    ctx->pc = 0x1B4CC0u;
    {
        const bool branch_taken_0x1b4cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CC0u;
        // 0x1b4cc4: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cc0) {
            ctx->pc = 0x1B4E84u;
            goto label_1b4e84;
        }
    }
    ctx->pc = 0x1B4CC8u;
label_1b4cc8:
    // 0x1b4cc8: 0x240203f0  addiu       $v0, $zero, 0x3F0
    ctx->pc = 0x1b4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_1b4ccc:
    // 0x1b4ccc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1b4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1b4cd0:
    // 0x1b4cd0: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1b4cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b4cd4:
    // 0x1b4cd4: 0x2464a1b0  addiu       $a0, $v1, -0x5E50
    ctx->pc = 0x1b4cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943152));
label_1b4cd8:
    // 0x1b4cd8: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1b4cd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b4cdc:
    // 0x1b4cdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b4ce0:
    // 0x1b4ce0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b4ce4:
    // 0x1b4ce4: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_1b4ce8:
    if (ctx->pc == 0x1B4CE8u) {
        ctx->pc = 0x1B4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CE4u;
        // 0x1b4ce8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4CECu;
        goto label_1b4cec;
    }
    ctx->pc = 0x1B4CE4u;
    {
        const bool branch_taken_0x1b4ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CE4u;
        // 0x1b4ce8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ce4) {
            ctx->pc = 0x1B4EB0u;
            goto label_1b4eb0;
        }
    }
    ctx->pc = 0x1B4CECu;
label_1b4cec:
    // 0x1b4cec: 0x8c82fcdc  lw          $v0, -0x324($a0)
    ctx->pc = 0x1b4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966492)));
label_1b4cf0:
    // 0x1b4cf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b4cf4:
    if (ctx->pc == 0x1B4CF4u) {
        ctx->pc = 0x1B4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CF0u;
        // 0x1b4cf4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4CF8u;
        goto label_1b4cf8;
    }
    ctx->pc = 0x1B4CF0u;
    {
        const bool branch_taken_0x1b4cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CF0u;
        // 0x1b4cf4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cf0) {
            ctx->pc = 0x1B4D0Cu;
            goto label_1b4d0c;
        }
    }
    ctx->pc = 0x1B4CF8u;
label_1b4cf8:
    // 0x1b4cf8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b4cfc:
    // 0x1b4cfc: 0xc620d548  lwc1        $f0, -0x2AB8($s1)
    ctx->pc = 0x1b4cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4d00:
    // 0x1b4d00: 0xc441d544  lwc1        $f1, -0x2ABC($v0)
    ctx->pc = 0x1b4d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4d04:
    // 0x1b4d04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b4d08:
    // 0x1b4d08: 0xe620d548  swc1        $f0, -0x2AB8($s1)
    ctx->pc = 0x1b4d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294956360), bits); }
label_1b4d0c:
    // 0x1b4d0c: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
label_1b4d10:
    if (ctx->pc == 0x1B4D10u) {
        ctx->pc = 0x1B4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D0Cu;
        // 0x1b4d10: 0xc620d548  lwc1        $f0, -0x2AB8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4D14u;
        goto label_1b4d14;
    }
    ctx->pc = 0x1B4D0Cu;
    {
        const bool branch_taken_0x1b4d0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D0Cu;
        // 0x1b4d10: 0xc620d548  lwc1        $f0, -0x2AB8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d0c) {
            ctx->pc = 0x1B4D38u;
            goto label_1b4d38;
        }
    }
    ctx->pc = 0x1B4D14u;
label_1b4d14:
    // 0x1b4d14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b4d18:
    // 0x1b4d18: 0xc622d548  lwc1        $f2, -0x2AB8($s1)
    ctx->pc = 0x1b4d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4d1c:
    // 0x1b4d1c: 0xc440d550  lwc1        $f0, -0x2AB0($v0)
    ctx->pc = 0x1b4d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4d20:
    // 0x1b4d20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4d24:
    // 0x1b4d24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4d28:
    // 0x1b4d28: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b4d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b4d2c:
    // 0x1b4d2c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b4d2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b4d30:
    // 0x1b4d30: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b4d34:
    if (ctx->pc == 0x1B4D34u) {
        ctx->pc = 0x1B4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D30u;
        // 0x1b4d34: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4D38u;
        goto label_1b4d38;
    }
    ctx->pc = 0x1B4D30u;
    {
        const bool branch_taken_0x1b4d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D30u;
        // 0x1b4d34: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d30) {
            ctx->pc = 0x1B4D58u;
            goto label_1b4d58;
        }
    }
    ctx->pc = 0x1B4D38u;
label_1b4d38:
    // 0x1b4d38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4d3c:
    // 0x1b4d3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4d40:
    // 0x1b4d40: 0x3c013f4e  lui         $at, 0x3F4E
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16206 << 16));
label_1b4d44:
    // 0x1b4d44: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1b4d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1b4d48:
    // 0x1b4d48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4d4c:
    // 0x1b4d4c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b4d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b4d50:
    // 0x1b4d50: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b4d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b4d54:
    // 0x1b4d54: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1b4d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b4d58:
    // 0x1b4d58: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1b4d5c:
    // 0x1b4d5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b4d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1b4d60:
    // 0x1b4d60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1b4d64:
    // 0x1b4d64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b4d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1b4d68:
    // 0x1b4d68: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
label_1b4d6c:
    // 0x1b4d6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b4d70:
    // 0x1b4d70: 0x240503f0  addiu       $a1, $zero, 0x3F0
    ctx->pc = 0x1b4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_1b4d74:
    // 0x1b4d74: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x1b4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_1b4d78:
    // 0x1b4d78: 0x2452818  mult        $a1, $s2, $a1
    ctx->pc = 0x1b4d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b4d7c:
    // 0x1b4d7c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1b4d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_1b4d80:
    // 0x1b4d80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b4d84:
    // 0x1b4d84: 0x240600b7  addiu       $a2, $zero, 0xB7
    ctx->pc = 0x1b4d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
label_1b4d88:
    // 0x1b4d88: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x1b4d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1b4d8c:
    // 0x1b4d8c: 0xc4601124  lwc1        $f0, 0x1124($v1)
    ctx->pc = 0x1b4d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4d90:
    // 0x1b4d90: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b4d94:
    // 0x1b4d94: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1b4d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1b4d98:
    // 0x1b4d98: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b4d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1b4d9c:
    // 0x1b4d9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b4da0:
    // 0x1b4da0: 0x2683a1b0  addiu       $v1, $s4, -0x5E50
    ctx->pc = 0x1b4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943152));
label_1b4da4:
    // 0x1b4da4: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1b4da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1b4da8:
    // 0x1b4da8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b4da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1b4dac:
    // 0x1b4dac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b4dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b4db0:
    // 0x1b4db0: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x1b4db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b4db4:
    // 0x1b4db4: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x1b4db4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
label_1b4db8:
    // 0x1b4db8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b4db8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b4dbc:
    // 0x1b4dbc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b4dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_1b4dc0:
    // 0x1b4dc0: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x1b4dc0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_1b4dc4:
    // 0x1b4dc4: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x1b4dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
label_1b4dc8:
    // 0x1b4dc8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1b4dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1b4dcc:
    // 0x1b4dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4dd0:
    // 0x1b4dd0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b4dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b4dd4:
    // 0x1b4dd4: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1b4dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
label_1b4dd8:
    // 0x1b4dd8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1b4dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4ddc:
    // 0x1b4ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4de0:
    // 0x1b4de0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b4de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b4de4:
    // 0x1b4de4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1b4de4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_1b4de8:
    // 0x1b4de8: 0x35080036  ori         $t0, $t0, 0x36
    ctx->pc = 0x1b4de8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54);
label_1b4dec:
    // 0x1b4dec: 0xc0707e0  jal         func_1C1F80
label_1b4df0:
    if (ctx->pc == 0x1B4DF0u) {
        ctx->pc = 0x1B4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DECu;
        // 0x1b4df0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4DF4u;
        goto label_1b4df4;
    }
    ctx->pc = 0x1B4DECu;
    SET_GPR_U32(ctx, 31, 0x1B4DF4u);
    ctx->pc = 0x1B4DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DECu;
    // 0x1b4df0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F80u, 0x1B4DECu, 0x1B4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4DF4u;
label_1b4df4:
    // 0x1b4df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4df8:
    // 0x1b4df8: 0xc070904  jal         func_1C2410
label_1b4dfc:
    if (ctx->pc == 0x1B4DFCu) {
        ctx->pc = 0x1B4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DF8u;
        // 0x1b4dfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E00u;
        goto label_1b4e00;
    }
    ctx->pc = 0x1B4DF8u;
    SET_GPR_U32(ctx, 31, 0x1B4E00u);
    ctx->pc = 0x1B4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4DF8u;
    // 0x1b4dfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2410u, 0x1B4DF8u, 0x1B4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E00u;
label_1b4e00:
    // 0x1b4e00: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
label_1b4e04:
    if (ctx->pc == 0x1B4E04u) {
        ctx->pc = 0x1B4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E00u;
        // 0x1b4e04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E08u;
        goto label_1b4e08;
    }
    ctx->pc = 0x1B4E00u;
    {
        const bool branch_taken_0x1b4e00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E00u;
        // 0x1b4e04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e00) {
            ctx->pc = 0x1B4E3Cu;
            goto label_1b4e3c;
        }
    }
    ctx->pc = 0x1B4E08u;
label_1b4e08:
    // 0x1b4e08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b4e0c:
    // 0x1b4e0c: 0xc620d548  lwc1        $f0, -0x2AB8($s1)
    ctx->pc = 0x1b4e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4e10:
    // 0x1b4e10: 0xc441d554  lwc1        $f1, -0x2AAC($v0)
    ctx->pc = 0x1b4e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4e14:
    // 0x1b4e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4e18:
    // 0x1b4e18: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b4e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b4e1c:
    // 0x1b4e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4e20:
    // 0x1b4e20: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b4e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b4e24:
    // 0x1b4e24: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1b4e24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b4e28:
    // 0x1b4e28: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1b4e2c:
    // 0x1b4e2c: 0xc0708a4  jal         func_1C2290
label_1b4e30:
    if (ctx->pc == 0x1B4E30u) {
        ctx->pc = 0x1B4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E2Cu;
        // 0x1b4e30: 0xa200009c  sb          $zero, 0x9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E34u;
        goto label_1b4e34;
    }
    ctx->pc = 0x1B4E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B4E34u);
    ctx->pc = 0x1B4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E2Cu;
    // 0x1b4e30: 0xa200009c  sb          $zero, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1B4E2Cu, 0x1B4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E34u;
label_1b4e34:
    // 0x1b4e34: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b4e38:
    if (ctx->pc == 0x1B4E38u) {
        ctx->pc = 0x1B4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E34u;
        // 0x1b4e38: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E3Cu;
        goto label_1b4e3c;
    }
    ctx->pc = 0x1B4E34u;
    {
        const bool branch_taken_0x1b4e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E34u;
        // 0x1b4e38: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e34) {
            ctx->pc = 0x1B4E6Cu;
            goto label_1b4e6c;
        }
    }
    ctx->pc = 0x1B4E3Cu;
label_1b4e3c:
    // 0x1b4e3c: 0xc620d548  lwc1        $f0, -0x2AB8($s1)
    ctx->pc = 0x1b4e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294956360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4e40:
    // 0x1b4e40: 0xc441d54c  lwc1        $f1, -0x2AB4($v0)
    ctx->pc = 0x1b4e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4e44:
    // 0x1b4e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4e48:
    // 0x1b4e48: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1b4e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b4e4c:
    // 0x1b4e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4e50:
    // 0x1b4e50: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b4e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b4e54:
    // 0x1b4e54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4e58:
    // 0x1b4e58: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1b4e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b4e5c:
    // 0x1b4e5c: 0xa203009c  sb          $v1, 0x9C($s0)
    ctx->pc = 0x1b4e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 3));
label_1b4e60:
    // 0x1b4e60: 0xc0708a4  jal         func_1C2290
label_1b4e64:
    if (ctx->pc == 0x1B4E64u) {
        ctx->pc = 0x1B4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E60u;
        // 0x1b4e64: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E68u;
        goto label_1b4e68;
    }
    ctx->pc = 0x1B4E60u;
    SET_GPR_U32(ctx, 31, 0x1B4E68u);
    ctx->pc = 0x1B4E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E60u;
    // 0x1b4e64: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2290u, 0x1B4E60u, 0x1B4E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E68u;
label_1b4e68:
    // 0x1b4e68: 0x240203f0  addiu       $v0, $zero, 0x3F0
    ctx->pc = 0x1b4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_1b4e6c:
    // 0x1b4e6c: 0x2684a1b0  addiu       $a0, $s4, -0x5E50
    ctx->pc = 0x1b4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943152));
label_1b4e70:
    // 0x1b4e70: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1b4e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1b4e74:
    // 0x1b4e74: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1b4e74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4e78:
    // 0x1b4e78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b4e7c:
    // 0x1b4e7c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b4e80:
    if (ctx->pc == 0x1B4E80u) {
        ctx->pc = 0x1B4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E7Cu;
        // 0x1b4e80: 0x7c4303c0  sq          $v1, 0x3C0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 960), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E84u;
        goto label_1b4e84;
    }
    ctx->pc = 0x1B4E7Cu;
    {
        const bool branch_taken_0x1b4e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E7Cu;
        // 0x1b4e80: 0x7c4303c0  sq          $v1, 0x3C0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 960), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e7c) {
            ctx->pc = 0x1B4EACu;
            goto label_1b4eac;
        }
    }
    ctx->pc = 0x1B4E84u;
label_1b4e84:
    // 0x1b4e84: 0x240403f0  addiu       $a0, $zero, 0x3F0
    ctx->pc = 0x1b4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
label_1b4e88:
    // 0x1b4e88: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1b4e8c:
    // 0x1b4e8c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1b4e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1b4e90:
    // 0x1b4e90: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
label_1b4e94:
    // 0x1b4e94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b4e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b4e98:
    // 0x1b4e98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4e9c:
    // 0x1b4e9c: 0x84620068  lh          $v0, 0x68($v1)
    ctx->pc = 0x1b4e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1b4ea0:
    // 0x1b4ea0: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1b4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1b4ea4:
    // 0x1b4ea4: 0xa0f809  jalr        $a1
label_1b4ea8:
    if (ctx->pc == 0x1B4EA8u) {
        ctx->pc = 0x1B4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EA4u;
        // 0x1b4ea8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4EACu;
        goto label_1b4eac;
    }
    ctx->pc = 0x1B4EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1B4EACu);
        ctx->pc = 0x1B4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EA4u;
        // 0x1b4ea8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4EA4u, 0x1B4EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4EACu;
label_1b4eac:
    // 0x1b4eac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1b4eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b4eb0:
    // 0x1b4eb0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1b4eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b4eb4:
    // 0x1b4eb4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b4eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b4eb8:
    // 0x1b4eb8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b4eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b4ebc:
    // 0x1b4ebc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1b4ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4ec0:
    // 0x1b4ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b4ec4:
    // 0x1b4ec4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1b4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b4ec8:
    // 0x1b4ec8: 0x3e00008  jr          $ra
label_1b4ecc:
    if (ctx->pc == 0x1B4ECCu) {
        ctx->pc = 0x1B4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EC8u;
        // 0x1b4ecc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4ED0u;
        goto label_fallthrough_0x1b4ec8;
    }
    ctx->pc = 0x1B4EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EC8u;
        // 0x1b4ecc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b4ec8:
    ctx->pc = 0x1B4ED0u;
}

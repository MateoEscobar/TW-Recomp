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

// Function: sub_00192C20
// Address: 0x192c20 - 0x192f58
void sub_00192C20_0x192c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192C20_0x192c20");
#endif

    switch (ctx->pc) {
        case 0x192c20u: goto label_192c20;
        case 0x192c24u: goto label_192c24;
        case 0x192c28u: goto label_192c28;
        case 0x192c2cu: goto label_192c2c;
        case 0x192c30u: goto label_192c30;
        case 0x192c34u: goto label_192c34;
        case 0x192c38u: goto label_192c38;
        case 0x192c3cu: goto label_192c3c;
        case 0x192c40u: goto label_192c40;
        case 0x192c44u: goto label_192c44;
        case 0x192c48u: goto label_192c48;
        case 0x192c4cu: goto label_192c4c;
        case 0x192c50u: goto label_192c50;
        case 0x192c54u: goto label_192c54;
        case 0x192c58u: goto label_192c58;
        case 0x192c5cu: goto label_192c5c;
        case 0x192c60u: goto label_192c60;
        case 0x192c64u: goto label_192c64;
        case 0x192c68u: goto label_192c68;
        case 0x192c6cu: goto label_192c6c;
        case 0x192c70u: goto label_192c70;
        case 0x192c74u: goto label_192c74;
        case 0x192c78u: goto label_192c78;
        case 0x192c7cu: goto label_192c7c;
        case 0x192c80u: goto label_192c80;
        case 0x192c84u: goto label_192c84;
        case 0x192c88u: goto label_192c88;
        case 0x192c8cu: goto label_192c8c;
        case 0x192c90u: goto label_192c90;
        case 0x192c94u: goto label_192c94;
        case 0x192c98u: goto label_192c98;
        case 0x192c9cu: goto label_192c9c;
        case 0x192ca0u: goto label_192ca0;
        case 0x192ca4u: goto label_192ca4;
        case 0x192ca8u: goto label_192ca8;
        case 0x192cacu: goto label_192cac;
        case 0x192cb0u: goto label_192cb0;
        case 0x192cb4u: goto label_192cb4;
        case 0x192cb8u: goto label_192cb8;
        case 0x192cbcu: goto label_192cbc;
        case 0x192cc0u: goto label_192cc0;
        case 0x192cc4u: goto label_192cc4;
        case 0x192cc8u: goto label_192cc8;
        case 0x192cccu: goto label_192ccc;
        case 0x192cd0u: goto label_192cd0;
        case 0x192cd4u: goto label_192cd4;
        case 0x192cd8u: goto label_192cd8;
        case 0x192cdcu: goto label_192cdc;
        case 0x192ce0u: goto label_192ce0;
        case 0x192ce4u: goto label_192ce4;
        case 0x192ce8u: goto label_192ce8;
        case 0x192cecu: goto label_192cec;
        case 0x192cf0u: goto label_192cf0;
        case 0x192cf4u: goto label_192cf4;
        case 0x192cf8u: goto label_192cf8;
        case 0x192cfcu: goto label_192cfc;
        case 0x192d00u: goto label_192d00;
        case 0x192d04u: goto label_192d04;
        case 0x192d08u: goto label_192d08;
        case 0x192d0cu: goto label_192d0c;
        case 0x192d10u: goto label_192d10;
        case 0x192d14u: goto label_192d14;
        case 0x192d18u: goto label_192d18;
        case 0x192d1cu: goto label_192d1c;
        case 0x192d20u: goto label_192d20;
        case 0x192d24u: goto label_192d24;
        case 0x192d28u: goto label_192d28;
        case 0x192d2cu: goto label_192d2c;
        case 0x192d30u: goto label_192d30;
        case 0x192d34u: goto label_192d34;
        case 0x192d38u: goto label_192d38;
        case 0x192d3cu: goto label_192d3c;
        case 0x192d40u: goto label_192d40;
        case 0x192d44u: goto label_192d44;
        case 0x192d48u: goto label_192d48;
        case 0x192d4cu: goto label_192d4c;
        case 0x192d50u: goto label_192d50;
        case 0x192d54u: goto label_192d54;
        case 0x192d58u: goto label_192d58;
        case 0x192d5cu: goto label_192d5c;
        case 0x192d60u: goto label_192d60;
        case 0x192d64u: goto label_192d64;
        case 0x192d68u: goto label_192d68;
        case 0x192d6cu: goto label_192d6c;
        case 0x192d70u: goto label_192d70;
        case 0x192d74u: goto label_192d74;
        case 0x192d78u: goto label_192d78;
        case 0x192d7cu: goto label_192d7c;
        case 0x192d80u: goto label_192d80;
        case 0x192d84u: goto label_192d84;
        case 0x192d88u: goto label_192d88;
        case 0x192d8cu: goto label_192d8c;
        case 0x192d90u: goto label_192d90;
        case 0x192d94u: goto label_192d94;
        case 0x192d98u: goto label_192d98;
        case 0x192d9cu: goto label_192d9c;
        case 0x192da0u: goto label_192da0;
        case 0x192da4u: goto label_192da4;
        case 0x192da8u: goto label_192da8;
        case 0x192dacu: goto label_192dac;
        case 0x192db0u: goto label_192db0;
        case 0x192db4u: goto label_192db4;
        case 0x192db8u: goto label_192db8;
        case 0x192dbcu: goto label_192dbc;
        case 0x192dc0u: goto label_192dc0;
        case 0x192dc4u: goto label_192dc4;
        case 0x192dc8u: goto label_192dc8;
        case 0x192dccu: goto label_192dcc;
        case 0x192dd0u: goto label_192dd0;
        case 0x192dd4u: goto label_192dd4;
        case 0x192dd8u: goto label_192dd8;
        case 0x192ddcu: goto label_192ddc;
        case 0x192de0u: goto label_192de0;
        case 0x192de4u: goto label_192de4;
        case 0x192de8u: goto label_192de8;
        case 0x192decu: goto label_192dec;
        case 0x192df0u: goto label_192df0;
        case 0x192df4u: goto label_192df4;
        case 0x192df8u: goto label_192df8;
        case 0x192dfcu: goto label_192dfc;
        case 0x192e00u: goto label_192e00;
        case 0x192e04u: goto label_192e04;
        case 0x192e08u: goto label_192e08;
        case 0x192e0cu: goto label_192e0c;
        case 0x192e10u: goto label_192e10;
        case 0x192e14u: goto label_192e14;
        case 0x192e18u: goto label_192e18;
        case 0x192e1cu: goto label_192e1c;
        case 0x192e20u: goto label_192e20;
        case 0x192e24u: goto label_192e24;
        case 0x192e28u: goto label_192e28;
        case 0x192e2cu: goto label_192e2c;
        case 0x192e30u: goto label_192e30;
        case 0x192e34u: goto label_192e34;
        case 0x192e38u: goto label_192e38;
        case 0x192e3cu: goto label_192e3c;
        case 0x192e40u: goto label_192e40;
        case 0x192e44u: goto label_192e44;
        case 0x192e48u: goto label_192e48;
        case 0x192e4cu: goto label_192e4c;
        case 0x192e50u: goto label_192e50;
        case 0x192e54u: goto label_192e54;
        case 0x192e58u: goto label_192e58;
        case 0x192e5cu: goto label_192e5c;
        case 0x192e60u: goto label_192e60;
        case 0x192e64u: goto label_192e64;
        case 0x192e68u: goto label_192e68;
        case 0x192e6cu: goto label_192e6c;
        case 0x192e70u: goto label_192e70;
        case 0x192e74u: goto label_192e74;
        case 0x192e78u: goto label_192e78;
        case 0x192e7cu: goto label_192e7c;
        case 0x192e80u: goto label_192e80;
        case 0x192e84u: goto label_192e84;
        case 0x192e88u: goto label_192e88;
        case 0x192e8cu: goto label_192e8c;
        case 0x192e90u: goto label_192e90;
        case 0x192e94u: goto label_192e94;
        case 0x192e98u: goto label_192e98;
        case 0x192e9cu: goto label_192e9c;
        case 0x192ea0u: goto label_192ea0;
        case 0x192ea4u: goto label_192ea4;
        case 0x192ea8u: goto label_192ea8;
        case 0x192eacu: goto label_192eac;
        case 0x192eb0u: goto label_192eb0;
        case 0x192eb4u: goto label_192eb4;
        case 0x192eb8u: goto label_192eb8;
        case 0x192ebcu: goto label_192ebc;
        case 0x192ec0u: goto label_192ec0;
        case 0x192ec4u: goto label_192ec4;
        case 0x192ec8u: goto label_192ec8;
        case 0x192eccu: goto label_192ecc;
        case 0x192ed0u: goto label_192ed0;
        case 0x192ed4u: goto label_192ed4;
        case 0x192ed8u: goto label_192ed8;
        case 0x192edcu: goto label_192edc;
        case 0x192ee0u: goto label_192ee0;
        case 0x192ee4u: goto label_192ee4;
        case 0x192ee8u: goto label_192ee8;
        case 0x192eecu: goto label_192eec;
        case 0x192ef0u: goto label_192ef0;
        case 0x192ef4u: goto label_192ef4;
        case 0x192ef8u: goto label_192ef8;
        case 0x192efcu: goto label_192efc;
        case 0x192f00u: goto label_192f00;
        case 0x192f04u: goto label_192f04;
        case 0x192f08u: goto label_192f08;
        case 0x192f0cu: goto label_192f0c;
        case 0x192f10u: goto label_192f10;
        case 0x192f14u: goto label_192f14;
        case 0x192f18u: goto label_192f18;
        case 0x192f1cu: goto label_192f1c;
        case 0x192f20u: goto label_192f20;
        case 0x192f24u: goto label_192f24;
        case 0x192f28u: goto label_192f28;
        case 0x192f2cu: goto label_192f2c;
        case 0x192f30u: goto label_192f30;
        case 0x192f34u: goto label_192f34;
        case 0x192f38u: goto label_192f38;
        case 0x192f3cu: goto label_192f3c;
        case 0x192f40u: goto label_192f40;
        case 0x192f44u: goto label_192f44;
        case 0x192f48u: goto label_192f48;
        case 0x192f4cu: goto label_192f4c;
        case 0x192f50u: goto label_192f50;
        case 0x192f54u: goto label_192f54;
        default: break;
    }

    ctx->pc = 0x192c20u;

label_192c20:
    // 0x192c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_192c24:
    // 0x192c24: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x192c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_192c28:
    // 0x192c28: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x192c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_192c2c:
    // 0x192c2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x192c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_192c30:
    // 0x192c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_192c34:
    // 0x192c34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x192c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_192c38:
    // 0x192c38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x192c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_192c3c:
    // 0x192c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192c40:
    // 0x192c40: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x192c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_192c44:
    // 0x192c44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192c48:
    // 0x192c48: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x192c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_192c4c:
    // 0x192c4c: 0xc504000c  lwc1        $f4, 0xC($t0)
    ctx->pc = 0x192c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_192c50:
    // 0x192c50: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x192c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_192c54:
    // 0x192c54: 0x8ce90010  lw          $t1, 0x10($a3)
    ctx->pc = 0x192c54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_192c58:
    // 0x192c58: 0xc5050004  lwc1        $f5, 0x4($t0)
    ctx->pc = 0x192c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_192c5c:
    // 0x192c5c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x192c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_192c60:
    // 0x192c60: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x192c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_192c64:
    // 0x192c64: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_192c68:
    if (ctx->pc == 0x192C68u) {
        ctx->pc = 0x192C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C64u;
        // 0x192c68: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x192C6Cu;
        goto label_192c6c;
    }
    ctx->pc = 0x192C64u;
    {
        const bool branch_taken_0x192c64 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x192C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C64u;
        // 0x192c68: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c64) {
            ctx->pc = 0x192C80u;
            goto label_192c80;
        }
    }
    ctx->pc = 0x192C6Cu;
label_192c6c:
    // 0x192c6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x192c6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192c70:
    // 0x192c70: 0x0  nop
    ctx->pc = 0x192c70u;
    // NOP
label_192c74:
    // 0x192c74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192c78:
    // 0x192c78: 0x10000008  b           . + 4 + (0x8 << 2)
label_192c7c:
    if (ctx->pc == 0x192C7Cu) {
        ctx->pc = 0x192C80u;
        goto label_192c80;
    }
    ctx->pc = 0x192C78u;
    {
        const bool branch_taken_0x192c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192c78) {
            ctx->pc = 0x192C9Cu;
            goto label_192c9c;
        }
    }
    ctx->pc = 0x192C80u;
label_192c80:
    // 0x192c80: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x192c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_192c84:
    // 0x192c84: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x192c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_192c88:
    // 0x192c88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_192c8c:
    // 0x192c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192c90:
    // 0x192c90: 0x0  nop
    ctx->pc = 0x192c90u;
    // NOP
label_192c94:
    // 0x192c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192c98:
    // 0x192c98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x192c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_192c9c:
    // 0x192c9c: 0x0  nop
    ctx->pc = 0x192c9cu;
    // NOP
label_192ca0:
    // 0x192ca0: 0x0  nop
    ctx->pc = 0x192ca0u;
    // NOP
label_192ca4:
    // 0x192ca4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x192ca4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_192ca8:
    // 0x192ca8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x192ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_192cac:
    // 0x192cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192cb0:
    // 0x192cb0: 0x46042800  add.s       $f0, $f5, $f4
    ctx->pc = 0x192cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_192cb4:
    // 0x192cb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x192cb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_192cb8:
    // 0x192cb8: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
label_192cbc:
    if (ctx->pc == 0x192CBCu) {
        ctx->pc = 0x192CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CB8u;
        // 0x192cbc: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192CC0u;
        goto label_192cc0;
    }
    ctx->pc = 0x192CB8u;
    {
        const bool branch_taken_0x192cb8 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x192CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CB8u;
        // 0x192cbc: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192cb8) {
            ctx->pc = 0x192CD4u;
            goto label_192cd4;
        }
    }
    ctx->pc = 0x192CC0u;
label_192cc0:
    // 0x192cc0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x192cc0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192cc4:
    // 0x192cc4: 0x0  nop
    ctx->pc = 0x192cc4u;
    // NOP
label_192cc8:
    // 0x192cc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192ccc:
    // 0x192ccc: 0x10000008  b           . + 4 + (0x8 << 2)
label_192cd0:
    if (ctx->pc == 0x192CD0u) {
        ctx->pc = 0x192CD4u;
        goto label_192cd4;
    }
    ctx->pc = 0x192CCCu;
    {
        const bool branch_taken_0x192ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ccc) {
            ctx->pc = 0x192CF0u;
            goto label_192cf0;
        }
    }
    ctx->pc = 0x192CD4u;
label_192cd4:
    // 0x192cd4: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x192cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_192cd8:
    // 0x192cd8: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x192cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_192cdc:
    // 0x192cdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_192ce0:
    // 0x192ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192ce4:
    // 0x192ce4: 0x0  nop
    ctx->pc = 0x192ce4u;
    // NOP
label_192ce8:
    // 0x192ce8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192cec:
    // 0x192cec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x192cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_192cf0:
    // 0x192cf0: 0x0  nop
    ctx->pc = 0x192cf0u;
    // NOP
label_192cf4:
    // 0x192cf4: 0x0  nop
    ctx->pc = 0x192cf4u;
    // NOP
label_192cf8:
    // 0x192cf8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x192cf8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_192cfc:
    // 0x192cfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x192cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_192d00:
    // 0x192d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192d04:
    // 0x192d04: 0x0  nop
    ctx->pc = 0x192d04u;
    // NOP
label_192d08:
    // 0x192d08: 0x46001880  add.s       $f2, $f3, $f0
    ctx->pc = 0x192d08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_192d0c:
    // 0x192d0c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_192d10:
    if (ctx->pc == 0x192D10u) {
        ctx->pc = 0x192D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D0Cu;
        // 0x192d10: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192D14u;
        goto label_192d14;
    }
    ctx->pc = 0x192D0Cu;
    {
        const bool branch_taken_0x192d0c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x192D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D0Cu;
        // 0x192d10: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d0c) {
            ctx->pc = 0x192D28u;
            goto label_192d28;
        }
    }
    ctx->pc = 0x192D14u;
label_192d14:
    // 0x192d14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x192d14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192d18:
    // 0x192d18: 0x0  nop
    ctx->pc = 0x192d18u;
    // NOP
label_192d1c:
    // 0x192d1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192d20:
    // 0x192d20: 0x10000008  b           . + 4 + (0x8 << 2)
label_192d24:
    if (ctx->pc == 0x192D24u) {
        ctx->pc = 0x192D28u;
        goto label_192d28;
    }
    ctx->pc = 0x192D20u;
    {
        const bool branch_taken_0x192d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d20) {
            ctx->pc = 0x192D44u;
            goto label_192d44;
        }
    }
    ctx->pc = 0x192D28u;
label_192d28:
    // 0x192d28: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x192d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_192d2c:
    // 0x192d2c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x192d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_192d30:
    // 0x192d30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_192d34:
    // 0x192d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192d38:
    // 0x192d38: 0x0  nop
    ctx->pc = 0x192d38u;
    // NOP
label_192d3c:
    // 0x192d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192d40:
    // 0x192d40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x192d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_192d44:
    // 0x192d44: 0x0  nop
    ctx->pc = 0x192d44u;
    // NOP
label_192d48:
    // 0x192d48: 0x0  nop
    ctx->pc = 0x192d48u;
    // NOP
label_192d4c:
    // 0x192d4c: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x192d4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_192d50:
    // 0x192d50: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x192d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_192d54:
    // 0x192d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192d58:
    // 0x192d58: 0x0  nop
    ctx->pc = 0x192d58u;
    // NOP
label_192d5c:
    // 0x192d5c: 0x46002880  add.s       $f2, $f5, $f0
    ctx->pc = 0x192d5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_192d60:
    // 0x192d60: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
label_192d64:
    if (ctx->pc == 0x192D64u) {
        ctx->pc = 0x192D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D60u;
        // 0x192d64: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192D68u;
        goto label_192d68;
    }
    ctx->pc = 0x192D60u;
    {
        const bool branch_taken_0x192d60 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x192D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D60u;
        // 0x192d64: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d60) {
            ctx->pc = 0x192D7Cu;
            goto label_192d7c;
        }
    }
    ctx->pc = 0x192D68u;
label_192d68:
    // 0x192d68: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x192d68u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192d6c:
    // 0x192d6c: 0x0  nop
    ctx->pc = 0x192d6cu;
    // NOP
label_192d70:
    // 0x192d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192d74:
    // 0x192d74: 0x10000008  b           . + 4 + (0x8 << 2)
label_192d78:
    if (ctx->pc == 0x192D78u) {
        ctx->pc = 0x192D7Cu;
        goto label_192d7c;
    }
    ctx->pc = 0x192D74u;
    {
        const bool branch_taken_0x192d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d74) {
            ctx->pc = 0x192D98u;
            goto label_192d98;
        }
    }
    ctx->pc = 0x192D7Cu;
label_192d7c:
    // 0x192d7c: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x192d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_192d80:
    // 0x192d80: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x192d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_192d84:
    // 0x192d84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_192d88:
    // 0x192d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192d8c:
    // 0x192d8c: 0x0  nop
    ctx->pc = 0x192d8cu;
    // NOP
label_192d90:
    // 0x192d90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x192d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_192d94:
    // 0x192d94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x192d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_192d98:
    // 0x192d98: 0x0  nop
    ctx->pc = 0x192d98u;
    // NOP
label_192d9c:
    // 0x192d9c: 0x0  nop
    ctx->pc = 0x192d9cu;
    // NOP
label_192da0:
    // 0x192da0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x192da0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_192da4:
    // 0x192da4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x192da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_192da8:
    // 0x192da8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x192da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_192dac:
    // 0x192dac: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x192dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_192db0:
    // 0x192db0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x192db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_192db4:
    // 0x192db4: 0x60f809  jalr        $v1
label_192db8:
    if (ctx->pc == 0x192DB8u) {
        ctx->pc = 0x192DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DB4u;
        // 0x192db8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192DBCu;
        goto label_192dbc;
    }
    ctx->pc = 0x192DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x192DBCu);
        ctx->pc = 0x192DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DB4u;
        // 0x192db8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192DB4u, 0x192DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192DBCu;
label_192dbc:
    // 0x192dbc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x192dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_192dc0:
    // 0x192dc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_192dc4:
    // 0x192dc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x192dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_192dc8:
    // 0x192dc8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x192dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_192dcc:
    // 0x192dcc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x192dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_192dd0:
    // 0x192dd0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x192dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_192dd4:
    // 0x192dd4: 0x0  nop
    ctx->pc = 0x192dd4u;
    // NOP
label_192dd8:
    // 0x192dd8: 0x0  nop
    ctx->pc = 0x192dd8u;
    // NOP
label_192ddc:
    // 0x192ddc: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x192ddcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_192de0:
    // 0x192de0: 0xc445ad30  lwc1        $f5, -0x52D0($v0)
    ctx->pc = 0x192de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_192de4:
    // 0x192de4: 0xe461df30  swc1        $f1, -0x20D0($v1)
    ctx->pc = 0x192de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294958896), bits); }
label_192de8:
    // 0x192de8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x192de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_192dec:
    // 0x192dec: 0x2463df30  addiu       $v1, $v1, -0x20D0
    ctx->pc = 0x192decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958896));
label_192df0:
    // 0x192df0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x192df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_192df4:
    // 0x192df4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x192df4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_192df8:
    // 0x192df8: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x192df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_192dfc:
    // 0x192dfc: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x192dfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_192e00:
    // 0x192e00: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x192e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_192e04:
    // 0x192e04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x192e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_192e08:
    // 0x192e08: 0xe4640018  swc1        $f4, 0x18($v1)
    ctx->pc = 0x192e08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_192e0c:
    // 0x192e0c: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x192e0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_192e10:
    // 0x192e10: 0xe4680014  swc1        $f8, 0x14($v1)
    ctx->pc = 0x192e10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_192e14:
    // 0x192e14: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x192e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_192e18:
    // 0x192e18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_192e1c:
    // 0x192e1c: 0x0  nop
    ctx->pc = 0x192e1cu;
    // NOP
label_192e20:
    // 0x192e20: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x192e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_192e24:
    // 0x192e24: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x192e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_192e28:
    // 0x192e28: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x192e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_192e2c:
    // 0x192e2c: 0xe461002c  swc1        $f1, 0x2C($v1)
    ctx->pc = 0x192e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_192e30:
    // 0x192e30: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x192e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_192e34:
    // 0x192e34: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x192e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_192e38:
    // 0x192e38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x192e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_192e3c:
    // 0x192e3c: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x192e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_192e40:
    // 0x192e40: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_192e44:
    // 0x192e44: 0xe4a2df70  swc1        $f2, -0x2090($a1)
    ctx->pc = 0x192e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294958960), bits); }
label_192e48:
    // 0x192e48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x192e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_192e4c:
    // 0x192e4c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x192e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_192e50:
    // 0x192e50: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x192e50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_192e54:
    // 0x192e54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x192e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_192e58:
    // 0x192e58: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x192e58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_192e5c:
    // 0x192e5c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x192e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_192e60:
    // 0x192e60: 0x0  nop
    ctx->pc = 0x192e60u;
    // NOP
label_192e64:
    // 0x192e64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x192e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_192e68:
    // 0x192e68: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x192e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_192e6c:
    // 0x192e6c: 0xe4440018  swc1        $f4, 0x18($v0)
    ctx->pc = 0x192e6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_192e70:
    // 0x192e70: 0xe4460014  swc1        $f6, 0x14($v0)
    ctx->pc = 0x192e70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_192e74:
    // 0x192e74: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x192e74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_192e78:
    // 0x192e78: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x192e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_192e7c:
    // 0x192e7c: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x192e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_192e80:
    // 0x192e80: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x192e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_192e84:
    // 0x192e84: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x192e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_192e88:
    // 0x192e88: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x192e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_192e8c:
    // 0x192e8c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x192e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_192e90:
    // 0x192e90: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x192e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_192e94:
    // 0x192e94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x192e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_192e98:
    // 0x192e98: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x192e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_192e9c:
    // 0x192e9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x192e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_192ea0:
    // 0x192ea0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x192ea0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_192ea4:
    // 0x192ea4: 0x0  nop
    ctx->pc = 0x192ea4u;
    // NOP
label_192ea8:
    // 0x192ea8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x192ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_192eac:
    // 0x192eac: 0xe4c2dfb0  swc1        $f2, -0x2050($a2)
    ctx->pc = 0x192eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294959024), bits); }
label_192eb0:
    // 0x192eb0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x192eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_192eb4:
    // 0x192eb4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x192eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_192eb8:
    // 0x192eb8: 0xe4460014  swc1        $f6, 0x14($v0)
    ctx->pc = 0x192eb8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_192ebc:
    // 0x192ebc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x192ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_192ec0:
    // 0x192ec0: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x192ec0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_192ec4:
    // 0x192ec4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x192ec4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_192ec8:
    // 0x192ec8: 0x0  nop
    ctx->pc = 0x192ec8u;
    // NOP
label_192ecc:
    // 0x192ecc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x192eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_192ed0:
    // 0x192ed0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x192ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_192ed4:
    // 0x192ed4: 0xe4440018  swc1        $f4, 0x18($v0)
    ctx->pc = 0x192ed4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_192ed8:
    // 0x192ed8: 0xe4470010  swc1        $f7, 0x10($v0)
    ctx->pc = 0x192ed8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_192edc:
    // 0x192edc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x192edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_192ee0:
    // 0x192ee0: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x192ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_192ee4:
    // 0x192ee4: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x192ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_192ee8:
    // 0x192ee8: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x192ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_192eec:
    // 0x192eec: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x192eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_192ef0:
    // 0x192ef0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x192ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_192ef4:
    // 0x192ef4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x192ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_192ef8:
    // 0x192ef8: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x192ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_192efc:
    // 0x192efc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x192efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_192f00:
    // 0x192f00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x192f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_192f04:
    // 0x192f04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x192f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_192f08:
    // 0x192f08: 0x0  nop
    ctx->pc = 0x192f08u;
    // NOP
label_192f0c:
    // 0x192f0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x192f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_192f10:
    // 0x192f10: 0xe4a2dff0  swc1        $f2, -0x2010($a1)
    ctx->pc = 0x192f10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294959088), bits); }
label_192f14:
    // 0x192f14: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x192f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_192f18:
    // 0x192f18: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x192f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_192f1c:
    // 0x192f1c: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x192f1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_192f20:
    // 0x192f20: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x192f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_192f24:
    // 0x192f24: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x192f24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_192f28:
    // 0x192f28: 0xe4640018  swc1        $f4, 0x18($v1)
    ctx->pc = 0x192f28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_192f2c:
    // 0x192f2c: 0xe4670010  swc1        $f7, 0x10($v1)
    ctx->pc = 0x192f2cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_192f30:
    // 0x192f30: 0xe4680014  swc1        $f8, 0x14($v1)
    ctx->pc = 0x192f30u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_192f34:
    // 0x192f34: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x192f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_192f38:
    // 0x192f38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x192f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_192f3c:
    // 0x192f3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_192f40:
    // 0x192f40: 0xe461002c  swc1        $f1, 0x2C($v1)
    ctx->pc = 0x192f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_192f44:
    // 0x192f44: 0xe4610024  swc1        $f1, 0x24($v1)
    ctx->pc = 0x192f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_192f48:
    // 0x192f48: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x192f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_192f4c:
    // 0x192f4c: 0x3e00008  jr          $ra
label_192f50:
    if (ctx->pc == 0x192F50u) {
        ctx->pc = 0x192F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F4Cu;
        // 0x192f50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192F54u;
        goto label_192f54;
    }
    ctx->pc = 0x192F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F4Cu;
        // 0x192f50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192F54u;
label_192f54:
    // 0x192f54: 0x0  nop
    ctx->pc = 0x192f54u;
    // NOP
    ctx->pc = 0x192f58u;
}

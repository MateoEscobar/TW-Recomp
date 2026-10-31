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

// Function: sub_00129C78
// Address: 0x129c78 - 0x129f88
void sub_00129C78_0x129c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129C78_0x129c78");
#endif

    switch (ctx->pc) {
        case 0x129c78u: goto label_129c78;
        case 0x129c7cu: goto label_129c7c;
        case 0x129c80u: goto label_129c80;
        case 0x129c84u: goto label_129c84;
        case 0x129c88u: goto label_129c88;
        case 0x129c8cu: goto label_129c8c;
        case 0x129c90u: goto label_129c90;
        case 0x129c94u: goto label_129c94;
        case 0x129c98u: goto label_129c98;
        case 0x129c9cu: goto label_129c9c;
        case 0x129ca0u: goto label_129ca0;
        case 0x129ca4u: goto label_129ca4;
        case 0x129ca8u: goto label_129ca8;
        case 0x129cacu: goto label_129cac;
        case 0x129cb0u: goto label_129cb0;
        case 0x129cb4u: goto label_129cb4;
        case 0x129cb8u: goto label_129cb8;
        case 0x129cbcu: goto label_129cbc;
        case 0x129cc0u: goto label_129cc0;
        case 0x129cc4u: goto label_129cc4;
        case 0x129cc8u: goto label_129cc8;
        case 0x129cccu: goto label_129ccc;
        case 0x129cd0u: goto label_129cd0;
        case 0x129cd4u: goto label_129cd4;
        case 0x129cd8u: goto label_129cd8;
        case 0x129cdcu: goto label_129cdc;
        case 0x129ce0u: goto label_129ce0;
        case 0x129ce4u: goto label_129ce4;
        case 0x129ce8u: goto label_129ce8;
        case 0x129cecu: goto label_129cec;
        case 0x129cf0u: goto label_129cf0;
        case 0x129cf4u: goto label_129cf4;
        case 0x129cf8u: goto label_129cf8;
        case 0x129cfcu: goto label_129cfc;
        case 0x129d00u: goto label_129d00;
        case 0x129d04u: goto label_129d04;
        case 0x129d08u: goto label_129d08;
        case 0x129d0cu: goto label_129d0c;
        case 0x129d10u: goto label_129d10;
        case 0x129d14u: goto label_129d14;
        case 0x129d18u: goto label_129d18;
        case 0x129d1cu: goto label_129d1c;
        case 0x129d20u: goto label_129d20;
        case 0x129d24u: goto label_129d24;
        case 0x129d28u: goto label_129d28;
        case 0x129d2cu: goto label_129d2c;
        case 0x129d30u: goto label_129d30;
        case 0x129d34u: goto label_129d34;
        case 0x129d38u: goto label_129d38;
        case 0x129d3cu: goto label_129d3c;
        case 0x129d40u: goto label_129d40;
        case 0x129d44u: goto label_129d44;
        case 0x129d48u: goto label_129d48;
        case 0x129d4cu: goto label_129d4c;
        case 0x129d50u: goto label_129d50;
        case 0x129d54u: goto label_129d54;
        case 0x129d58u: goto label_129d58;
        case 0x129d5cu: goto label_129d5c;
        case 0x129d60u: goto label_129d60;
        case 0x129d64u: goto label_129d64;
        case 0x129d68u: goto label_129d68;
        case 0x129d6cu: goto label_129d6c;
        case 0x129d70u: goto label_129d70;
        case 0x129d74u: goto label_129d74;
        case 0x129d78u: goto label_129d78;
        case 0x129d7cu: goto label_129d7c;
        case 0x129d80u: goto label_129d80;
        case 0x129d84u: goto label_129d84;
        case 0x129d88u: goto label_129d88;
        case 0x129d8cu: goto label_129d8c;
        case 0x129d90u: goto label_129d90;
        case 0x129d94u: goto label_129d94;
        case 0x129d98u: goto label_129d98;
        case 0x129d9cu: goto label_129d9c;
        case 0x129da0u: goto label_129da0;
        case 0x129da4u: goto label_129da4;
        case 0x129da8u: goto label_129da8;
        case 0x129dacu: goto label_129dac;
        case 0x129db0u: goto label_129db0;
        case 0x129db4u: goto label_129db4;
        case 0x129db8u: goto label_129db8;
        case 0x129dbcu: goto label_129dbc;
        case 0x129dc0u: goto label_129dc0;
        case 0x129dc4u: goto label_129dc4;
        case 0x129dc8u: goto label_129dc8;
        case 0x129dccu: goto label_129dcc;
        case 0x129dd0u: goto label_129dd0;
        case 0x129dd4u: goto label_129dd4;
        case 0x129dd8u: goto label_129dd8;
        case 0x129ddcu: goto label_129ddc;
        case 0x129de0u: goto label_129de0;
        case 0x129de4u: goto label_129de4;
        case 0x129de8u: goto label_129de8;
        case 0x129decu: goto label_129dec;
        case 0x129df0u: goto label_129df0;
        case 0x129df4u: goto label_129df4;
        case 0x129df8u: goto label_129df8;
        case 0x129dfcu: goto label_129dfc;
        case 0x129e00u: goto label_129e00;
        case 0x129e04u: goto label_129e04;
        case 0x129e08u: goto label_129e08;
        case 0x129e0cu: goto label_129e0c;
        case 0x129e10u: goto label_129e10;
        case 0x129e14u: goto label_129e14;
        case 0x129e18u: goto label_129e18;
        case 0x129e1cu: goto label_129e1c;
        case 0x129e20u: goto label_129e20;
        case 0x129e24u: goto label_129e24;
        case 0x129e28u: goto label_129e28;
        case 0x129e2cu: goto label_129e2c;
        case 0x129e30u: goto label_129e30;
        case 0x129e34u: goto label_129e34;
        case 0x129e38u: goto label_129e38;
        case 0x129e3cu: goto label_129e3c;
        case 0x129e40u: goto label_129e40;
        case 0x129e44u: goto label_129e44;
        case 0x129e48u: goto label_129e48;
        case 0x129e4cu: goto label_129e4c;
        case 0x129e50u: goto label_129e50;
        case 0x129e54u: goto label_129e54;
        case 0x129e58u: goto label_129e58;
        case 0x129e5cu: goto label_129e5c;
        case 0x129e60u: goto label_129e60;
        case 0x129e64u: goto label_129e64;
        case 0x129e68u: goto label_129e68;
        case 0x129e6cu: goto label_129e6c;
        case 0x129e70u: goto label_129e70;
        case 0x129e74u: goto label_129e74;
        case 0x129e78u: goto label_129e78;
        case 0x129e7cu: goto label_129e7c;
        case 0x129e80u: goto label_129e80;
        case 0x129e84u: goto label_129e84;
        case 0x129e88u: goto label_129e88;
        case 0x129e8cu: goto label_129e8c;
        case 0x129e90u: goto label_129e90;
        case 0x129e94u: goto label_129e94;
        case 0x129e98u: goto label_129e98;
        case 0x129e9cu: goto label_129e9c;
        case 0x129ea0u: goto label_129ea0;
        case 0x129ea4u: goto label_129ea4;
        case 0x129ea8u: goto label_129ea8;
        case 0x129eacu: goto label_129eac;
        case 0x129eb0u: goto label_129eb0;
        case 0x129eb4u: goto label_129eb4;
        case 0x129eb8u: goto label_129eb8;
        case 0x129ebcu: goto label_129ebc;
        case 0x129ec0u: goto label_129ec0;
        case 0x129ec4u: goto label_129ec4;
        case 0x129ec8u: goto label_129ec8;
        case 0x129eccu: goto label_129ecc;
        case 0x129ed0u: goto label_129ed0;
        case 0x129ed4u: goto label_129ed4;
        case 0x129ed8u: goto label_129ed8;
        case 0x129edcu: goto label_129edc;
        case 0x129ee0u: goto label_129ee0;
        case 0x129ee4u: goto label_129ee4;
        case 0x129ee8u: goto label_129ee8;
        case 0x129eecu: goto label_129eec;
        case 0x129ef0u: goto label_129ef0;
        case 0x129ef4u: goto label_129ef4;
        case 0x129ef8u: goto label_129ef8;
        case 0x129efcu: goto label_129efc;
        case 0x129f00u: goto label_129f00;
        case 0x129f04u: goto label_129f04;
        case 0x129f08u: goto label_129f08;
        case 0x129f0cu: goto label_129f0c;
        case 0x129f10u: goto label_129f10;
        case 0x129f14u: goto label_129f14;
        case 0x129f18u: goto label_129f18;
        case 0x129f1cu: goto label_129f1c;
        case 0x129f20u: goto label_129f20;
        case 0x129f24u: goto label_129f24;
        case 0x129f28u: goto label_129f28;
        case 0x129f2cu: goto label_129f2c;
        case 0x129f30u: goto label_129f30;
        case 0x129f34u: goto label_129f34;
        case 0x129f38u: goto label_129f38;
        case 0x129f3cu: goto label_129f3c;
        case 0x129f40u: goto label_129f40;
        case 0x129f44u: goto label_129f44;
        case 0x129f48u: goto label_129f48;
        case 0x129f4cu: goto label_129f4c;
        case 0x129f50u: goto label_129f50;
        case 0x129f54u: goto label_129f54;
        case 0x129f58u: goto label_129f58;
        case 0x129f5cu: goto label_129f5c;
        case 0x129f60u: goto label_129f60;
        case 0x129f64u: goto label_129f64;
        case 0x129f68u: goto label_129f68;
        case 0x129f6cu: goto label_129f6c;
        case 0x129f70u: goto label_129f70;
        case 0x129f74u: goto label_129f74;
        case 0x129f78u: goto label_129f78;
        case 0x129f7cu: goto label_129f7c;
        case 0x129f80u: goto label_129f80;
        case 0x129f84u: goto label_129f84;
        default: break;
    }

    ctx->pc = 0x129c78u;

label_129c78:
    // 0x129c78: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x129c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_129c7c:
    // 0x129c7c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x129c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_129c80:
    // 0x129c80: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x129c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_129c84:
    // 0x129c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x129c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_129c88:
    // 0x129c88: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x129c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_129c8c:
    // 0x129c8c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x129c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_129c90:
    // 0x129c90: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x129c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_129c94:
    // 0x129c94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x129c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_129c98:
    // 0x129c98: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x129c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_129c9c:
    // 0x129c9c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x129c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_129ca0:
    // 0x129ca0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x129ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_129ca4:
    // 0x129ca4: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x129ca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_129ca8:
    // 0x129ca8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x129ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_129cac:
    // 0x129cac: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x129cacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_129cb0:
    // 0x129cb0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x129cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_129cb4:
    // 0x129cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x129cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_129cb8:
    // 0x129cb8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x129cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_129cbc:
    // 0x129cbc: 0x92220474  lbu         $v0, 0x474($s1)
    ctx->pc = 0x129cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1140)));
label_129cc0:
    // 0x129cc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_129cc4:
    if (ctx->pc == 0x129CC4u) {
        ctx->pc = 0x129CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CC0u;
        // 0x129cc4: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CC8u;
        goto label_129cc8;
    }
    ctx->pc = 0x129CC0u;
    {
        const bool branch_taken_0x129cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CC0u;
        // 0x129cc4: 0x120b82d  daddu       $s7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cc0) {
            ctx->pc = 0x129CE0u;
            goto label_129ce0;
        }
    }
    ctx->pc = 0x129CC8u;
label_129cc8:
    // 0x129cc8: 0xc088e88  jal         func_223A20
label_129ccc:
    if (ctx->pc == 0x129CCCu) {
        ctx->pc = 0x129CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CC8u;
        // 0x129ccc: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CD0u;
        goto label_129cd0;
    }
    ctx->pc = 0x129CC8u;
    SET_GPR_U32(ctx, 31, 0x129CD0u);
    ctx->pc = 0x129CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129CC8u;
    // 0x129ccc: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x129CC8u, 0x129CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CD0u;
label_129cd0:
    // 0x129cd0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_129cd4:
    if (ctx->pc == 0x129CD4u) {
        ctx->pc = 0x129CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CD0u;
        // 0x129cd4: 0x92230474  lbu         $v1, 0x474($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CD8u;
        goto label_129cd8;
    }
    ctx->pc = 0x129CD0u;
    {
        const bool branch_taken_0x129cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129cd0) {
            ctx->pc = 0x129CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129CD0u;
            // 0x129cd4: 0x92230474  lbu         $v1, 0x474($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129CE4u;
            goto label_129ce4;
        }
    }
    ctx->pc = 0x129CD8u;
label_129cd8:
    // 0x129cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129cdc:
    // 0x129cdc: 0xa2220474  sb          $v0, 0x474($s1)
    ctx->pc = 0x129cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1140), (uint8_t)GPR_U32(ctx, 2));
label_129ce0:
    // 0x129ce0: 0x92230474  lbu         $v1, 0x474($s1)
    ctx->pc = 0x129ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1140)));
label_129ce4:
    // 0x129ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129ce8:
    // 0x129ce8: 0x5462003e  bnel        $v1, $v0, . + 4 + (0x3E << 2)
label_129cec:
    if (ctx->pc == 0x129CECu) {
        ctx->pc = 0x129CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CE8u;
        // 0x129cec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CF0u;
        goto label_129cf0;
    }
    ctx->pc = 0x129CE8u;
    {
        const bool branch_taken_0x129ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x129ce8) {
            ctx->pc = 0x129CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129CE8u;
            // 0x129cec: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129DE4u;
            goto label_129de4;
        }
    }
    ctx->pc = 0x129CF0u;
label_129cf0:
    // 0x129cf0: 0xc0874fa  jal         func_21D3E8
label_129cf4:
    if (ctx->pc == 0x129CF4u) {
        ctx->pc = 0x129CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CF0u;
        // 0x129cf4: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129CF8u;
        goto label_129cf8;
    }
    ctx->pc = 0x129CF0u;
    SET_GPR_U32(ctx, 31, 0x129CF8u);
    ctx->pc = 0x129CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129CF0u;
    // 0x129cf4: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x129CF0u, 0x129CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CF8u;
label_129cf8:
    // 0x129cf8: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x129cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_129cfc:
    // 0x129cfc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x129cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_129d00:
    // 0x129d00: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x129d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_129d04:
    // 0x129d04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x129d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129d08:
    // 0x129d08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x129d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_129d0c:
    // 0x129d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_129d10:
    // 0x129d10: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x129d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129d14:
    // 0x129d14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129d18:
    // 0x129d18: 0x0  nop
    ctx->pc = 0x129d18u;
    // NOP
label_129d1c:
    // 0x129d1c: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
label_129d20:
    if (ctx->pc == 0x129D20u) {
        ctx->pc = 0x129D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D1Cu;
        // 0x129d20: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D24u;
        goto label_129d24;
    }
    ctx->pc = 0x129D1Cu;
    {
        const bool branch_taken_0x129d1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129d1c) {
            ctx->pc = 0x129D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129D1Cu;
            // 0x129d20: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129DE4u;
            goto label_129de4;
        }
    }
    ctx->pc = 0x129D24u;
label_129d24:
    // 0x129d24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_129d28:
    // 0x129d28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x129d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_129d2c:
    // 0x129d2c: 0xc0874fa  jal         func_21D3E8
label_129d30:
    if (ctx->pc == 0x129D30u) {
        ctx->pc = 0x129D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D2Cu;
        // 0x129d30: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D34u;
        goto label_129d34;
    }
    ctx->pc = 0x129D2Cu;
    SET_GPR_U32(ctx, 31, 0x129D34u);
    ctx->pc = 0x129D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D2Cu;
    // 0x129d30: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x129D2Cu, 0x129D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D34u;
label_129d34:
    // 0x129d34: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x129d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_129d38:
    // 0x129d38: 0xc0874fa  jal         func_21D3E8
label_129d3c:
    if (ctx->pc == 0x129D3Cu) {
        ctx->pc = 0x129D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D38u;
        // 0x129d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D40u;
        goto label_129d40;
    }
    ctx->pc = 0x129D38u;
    SET_GPR_U32(ctx, 31, 0x129D40u);
    ctx->pc = 0x129D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D38u;
    // 0x129d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x129D38u, 0x129D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D40u;
label_129d40:
    // 0x129d40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x129d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129d44:
    // 0x129d44: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x129d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_129d48:
    // 0x129d48: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x129d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_129d4c:
    // 0x129d4c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x129d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_129d50:
    // 0x129d50: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x129d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_129d54:
    // 0x129d54: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x129d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_129d58:
    // 0x129d58: 0xc0874fa  jal         func_21D3E8
label_129d5c:
    if (ctx->pc == 0x129D5Cu) {
        ctx->pc = 0x129D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D58u;
        // 0x129d5c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D60u;
        goto label_129d60;
    }
    ctx->pc = 0x129D58u;
    SET_GPR_U32(ctx, 31, 0x129D60u);
    ctx->pc = 0x129D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D58u;
    // 0x129d5c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x129D58u, 0x129D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D60u;
label_129d60:
    // 0x129d60: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x129d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_129d64:
    // 0x129d64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x129d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_129d68:
    // 0x129d68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x129d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_129d6c:
    // 0x129d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_129d70:
    // 0x129d70: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x129d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_129d74:
    // 0x129d74: 0x0  nop
    ctx->pc = 0x129d74u;
    // NOP
label_129d78:
    // 0x129d78: 0x0  nop
    ctx->pc = 0x129d78u;
    // NOP
label_129d7c:
    // 0x129d7c: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x129d7cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
label_129d80:
    // 0x129d80: 0xc136b24  jal         func_4DAC90
label_129d84:
    if (ctx->pc == 0x129D84u) {
        ctx->pc = 0x129D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D80u;
        // 0x129d84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129D88u;
        goto label_129d88;
    }
    ctx->pc = 0x129D80u;
    SET_GPR_U32(ctx, 31, 0x129D88u);
    ctx->pc = 0x129D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D80u;
    // 0x129d84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x129D80u, 0x129D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129D88u;
label_129d88:
    // 0x129d88: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x129d88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_129d8c:
    // 0x129d8c: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x129d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
label_129d90:
    // 0x129d90: 0x3421ede0  ori         $at, $at, 0xEDE0
    ctx->pc = 0x129d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60896);
label_129d94:
    // 0x129d94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x129d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_129d98:
    // 0x129d98: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x129d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_129d9c:
    // 0x129d9c: 0xc12e29c  jal         func_4B8A70
label_129da0:
    if (ctx->pc == 0x129DA0u) {
        ctx->pc = 0x129DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D9Cu;
        // 0x129da0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129DA4u;
        goto label_129da4;
    }
    ctx->pc = 0x129D9Cu;
    SET_GPR_U32(ctx, 31, 0x129DA4u);
    ctx->pc = 0x129DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D9Cu;
    // 0x129da0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x129D9Cu, 0x129DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DA4u;
label_129da4:
    // 0x129da4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x129da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_129da8:
    // 0x129da8: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x129da8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_129dac:
    // 0x129dac: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x129dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_129db0:
    // 0x129db0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x129db0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_129db4:
    // 0x129db4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x129db4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_129db8:
    // 0x129db8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x129db8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_129dbc:
    // 0x129dbc: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x129dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_129dc0:
    // 0x129dc0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x129dc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_129dc4:
    // 0x129dc4: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x129dc4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_129dc8:
    // 0x129dc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x129dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_129dcc:
    // 0x129dcc: 0x0  nop
    ctx->pc = 0x129dccu;
    // NOP
label_129dd0:
    // 0x129dd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129dd4:
    // 0x129dd4: 0x0  nop
    ctx->pc = 0x129dd4u;
    // NOP
label_129dd8:
    // 0x129dd8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_129ddc:
    if (ctx->pc == 0x129DDCu) {
        ctx->pc = 0x129DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DD8u;
        // 0x129ddc: 0xa2200474  sb          $zero, 0x474($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129DE0u;
        goto label_129de0;
    }
    ctx->pc = 0x129DD8u;
    {
        const bool branch_taken_0x129dd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129dd8) {
            ctx->pc = 0x129DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129DD8u;
            // 0x129ddc: 0xa2200474  sb          $zero, 0x474($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1140), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129DE0u;
            goto label_129de0;
        }
    }
    ctx->pc = 0x129DE0u;
label_129de0:
    // 0x129de0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x129de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_129de4:
    // 0x129de4: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x129de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_129de8:
    // 0x129de8: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x129de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_129dec:
    // 0x129dec: 0x40f809  jalr        $v0
label_129df0:
    if (ctx->pc == 0x129DF0u) {
        ctx->pc = 0x129DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DECu;
        // 0x129df0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129DF4u;
        goto label_129df4;
    }
    ctx->pc = 0x129DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129DF4u);
        ctx->pc = 0x129DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DECu;
        // 0x129df0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129DECu, 0x129DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129DF4u;
label_129df4:
    // 0x129df4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x129df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_129df8:
    // 0x129df8: 0x2463b240  addiu       $v1, $v1, -0x4DC0
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947392));
label_129dfc:
    // 0x129dfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_129e00:
    // 0x129e00: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x129e00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_129e04:
    // 0x129e04: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
label_129e08:
    if (ctx->pc == 0x129E08u) {
        ctx->pc = 0x129E0Cu;
        goto label_129e0c;
    }
    ctx->pc = 0x129E04u;
    {
        const bool branch_taken_0x129e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e04) {
            ctx->pc = 0x129F04u;
            goto label_129f04;
        }
    }
    ctx->pc = 0x129E0Cu;
label_129e0c:
    // 0x129e0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x129e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_129e10:
    // 0x129e10: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_129e14:
    // 0x129e14: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x129e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_129e18:
    // 0x129e18: 0x40f809  jalr        $v0
label_129e1c:
    if (ctx->pc == 0x129E1Cu) {
        ctx->pc = 0x129E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E18u;
        // 0x129e1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E20u;
        goto label_129e20;
    }
    ctx->pc = 0x129E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129E20u);
        ctx->pc = 0x129E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E18u;
        // 0x129e1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129E18u, 0x129E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129E20u;
label_129e20:
    // 0x129e20: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x129e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_129e24:
    // 0x129e24: 0x2463b248  addiu       $v1, $v1, -0x4DB8
    ctx->pc = 0x129e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947400));
label_129e28:
    // 0x129e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_129e2c:
    // 0x129e2c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x129e2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_129e30:
    // 0x129e30: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_129e34:
    if (ctx->pc == 0x129E34u) {
        ctx->pc = 0x129E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E30u;
        // 0x129e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E38u;
        goto label_129e38;
    }
    ctx->pc = 0x129E30u;
    {
        const bool branch_taken_0x129e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E30u;
        // 0x129e34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e30) {
            ctx->pc = 0x129F04u;
            goto label_129f04;
        }
    }
    ctx->pc = 0x129E38u;
label_129e38:
    // 0x129e38: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x129e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_129e3c:
    // 0x129e3c: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x129e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_129e40:
    // 0x129e40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_129e44:
    if (ctx->pc == 0x129E44u) {
        ctx->pc = 0x129E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E40u;
        // 0x129e44: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E48u;
        goto label_129e48;
    }
    ctx->pc = 0x129E40u;
    {
        const bool branch_taken_0x129e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E40u;
        // 0x129e44: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e40) {
            ctx->pc = 0x129E54u;
            goto label_129e54;
        }
    }
    ctx->pc = 0x129E48u;
label_129e48:
    // 0x129e48: 0xc08997c  jal         func_2265F0
label_129e4c:
    if (ctx->pc == 0x129E4Cu) {
        ctx->pc = 0x129E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E48u;
        // 0x129e4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E50u;
        goto label_129e50;
    }
    ctx->pc = 0x129E48u;
    SET_GPR_U32(ctx, 31, 0x129E50u);
    ctx->pc = 0x129E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E48u;
    // 0x129e4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x129E48u, 0x129E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E50u;
label_129e50:
    // 0x129e50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129e54:
    // 0x129e54: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x129e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_129e58:
    // 0x129e58: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x129e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_129e5c:
    // 0x129e5c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_129e60:
    if (ctx->pc == 0x129E60u) {
        ctx->pc = 0x129E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E5Cu;
        // 0x129e60: 0x92230474  lbu         $v1, 0x474($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E64u;
        goto label_129e64;
    }
    ctx->pc = 0x129E5Cu;
    {
        const bool branch_taken_0x129e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e5c) {
            ctx->pc = 0x129E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129E5Cu;
            // 0x129e60: 0x92230474  lbu         $v1, 0x474($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129E74u;
            goto label_129e74;
        }
    }
    ctx->pc = 0x129E64u;
label_129e64:
    // 0x129e64: 0xc05d6fa  jal         func_175BE8
label_129e68:
    if (ctx->pc == 0x129E68u) {
        ctx->pc = 0x129E6Cu;
        goto label_129e6c;
    }
    ctx->pc = 0x129E64u;
    SET_GPR_U32(ctx, 31, 0x129E6Cu);
    ctx->pc = 0x175BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175BE8u, 0x129E64u, 0x129E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E6Cu;
label_129e6c:
    // 0x129e6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x129e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129e70:
    // 0x129e70: 0x92230474  lbu         $v1, 0x474($s1)
    ctx->pc = 0x129e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1140)));
label_129e74:
    // 0x129e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129e78:
    // 0x129e78: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
label_129e7c:
    if (ctx->pc == 0x129E7Cu) {
        ctx->pc = 0x129E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E78u;
        // 0x129e7c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E80u;
        goto label_129e80;
    }
    ctx->pc = 0x129E78u;
    {
        const bool branch_taken_0x129e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x129e78) {
            ctx->pc = 0x129E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129E78u;
            // 0x129e7c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129E80u;
label_129e80:
    // 0x129e80: 0x92220455  lbu         $v0, 0x455($s1)
    ctx->pc = 0x129e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1109)));
label_129e84:
    // 0x129e84: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
label_129e88:
    if (ctx->pc == 0x129E88u) {
        ctx->pc = 0x129E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E84u;
        // 0x129e88: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E8Cu;
        goto label_129e8c;
    }
    ctx->pc = 0x129E84u;
    {
        const bool branch_taken_0x129e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129e84) {
            ctx->pc = 0x129E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129E84u;
            // 0x129e88: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129E8Cu;
label_129e8c:
    // 0x129e8c: 0x56a00032  bnel        $s5, $zero, . + 4 + (0x32 << 2)
label_129e90:
    if (ctx->pc == 0x129E90u) {
        ctx->pc = 0x129E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E8Cu;
        // 0x129e90: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E94u;
        goto label_129e94;
    }
    ctx->pc = 0x129E8Cu;
    {
        const bool branch_taken_0x129e8c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x129e8c) {
            ctx->pc = 0x129E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129E8Cu;
            // 0x129e90: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129E94u;
label_129e94:
    // 0x129e94: 0x56430030  bnel        $s2, $v1, . + 4 + (0x30 << 2)
label_129e98:
    if (ctx->pc == 0x129E98u) {
        ctx->pc = 0x129E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E94u;
        // 0x129e98: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129E9Cu;
        goto label_129e9c;
    }
    ctx->pc = 0x129E94u;
    {
        const bool branch_taken_0x129e94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x129e94) {
            ctx->pc = 0x129E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129E94u;
            // 0x129e98: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129E9Cu;
label_129e9c:
    // 0x129e9c: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_129ea0:
    if (ctx->pc == 0x129EA0u) {
        ctx->pc = 0x129EA4u;
        goto label_129ea4;
    }
    ctx->pc = 0x129E9Cu;
    {
        const bool branch_taken_0x129e9c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x129e9c) {
            ctx->pc = 0x129EACu;
            goto label_129eac;
        }
    }
    ctx->pc = 0x129EA4u;
label_129ea4:
    // 0x129ea4: 0x5200002c  beql        $s0, $zero, . + 4 + (0x2C << 2)
label_129ea8:
    if (ctx->pc == 0x129EA8u) {
        ctx->pc = 0x129EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EA4u;
        // 0x129ea8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EACu;
        goto label_129eac;
    }
    ctx->pc = 0x129EA4u;
    {
        const bool branch_taken_0x129ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ea4) {
            ctx->pc = 0x129EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129EA4u;
            // 0x129ea8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129EACu;
label_129eac:
    // 0x129eac: 0x3c051800  lui         $a1, 0x1800
    ctx->pc = 0x129eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6144 << 16));
label_129eb0:
    // 0x129eb0: 0x34a53ff0  ori         $a1, $a1, 0x3FF0
    ctx->pc = 0x129eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16368);
label_129eb4:
    // 0x129eb4: 0xc08997c  jal         func_2265F0
label_129eb8:
    if (ctx->pc == 0x129EB8u) {
        ctx->pc = 0x129EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EB4u;
        // 0x129eb8: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EBCu;
        goto label_129ebc;
    }
    ctx->pc = 0x129EB4u;
    SET_GPR_U32(ctx, 31, 0x129EBCu);
    ctx->pc = 0x129EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EB4u;
    // 0x129eb8: 0x8e240314  lw          $a0, 0x314($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x129EB4u, 0x129EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EBCu;
label_129ebc:
    // 0x129ebc: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_129ec0:
    if (ctx->pc == 0x129EC0u) {
        ctx->pc = 0x129EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EBCu;
        // 0x129ec0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EC4u;
        goto label_129ec4;
    }
    ctx->pc = 0x129EBCu;
    {
        const bool branch_taken_0x129ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129ebc) {
            ctx->pc = 0x129EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129EBCu;
            // 0x129ec0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129EC4u;
label_129ec4:
    // 0x129ec4: 0xde220458  ld          $v0, 0x458($s1)
    ctx->pc = 0x129ec4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1112)));
label_129ec8:
    // 0x129ec8: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x129ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_129ecc:
    // 0x129ecc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x129eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_129ed0:
    // 0x129ed0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x129ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_129ed4:
    // 0x129ed4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x129ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_129ed8:
    // 0x129ed8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x129ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_129edc:
    // 0x129edc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_129ee0:
    if (ctx->pc == 0x129EE0u) {
        ctx->pc = 0x129EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EDCu;
        // 0x129ee0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EE4u;
        goto label_129ee4;
    }
    ctx->pc = 0x129EDCu;
    {
        const bool branch_taken_0x129edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129edc) {
            ctx->pc = 0x129EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129EDCu;
            // 0x129ee0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129EE4u;
label_129ee4:
    // 0x129ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129ee8:
    // 0x129ee8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x129ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_129eec:
    // 0x129eec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x129eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_129ef0:
    // 0x129ef0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x129ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_129ef4:
    // 0x129ef4: 0xc04a7e2  jal         func_129F88
label_129ef8:
    if (ctx->pc == 0x129EF8u) {
        ctx->pc = 0x129EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EF4u;
        // 0x129ef8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129EFCu;
        goto label_129efc;
    }
    ctx->pc = 0x129EF4u;
    SET_GPR_U32(ctx, 31, 0x129EFCu);
    ctx->pc = 0x129EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129EF4u;
    // 0x129ef8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F88u, 0x129EF4u, 0x129EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129EFCu;
label_129efc:
    // 0x129efc: 0x10000016  b           . + 4 + (0x16 << 2)
label_129f00:
    if (ctx->pc == 0x129F00u) {
        ctx->pc = 0x129F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EFCu;
        // 0x129f00: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129F04u;
        goto label_129f04;
    }
    ctx->pc = 0x129EFCu;
    {
        const bool branch_taken_0x129efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EFCu;
        // 0x129f00: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129efc) {
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129F04u;
label_129f04:
    // 0x129f04: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_129f08:
    if (ctx->pc == 0x129F08u) {
        ctx->pc = 0x129F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F04u;
        // 0x129f08: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129F0Cu;
        goto label_129f0c;
    }
    ctx->pc = 0x129F04u;
    {
        const bool branch_taken_0x129f04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F04u;
        // 0x129f08: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f04) {
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129F0Cu;
label_129f0c:
    // 0x129f0c: 0xde220458  ld          $v0, 0x458($s1)
    ctx->pc = 0x129f0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 1112)));
label_129f10:
    // 0x129f10: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x129f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_129f14:
    // 0x129f14: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x129f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_129f18:
    // 0x129f18: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x129f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_129f1c:
    // 0x129f1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x129f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_129f20:
    // 0x129f20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x129f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_129f24:
    // 0x129f24: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_129f28:
    if (ctx->pc == 0x129F28u) {
        ctx->pc = 0x129F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F24u;
        // 0x129f28: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129F2Cu;
        goto label_129f2c;
    }
    ctx->pc = 0x129F24u;
    {
        const bool branch_taken_0x129f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129f24) {
            ctx->pc = 0x129F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129F24u;
            // 0x129f28: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F5Cu;
            goto label_129f5c;
        }
    }
    ctx->pc = 0x129F2Cu;
label_129f2c:
    // 0x129f2c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x129f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_129f30:
    // 0x129f30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x129f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_129f34:
    // 0x129f34: 0x0  nop
    ctx->pc = 0x129f34u;
    // NOP
label_129f38:
    // 0x129f38: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x129f38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_129f3c:
    // 0x129f3c: 0x0  nop
    ctx->pc = 0x129f3cu;
    // NOP
label_129f40:
    // 0x129f40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_129f44:
    if (ctx->pc == 0x129F44u) {
        ctx->pc = 0x129F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F40u;
        // 0x129f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129F48u;
        goto label_129f48;
    }
    ctx->pc = 0x129F40u;
    {
        const bool branch_taken_0x129f40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F40u;
        // 0x129f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f40) {
            ctx->pc = 0x129F58u;
            goto label_129f58;
        }
    }
    ctx->pc = 0x129F48u;
label_129f48:
    // 0x129f48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x129f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_129f4c:
    // 0x129f4c: 0xc04a900  jal         func_12A400
label_129f50:
    if (ctx->pc == 0x129F50u) {
        ctx->pc = 0x129F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F4Cu;
        // 0x129f50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129F54u;
        goto label_129f54;
    }
    ctx->pc = 0x129F4Cu;
    SET_GPR_U32(ctx, 31, 0x129F54u);
    ctx->pc = 0x129F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129F4Cu;
    // 0x129f50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A400u, 0x129F4Cu, 0x129F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F54u;
label_129f54:
    // 0x129f54: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x129f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_129f58:
    // 0x129f58: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x129f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_129f5c:
    // 0x129f5c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x129f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_129f60:
    // 0x129f60: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x129f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_129f64:
    // 0x129f64: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x129f64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_129f68:
    // 0x129f68: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x129f68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_129f6c:
    // 0x129f6c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x129f6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_129f70:
    // 0x129f70: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x129f70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_129f74:
    // 0x129f74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x129f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_129f78:
    // 0x129f78: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x129f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_129f7c:
    // 0x129f7c: 0x3e00008  jr          $ra
label_129f80:
    if (ctx->pc == 0x129F80u) {
        ctx->pc = 0x129F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F7Cu;
        // 0x129f80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129F84u;
        goto label_129f84;
    }
    ctx->pc = 0x129F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F7Cu;
        // 0x129f80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129F84u;
label_129f84:
    // 0x129f84: 0x0  nop
    ctx->pc = 0x129f84u;
    // NOP
    ctx->pc = 0x129f88u;
}

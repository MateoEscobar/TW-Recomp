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

// Function: sub_00297C90
// Address: 0x297c90 - 0x298058
void sub_00297C90_0x297c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297C90_0x297c90");
#endif

    switch (ctx->pc) {
        case 0x297c90u: goto label_297c90;
        case 0x297c94u: goto label_297c94;
        case 0x297c98u: goto label_297c98;
        case 0x297c9cu: goto label_297c9c;
        case 0x297ca0u: goto label_297ca0;
        case 0x297ca4u: goto label_297ca4;
        case 0x297ca8u: goto label_297ca8;
        case 0x297cacu: goto label_297cac;
        case 0x297cb0u: goto label_297cb0;
        case 0x297cb4u: goto label_297cb4;
        case 0x297cb8u: goto label_297cb8;
        case 0x297cbcu: goto label_297cbc;
        case 0x297cc0u: goto label_297cc0;
        case 0x297cc4u: goto label_297cc4;
        case 0x297cc8u: goto label_297cc8;
        case 0x297cccu: goto label_297ccc;
        case 0x297cd0u: goto label_297cd0;
        case 0x297cd4u: goto label_297cd4;
        case 0x297cd8u: goto label_297cd8;
        case 0x297cdcu: goto label_297cdc;
        case 0x297ce0u: goto label_297ce0;
        case 0x297ce4u: goto label_297ce4;
        case 0x297ce8u: goto label_297ce8;
        case 0x297cecu: goto label_297cec;
        case 0x297cf0u: goto label_297cf0;
        case 0x297cf4u: goto label_297cf4;
        case 0x297cf8u: goto label_297cf8;
        case 0x297cfcu: goto label_297cfc;
        case 0x297d00u: goto label_297d00;
        case 0x297d04u: goto label_297d04;
        case 0x297d08u: goto label_297d08;
        case 0x297d0cu: goto label_297d0c;
        case 0x297d10u: goto label_297d10;
        case 0x297d14u: goto label_297d14;
        case 0x297d18u: goto label_297d18;
        case 0x297d1cu: goto label_297d1c;
        case 0x297d20u: goto label_297d20;
        case 0x297d24u: goto label_297d24;
        case 0x297d28u: goto label_297d28;
        case 0x297d2cu: goto label_297d2c;
        case 0x297d30u: goto label_297d30;
        case 0x297d34u: goto label_297d34;
        case 0x297d38u: goto label_297d38;
        case 0x297d3cu: goto label_297d3c;
        case 0x297d40u: goto label_297d40;
        case 0x297d44u: goto label_297d44;
        case 0x297d48u: goto label_297d48;
        case 0x297d4cu: goto label_297d4c;
        case 0x297d50u: goto label_297d50;
        case 0x297d54u: goto label_297d54;
        case 0x297d58u: goto label_297d58;
        case 0x297d5cu: goto label_297d5c;
        case 0x297d60u: goto label_297d60;
        case 0x297d64u: goto label_297d64;
        case 0x297d68u: goto label_297d68;
        case 0x297d6cu: goto label_297d6c;
        case 0x297d70u: goto label_297d70;
        case 0x297d74u: goto label_297d74;
        case 0x297d78u: goto label_297d78;
        case 0x297d7cu: goto label_297d7c;
        case 0x297d80u: goto label_297d80;
        case 0x297d84u: goto label_297d84;
        case 0x297d88u: goto label_297d88;
        case 0x297d8cu: goto label_297d8c;
        case 0x297d90u: goto label_297d90;
        case 0x297d94u: goto label_297d94;
        case 0x297d98u: goto label_297d98;
        case 0x297d9cu: goto label_297d9c;
        case 0x297da0u: goto label_297da0;
        case 0x297da4u: goto label_297da4;
        case 0x297da8u: goto label_297da8;
        case 0x297dacu: goto label_297dac;
        case 0x297db0u: goto label_297db0;
        case 0x297db4u: goto label_297db4;
        case 0x297db8u: goto label_297db8;
        case 0x297dbcu: goto label_297dbc;
        case 0x297dc0u: goto label_297dc0;
        case 0x297dc4u: goto label_297dc4;
        case 0x297dc8u: goto label_297dc8;
        case 0x297dccu: goto label_297dcc;
        case 0x297dd0u: goto label_297dd0;
        case 0x297dd4u: goto label_297dd4;
        case 0x297dd8u: goto label_297dd8;
        case 0x297ddcu: goto label_297ddc;
        case 0x297de0u: goto label_297de0;
        case 0x297de4u: goto label_297de4;
        case 0x297de8u: goto label_297de8;
        case 0x297decu: goto label_297dec;
        case 0x297df0u: goto label_297df0;
        case 0x297df4u: goto label_297df4;
        case 0x297df8u: goto label_297df8;
        case 0x297dfcu: goto label_297dfc;
        case 0x297e00u: goto label_297e00;
        case 0x297e04u: goto label_297e04;
        case 0x297e08u: goto label_297e08;
        case 0x297e0cu: goto label_297e0c;
        case 0x297e10u: goto label_297e10;
        case 0x297e14u: goto label_297e14;
        case 0x297e18u: goto label_297e18;
        case 0x297e1cu: goto label_297e1c;
        case 0x297e20u: goto label_297e20;
        case 0x297e24u: goto label_297e24;
        case 0x297e28u: goto label_297e28;
        case 0x297e2cu: goto label_297e2c;
        case 0x297e30u: goto label_297e30;
        case 0x297e34u: goto label_297e34;
        case 0x297e38u: goto label_297e38;
        case 0x297e3cu: goto label_297e3c;
        case 0x297e40u: goto label_297e40;
        case 0x297e44u: goto label_297e44;
        case 0x297e48u: goto label_297e48;
        case 0x297e4cu: goto label_297e4c;
        case 0x297e50u: goto label_297e50;
        case 0x297e54u: goto label_297e54;
        case 0x297e58u: goto label_297e58;
        case 0x297e5cu: goto label_297e5c;
        case 0x297e60u: goto label_297e60;
        case 0x297e64u: goto label_297e64;
        case 0x297e68u: goto label_297e68;
        case 0x297e6cu: goto label_297e6c;
        case 0x297e70u: goto label_297e70;
        case 0x297e74u: goto label_297e74;
        case 0x297e78u: goto label_297e78;
        case 0x297e7cu: goto label_297e7c;
        case 0x297e80u: goto label_297e80;
        case 0x297e84u: goto label_297e84;
        case 0x297e88u: goto label_297e88;
        case 0x297e8cu: goto label_297e8c;
        case 0x297e90u: goto label_297e90;
        case 0x297e94u: goto label_297e94;
        case 0x297e98u: goto label_297e98;
        case 0x297e9cu: goto label_297e9c;
        case 0x297ea0u: goto label_297ea0;
        case 0x297ea4u: goto label_297ea4;
        case 0x297ea8u: goto label_297ea8;
        case 0x297eacu: goto label_297eac;
        case 0x297eb0u: goto label_297eb0;
        case 0x297eb4u: goto label_297eb4;
        case 0x297eb8u: goto label_297eb8;
        case 0x297ebcu: goto label_297ebc;
        case 0x297ec0u: goto label_297ec0;
        case 0x297ec4u: goto label_297ec4;
        case 0x297ec8u: goto label_297ec8;
        case 0x297eccu: goto label_297ecc;
        case 0x297ed0u: goto label_297ed0;
        case 0x297ed4u: goto label_297ed4;
        case 0x297ed8u: goto label_297ed8;
        case 0x297edcu: goto label_297edc;
        case 0x297ee0u: goto label_297ee0;
        case 0x297ee4u: goto label_297ee4;
        case 0x297ee8u: goto label_297ee8;
        case 0x297eecu: goto label_297eec;
        case 0x297ef0u: goto label_297ef0;
        case 0x297ef4u: goto label_297ef4;
        case 0x297ef8u: goto label_297ef8;
        case 0x297efcu: goto label_297efc;
        case 0x297f00u: goto label_297f00;
        case 0x297f04u: goto label_297f04;
        case 0x297f08u: goto label_297f08;
        case 0x297f0cu: goto label_297f0c;
        case 0x297f10u: goto label_297f10;
        case 0x297f14u: goto label_297f14;
        case 0x297f18u: goto label_297f18;
        case 0x297f1cu: goto label_297f1c;
        case 0x297f20u: goto label_297f20;
        case 0x297f24u: goto label_297f24;
        case 0x297f28u: goto label_297f28;
        case 0x297f2cu: goto label_297f2c;
        case 0x297f30u: goto label_297f30;
        case 0x297f34u: goto label_297f34;
        case 0x297f38u: goto label_297f38;
        case 0x297f3cu: goto label_297f3c;
        case 0x297f40u: goto label_297f40;
        case 0x297f44u: goto label_297f44;
        case 0x297f48u: goto label_297f48;
        case 0x297f4cu: goto label_297f4c;
        case 0x297f50u: goto label_297f50;
        case 0x297f54u: goto label_297f54;
        case 0x297f58u: goto label_297f58;
        case 0x297f5cu: goto label_297f5c;
        case 0x297f60u: goto label_297f60;
        case 0x297f64u: goto label_297f64;
        case 0x297f68u: goto label_297f68;
        case 0x297f6cu: goto label_297f6c;
        case 0x297f70u: goto label_297f70;
        case 0x297f74u: goto label_297f74;
        case 0x297f78u: goto label_297f78;
        case 0x297f7cu: goto label_297f7c;
        case 0x297f80u: goto label_297f80;
        case 0x297f84u: goto label_297f84;
        case 0x297f88u: goto label_297f88;
        case 0x297f8cu: goto label_297f8c;
        case 0x297f90u: goto label_297f90;
        case 0x297f94u: goto label_297f94;
        case 0x297f98u: goto label_297f98;
        case 0x297f9cu: goto label_297f9c;
        case 0x297fa0u: goto label_297fa0;
        case 0x297fa4u: goto label_297fa4;
        case 0x297fa8u: goto label_297fa8;
        case 0x297facu: goto label_297fac;
        case 0x297fb0u: goto label_297fb0;
        case 0x297fb4u: goto label_297fb4;
        case 0x297fb8u: goto label_297fb8;
        case 0x297fbcu: goto label_297fbc;
        case 0x297fc0u: goto label_297fc0;
        case 0x297fc4u: goto label_297fc4;
        case 0x297fc8u: goto label_297fc8;
        case 0x297fccu: goto label_297fcc;
        case 0x297fd0u: goto label_297fd0;
        case 0x297fd4u: goto label_297fd4;
        case 0x297fd8u: goto label_297fd8;
        case 0x297fdcu: goto label_297fdc;
        case 0x297fe0u: goto label_297fe0;
        case 0x297fe4u: goto label_297fe4;
        case 0x297fe8u: goto label_297fe8;
        case 0x297fecu: goto label_297fec;
        case 0x297ff0u: goto label_297ff0;
        case 0x297ff4u: goto label_297ff4;
        case 0x297ff8u: goto label_297ff8;
        case 0x297ffcu: goto label_297ffc;
        case 0x298000u: goto label_298000;
        case 0x298004u: goto label_298004;
        case 0x298008u: goto label_298008;
        case 0x29800cu: goto label_29800c;
        case 0x298010u: goto label_298010;
        case 0x298014u: goto label_298014;
        case 0x298018u: goto label_298018;
        case 0x29801cu: goto label_29801c;
        case 0x298020u: goto label_298020;
        case 0x298024u: goto label_298024;
        case 0x298028u: goto label_298028;
        case 0x29802cu: goto label_29802c;
        case 0x298030u: goto label_298030;
        case 0x298034u: goto label_298034;
        case 0x298038u: goto label_298038;
        case 0x29803cu: goto label_29803c;
        case 0x298040u: goto label_298040;
        case 0x298044u: goto label_298044;
        case 0x298048u: goto label_298048;
        case 0x29804cu: goto label_29804c;
        case 0x298050u: goto label_298050;
        case 0x298054u: goto label_298054;
        default: break;
    }

    ctx->pc = 0x297c90u;

label_297c90:
    // 0x297c90: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x297c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
label_297c94:
    // 0x297c94: 0x7fb202d0  sq          $s2, 0x2D0($sp)
    ctx->pc = 0x297c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 18));
label_297c98:
    // 0x297c98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x297c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_297c9c:
    // 0x297c9c: 0x7fb102e0  sq          $s1, 0x2E0($sp)
    ctx->pc = 0x297c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 17));
label_297ca0:
    // 0x297ca0: 0x7fb302c0  sq          $s3, 0x2C0($sp)
    ctx->pc = 0x297ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 19));
label_297ca4:
    // 0x297ca4: 0x7fb402b0  sq          $s4, 0x2B0($sp)
    ctx->pc = 0x297ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 20));
label_297ca8:
    // 0x297ca8: 0x7fb002f0  sq          $s0, 0x2F0($sp)
    ctx->pc = 0x297ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 16));
label_297cac:
    // 0x297cac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x297cacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297cb0:
    // 0x297cb0: 0x7fb502a0  sq          $s5, 0x2A0($sp)
    ctx->pc = 0x297cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 21));
label_297cb4:
    // 0x297cb4: 0x7fb60290  sq          $s6, 0x290($sp)
    ctx->pc = 0x297cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 22));
label_297cb8:
    // 0x297cb8: 0x7fb70280  sq          $s7, 0x280($sp)
    ctx->pc = 0x297cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 23));
label_297cbc:
    // 0x297cbc: 0x7fbe0270  sq          $fp, 0x270($sp)
    ctx->pc = 0x297cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 30));
label_297cc0:
    // 0x297cc0: 0xffbf0260  sd          $ra, 0x260($sp)
    ctx->pc = 0x297cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 31));
label_297cc4:
    // 0x297cc4: 0xc0a5a72  jal         func_2969C8
label_297cc8:
    if (ctx->pc == 0x297CC8u) {
        ctx->pc = 0x297CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CC4u;
        // 0x297cc8: 0xe7b40300  swc1        $f20, 0x300($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x297CCCu;
        goto label_297ccc;
    }
    ctx->pc = 0x297CC4u;
    SET_GPR_U32(ctx, 31, 0x297CCCu);
    ctx->pc = 0x297CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CC4u;
    // 0x297cc8: 0xe7b40300  swc1        $f20, 0x300($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297CC4u, 0x297CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CCCu;
label_297ccc:
    // 0x297ccc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x297cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297cd0:
    // 0x297cd0: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x297cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_297cd4:
    // 0x297cd4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x297cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_297cd8:
    // 0x297cd8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x297cd8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_297cdc:
    // 0x297cdc: 0x144000d1  bnez        $v0, . + 4 + (0xD1 << 2)
label_297ce0:
    if (ctx->pc == 0x297CE0u) {
        ctx->pc = 0x297CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CDCu;
        // 0x297ce0: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297CE4u;
        goto label_297ce4;
    }
    ctx->pc = 0x297CDCu;
    {
        const bool branch_taken_0x297cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CDCu;
        // 0x297ce0: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cdc) {
            ctx->pc = 0x298024u;
            goto label_298024;
        }
    }
    ctx->pc = 0x297CE4u;
label_297ce4:
    // 0x297ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_297ce8:
    // 0x297ce8: 0xc0a5a74  jal         func_2969D0
label_297cec:
    if (ctx->pc == 0x297CECu) {
        ctx->pc = 0x297CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CE8u;
        // 0x297cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297CF0u;
        goto label_297cf0;
    }
    ctx->pc = 0x297CE8u;
    SET_GPR_U32(ctx, 31, 0x297CF0u);
    ctx->pc = 0x297CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297CE8u;
    // 0x297cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969D0u, 0x297CE8u, 0x297CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297CF0u;
label_297cf0:
    // 0x297cf0: 0x105400cc  beq         $v0, $s4, . + 4 + (0xCC << 2)
label_297cf4:
    if (ctx->pc == 0x297CF4u) {
        ctx->pc = 0x297CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CF0u;
        // 0x297cf4: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297CF8u;
        goto label_297cf8;
    }
    ctx->pc = 0x297CF0u;
    {
        const bool branch_taken_0x297cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x297CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CF0u;
        // 0x297cf4: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cf0) {
            ctx->pc = 0x298024u;
            goto label_298024;
        }
    }
    ctx->pc = 0x297CF8u;
label_297cf8:
    // 0x297cf8: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x297cf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_297cfc:
    // 0x297cfc: 0x4800020  bltz        $a0, . + 4 + (0x20 << 2)
label_297d00:
    if (ctx->pc == 0x297D00u) {
        ctx->pc = 0x297D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CFCu;
        // 0x297d00: 0x263e0284  addiu       $fp, $s1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D04u;
        goto label_297d04;
    }
    ctx->pc = 0x297CFCu;
    {
        const bool branch_taken_0x297cfc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x297D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297CFCu;
        // 0x297d00: 0x263e0284  addiu       $fp, $s1, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297cfc) {
            ctx->pc = 0x297D80u;
            goto label_297d80;
        }
    }
    ctx->pc = 0x297D04u;
label_297d04:
    // 0x297d04: 0xc0e402c  jal         func_3900B0
label_297d08:
    if (ctx->pc == 0x297D08u) {
        ctx->pc = 0x297D0Cu;
        goto label_297d0c;
    }
    ctx->pc = 0x297D04u;
    SET_GPR_U32(ctx, 31, 0x297D0Cu);
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x297D04u, 0x297D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D0Cu;
label_297d0c:
    // 0x297d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297d10:
    // 0x297d10: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_297d14:
    if (ctx->pc == 0x297D14u) {
        ctx->pc = 0x297D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D10u;
        // 0x297d14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D18u;
        goto label_297d18;
    }
    ctx->pc = 0x297D10u;
    {
        const bool branch_taken_0x297d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D10u;
        // 0x297d14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d10) {
            ctx->pc = 0x297DCCu;
            goto label_297dcc;
        }
    }
    ctx->pc = 0x297D18u;
label_297d18:
    // 0x297d18: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x297d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_297d1c:
    // 0x297d1c: 0x24420b00  addiu       $v0, $v0, 0xB00
    ctx->pc = 0x297d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
label_297d20:
    // 0x297d20: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x297d20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_297d24:
    // 0x297d24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_297d28:
    // 0x297d28: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x297d28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_297d2c:
    // 0x297d2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x297d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_297d30:
    // 0x297d30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x297d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_297d34:
    // 0x297d34: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x297d34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_297d38:
    // 0x297d38: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x297d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_297d3c:
    // 0x297d3c: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
label_297d40:
    if (ctx->pc == 0x297D40u) {
        ctx->pc = 0x297D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D3Cu;
        // 0x297d40: 0xa6450002  sh          $a1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D44u;
        goto label_297d44;
    }
    ctx->pc = 0x297D3Cu;
    {
        const bool branch_taken_0x297d3c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x297D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D3Cu;
        // 0x297d40: 0xa6450002  sh          $a1, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d3c) {
            ctx->pc = 0x297DCCu;
            goto label_297dcc;
        }
    }
    ctx->pc = 0x297D44u;
label_297d44:
    // 0x297d44: 0xc66c012c  lwc1        $f12, 0x12C($s3)
    ctx->pc = 0x297d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_297d48:
    // 0x297d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297d4c:
    // 0x297d4c: 0xc0889b8  jal         func_2226E0
label_297d50:
    if (ctx->pc == 0x297D50u) {
        ctx->pc = 0x297D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D4Cu;
        // 0x297d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D54u;
        goto label_297d54;
    }
    ctx->pc = 0x297D4Cu;
    SET_GPR_U32(ctx, 31, 0x297D54u);
    ctx->pc = 0x297D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D4Cu;
    // 0x297d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226E0u, 0x297D4Cu, 0x297D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D54u;
label_297d54:
    // 0x297d54: 0x5454001e  bnel        $v0, $s4, . + 4 + (0x1E << 2)
label_297d58:
    if (ctx->pc == 0x297D58u) {
        ctx->pc = 0x297D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D54u;
        // 0x297d58: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D5Cu;
        goto label_297d5c;
    }
    ctx->pc = 0x297D54u;
    {
        const bool branch_taken_0x297d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x297d54) {
            ctx->pc = 0x297D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297D54u;
            // 0x297d58: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297DD0u;
            goto label_297dd0;
        }
    }
    ctx->pc = 0x297D5Cu;
label_297d5c:
    // 0x297d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x297d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_297d60:
    // 0x297d60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x297d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_297d64:
    // 0x297d64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x297d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_297d68:
    // 0x297d68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297d6c:
    // 0x297d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297d70:
    // 0x297d70: 0xc0a6800  jal         func_29A000
label_297d74:
    if (ctx->pc == 0x297D74u) {
        ctx->pc = 0x297D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D70u;
        // 0x297d74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D78u;
        goto label_297d78;
    }
    ctx->pc = 0x297D70u;
    SET_GPR_U32(ctx, 31, 0x297D78u);
    ctx->pc = 0x297D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D70u;
    // 0x297d74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x297D70u, 0x297D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D78u;
label_297d78:
    // 0x297d78: 0x100000aa  b           . + 4 + (0xAA << 2)
label_297d7c:
    if (ctx->pc == 0x297D7Cu) {
        ctx->pc = 0x297D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D78u;
        // 0x297d7c: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297D80u;
        goto label_297d80;
    }
    ctx->pc = 0x297D78u;
    {
        const bool branch_taken_0x297d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D78u;
        // 0x297d7c: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d78) {
            ctx->pc = 0x298024u;
            goto label_298024;
        }
    }
    ctx->pc = 0x297D80u;
label_297d80:
    // 0x297d80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x297d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_297d84:
    // 0x297d84: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x297d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
label_297d88:
    // 0x297d88: 0x24420b00  addiu       $v0, $v0, 0xB00
    ctx->pc = 0x297d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
label_297d8c:
    // 0x297d8c: 0x96450016  lhu         $a1, 0x16($s2)
    ctx->pc = 0x297d8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_297d90:
    // 0x297d90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_297d94:
    // 0x297d94: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x297d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_297d98:
    // 0x297d98: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x297d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_297d9c:
    // 0x297d9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x297d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_297da0:
    // 0x297da0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x297da0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_297da4:
    // 0x297da4: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x297da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_297da8:
    // 0x297da8: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_297dac:
    if (ctx->pc == 0x297DACu) {
        ctx->pc = 0x297DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DA8u;
        // 0x297dac: 0xa6450016  sh          $a1, 0x16($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297DB0u;
        goto label_297db0;
    }
    ctx->pc = 0x297DA8u;
    {
        const bool branch_taken_0x297da8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x297DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DA8u;
        // 0x297dac: 0xa6450016  sh          $a1, 0x16($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297da8) {
            ctx->pc = 0x297DCCu;
            goto label_297dcc;
        }
    }
    ctx->pc = 0x297DB0u;
label_297db0:
    // 0x297db0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x297db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_297db4:
    // 0x297db4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x297db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_297db8:
    // 0x297db8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x297db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_297dbc:
    // 0x297dbc: 0xc0a67aa  jal         func_299EA8
label_297dc0:
    if (ctx->pc == 0x297DC0u) {
        ctx->pc = 0x297DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DBCu;
        // 0x297dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297DC4u;
        goto label_297dc4;
    }
    ctx->pc = 0x297DBCu;
    SET_GPR_U32(ctx, 31, 0x297DC4u);
    ctx->pc = 0x297DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297DBCu;
    // 0x297dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x297DBCu, 0x297DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297DC4u;
label_297dc4:
    // 0x297dc4: 0x10000097  b           . + 4 + (0x97 << 2)
label_297dc8:
    if (ctx->pc == 0x297DC8u) {
        ctx->pc = 0x297DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DC4u;
        // 0x297dc8: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297DCCu;
        goto label_297dcc;
    }
    ctx->pc = 0x297DC4u;
    {
        const bool branch_taken_0x297dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297DC4u;
        // 0x297dc8: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297dc4) {
            ctx->pc = 0x298024u;
            goto label_298024;
        }
    }
    ctx->pc = 0x297DCCu;
label_297dcc:
    // 0x297dcc: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x297dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_297dd0:
    // 0x297dd0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x297dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_297dd4:
    // 0x297dd4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x297dd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_297dd8:
    // 0x297dd8: 0x24754b00  addiu       $s5, $v1, 0x4B00
    ctx->pc = 0x297dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_297ddc:
    // 0x297ddc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x297ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_297de0:
    // 0x297de0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x297de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_297de4:
    // 0x297de4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_297de8:
    // 0x297de8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x297de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_297dec:
    // 0x297dec: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x297decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_297df0:
    // 0x297df0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x297df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_297df4:
    // 0x297df4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x297df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_297df8:
    // 0x297df8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x297df8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_297dfc:
    // 0x297dfc: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x297dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_297e00:
    // 0x297e00: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x297e00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297e04:
    // 0x297e04: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x297e04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297e08:
    // 0x297e08: 0x7fa301e0  sq          $v1, 0x1E0($sp)
    ctx->pc = 0x297e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 3));
label_297e0c:
    // 0x297e0c: 0xc089d2a  jal         func_2274A8
label_297e10:
    if (ctx->pc == 0x297E10u) {
        ctx->pc = 0x297E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E0Cu;
        // 0x297e10: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E14u;
        goto label_297e14;
    }
    ctx->pc = 0x297E0Cu;
    SET_GPR_U32(ctx, 31, 0x297E14u);
    ctx->pc = 0x297E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E0Cu;
    // 0x297e10: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x297E0Cu, 0x297E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E14u;
label_297e14:
    // 0x297e14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x297e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297e18:
    // 0x297e18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_297e1c:
    // 0x297e1c: 0xc0a6488  jal         func_299220
label_297e20:
    if (ctx->pc == 0x297E20u) {
        ctx->pc = 0x297E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E1Cu;
        // 0x297e20: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E24u;
        goto label_297e24;
    }
    ctx->pc = 0x297E1Cu;
    SET_GPR_U32(ctx, 31, 0x297E24u);
    ctx->pc = 0x297E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E1Cu;
    // 0x297e20: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299220u, 0x297E1Cu, 0x297E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E24u;
label_297e24:
    // 0x297e24: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x297e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_297e28:
    // 0x297e28: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x297e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_297e2c:
    // 0x297e2c: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x297e2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_297e30:
    // 0x297e30: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x297e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_297e34:
    // 0x297e34: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x297e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_297e38:
    // 0x297e38: 0xc0cd8ec  jal         func_3363B0
label_297e3c:
    if (ctx->pc == 0x297E3Cu) {
        ctx->pc = 0x297E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E38u;
        // 0x297e3c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E40u;
        goto label_297e40;
    }
    ctx->pc = 0x297E38u;
    SET_GPR_U32(ctx, 31, 0x297E40u);
    ctx->pc = 0x297E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E38u;
    // 0x297e3c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x297E38u, 0x297E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E40u;
label_297e40:
    // 0x297e40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x297e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_297e44:
    // 0x297e44: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x297e44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_297e48:
    // 0x297e48: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x297e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_297e4c:
    // 0x297e4c: 0x40f809  jalr        $v0
label_297e50:
    if (ctx->pc == 0x297E50u) {
        ctx->pc = 0x297E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E4Cu;
        // 0x297e50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E54u;
        goto label_297e54;
    }
    ctx->pc = 0x297E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x297E54u);
        ctx->pc = 0x297E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E4Cu;
        // 0x297e50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E4Cu, 0x297E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297E54u;
label_297e54:
    // 0x297e54: 0x1280003e  beqz        $s4, . + 4 + (0x3E << 2)
label_297e58:
    if (ctx->pc == 0x297E58u) {
        ctx->pc = 0x297E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E54u;
        // 0x297e58: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E5Cu;
        goto label_297e5c;
    }
    ctx->pc = 0x297E54u;
    {
        const bool branch_taken_0x297e54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E54u;
        // 0x297e58: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e54) {
            ctx->pc = 0x297F50u;
            goto label_297f50;
        }
    }
    ctx->pc = 0x297E5Cu;
label_297e5c:
    // 0x297e5c: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x297e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
label_297e60:
    // 0x297e60: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x297e60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
label_297e64:
    // 0x297e64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x297e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_297e68:
    // 0x297e68: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x297e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_297e6c:
    // 0x297e6c: 0x0  nop
    ctx->pc = 0x297e6cu;
    // NOP
label_297e70:
    // 0x297e70: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x297e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_297e74:
    // 0x297e74: 0xc087502  jal         func_21D408
label_297e78:
    if (ctx->pc == 0x297E78u) {
        ctx->pc = 0x297E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E74u;
        // 0x297e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E7Cu;
        goto label_297e7c;
    }
    ctx->pc = 0x297E74u;
    SET_GPR_U32(ctx, 31, 0x297E7Cu);
    ctx->pc = 0x297E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E74u;
    // 0x297e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x297E74u, 0x297E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297E7Cu;
label_297e7c:
    // 0x297e7c: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x297e7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_297e80:
    // 0x297e80: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x297e80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_297e84:
    // 0x297e84: 0x1075002e  beq         $v1, $s5, . + 4 + (0x2E << 2)
label_297e88:
    if (ctx->pc == 0x297E88u) {
        ctx->pc = 0x297E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E84u;
        // 0x297e88: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297E8Cu;
        goto label_297e8c;
    }
    ctx->pc = 0x297E84u;
    {
        const bool branch_taken_0x297e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x297E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E84u;
        // 0x297e88: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e84) {
            ctx->pc = 0x297F40u;
            goto label_297f40;
        }
    }
    ctx->pc = 0x297E8Cu;
label_297e8c:
    // 0x297e8c: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x297e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_297e90:
    // 0x297e90: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x297e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_297e94:
    // 0x297e94: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x297e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_297e98:
    // 0x297e98: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x297e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_297e9c:
    // 0x297e9c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x297e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_297ea0:
    // 0x297ea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_297ea4:
    // 0x297ea4: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x297ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_297ea8:
    // 0x297ea8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x297ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_297eac:
    // 0x297eac: 0xc136afa  jal         func_4DABE8
label_297eb0:
    if (ctx->pc == 0x297EB0u) {
        ctx->pc = 0x297EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297EACu;
        // 0x297eb0: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297EB4u;
        goto label_297eb4;
    }
    ctx->pc = 0x297EACu;
    SET_GPR_U32(ctx, 31, 0x297EB4u);
    ctx->pc = 0x297EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297EACu;
    // 0x297eb0: 0x7fa20200  sq          $v0, 0x200($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x297EACu, 0x297EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297EB4u;
label_297eb4:
    // 0x297eb4: 0x7ba40220  lq          $a0, 0x220($sp)
    ctx->pc = 0x297eb4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_297eb8:
    // 0x297eb8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x297eb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_297ebc:
    // 0x297ebc: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x297ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_297ec0:
    // 0x297ec0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x297ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_297ec4:
    // 0x297ec4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x297ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_297ec8:
    // 0x297ec8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x297ec8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_297ecc:
    // 0x297ecc: 0x4a0003bf  vwaitq
    ctx->pc = 0x297eccu;
    // VWAITQ (Q already resolved in this runtime)
label_297ed0:
    // 0x297ed0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x297ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_297ed4:
    // 0x297ed4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x297ed4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_297ed8:
    // 0x297ed8: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x297ed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_297edc:
    // 0x297edc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x297edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_297ee0:
    // 0x297ee0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x297ee0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_297ee4:
    // 0x297ee4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x297ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_297ee8:
    // 0x297ee8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x297ee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_297eec:
    // 0x297eec: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x297eecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_297ef0:
    // 0x297ef0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x297ef0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_297ef4:
    // 0x297ef4: 0x7fa40210  sq          $a0, 0x210($sp)
    ctx->pc = 0x297ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 4));
label_297ef8:
    // 0x297ef8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x297ef8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_297efc:
    // 0x297efc: 0x7fa30240  sq          $v1, 0x240($sp)
    ctx->pc = 0x297efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 3));
label_297f00:
    // 0x297f00: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x297f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_297f04:
    // 0x297f04: 0x7fa30230  sq          $v1, 0x230($sp)
    ctx->pc = 0x297f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 3));
label_297f08:
    // 0x297f08: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_297f0c:
    if (ctx->pc == 0x297F0Cu) {
        ctx->pc = 0x297F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F08u;
        // 0x297f0c: 0x7fa30220  sq          $v1, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297F10u;
        goto label_297f10;
    }
    ctx->pc = 0x297F08u;
    {
        const bool branch_taken_0x297f08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x297F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F08u;
        // 0x297f0c: 0x7fa30220  sq          $v1, 0x220($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f08) {
            ctx->pc = 0x297F40u;
            goto label_297f40;
        }
    }
    ctx->pc = 0x297F10u;
label_297f10:
    // 0x297f10: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x297f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_297f14:
    // 0x297f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_297f18:
    // 0x297f18: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x297f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_297f1c:
    // 0x297f1c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x297f1cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_297f20:
    // 0x297f20: 0xc0a5c14  jal         func_297050
label_297f24:
    if (ctx->pc == 0x297F24u) {
        ctx->pc = 0x297F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F20u;
        // 0x297f24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297F28u;
        goto label_297f28;
    }
    ctx->pc = 0x297F20u;
    SET_GPR_U32(ctx, 31, 0x297F28u);
    ctx->pc = 0x297F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F20u;
    // 0x297f24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297050u, 0x297F20u, 0x297F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F28u;
label_297f28:
    // 0x297f28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x297f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297f2c:
    // 0x297f2c: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x297f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_297f30:
    // 0x297f30: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_297f34:
    if (ctx->pc == 0x297F34u) {
        ctx->pc = 0x297F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F30u;
        // 0x297f34: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297F38u;
        goto label_297f38;
    }
    ctx->pc = 0x297F30u;
    {
        const bool branch_taken_0x297f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297f30) {
            ctx->pc = 0x297F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297F30u;
            // 0x297f34: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297F44u;
            goto label_297f44;
        }
    }
    ctx->pc = 0x297F38u;
label_297f38:
    // 0x297f38: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x297f38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_297f3c:
    // 0x297f3c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x297f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_297f40:
    // 0x297f40: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x297f40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_297f44:
    // 0x297f44: 0x2d4102b  sltu        $v0, $s6, $s4
    ctx->pc = 0x297f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_297f48:
    // 0x297f48: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_297f4c:
    if (ctx->pc == 0x297F4Cu) {
        ctx->pc = 0x297F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F48u;
        // 0x297f4c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297F50u;
        goto label_297f50;
    }
    ctx->pc = 0x297F48u;
    {
        const bool branch_taken_0x297f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F48u;
        // 0x297f4c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f48) {
            ctx->pc = 0x297E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297e70;
        }
    }
    ctx->pc = 0x297F50u;
label_297f50:
    // 0x297f50: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
label_297f54:
    if (ctx->pc == 0x297F54u) {
        ctx->pc = 0x297F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F50u;
        // 0x297f54: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297F58u;
        goto label_297f58;
    }
    ctx->pc = 0x297F50u;
    {
        const bool branch_taken_0x297f50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F50u;
        // 0x297f54: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f50) {
            ctx->pc = 0x297FD4u;
            goto label_297fd4;
        }
    }
    ctx->pc = 0x297F58u;
label_297f58:
    // 0x297f58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x297f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_297f5c:
    // 0x297f5c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x297f5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_297f60:
    // 0x297f60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x297f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_297f64:
    // 0x297f64: 0x40f809  jalr        $v0
label_297f68:
    if (ctx->pc == 0x297F68u) {
        ctx->pc = 0x297F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F64u;
        // 0x297f68: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297F6Cu;
        goto label_297f6c;
    }
    ctx->pc = 0x297F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x297F6Cu);
        ctx->pc = 0x297F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F64u;
        // 0x297f68: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297F64u, 0x297F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297F6Cu;
label_297f6c:
    // 0x297f6c: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x297f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_297f70:
    // 0x297f70: 0x240502ee  addiu       $a1, $zero, 0x2EE
    ctx->pc = 0x297f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
label_297f74:
    // 0x297f74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x297f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_297f78:
    // 0x297f78: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x297f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_297f7c:
    // 0x297f7c: 0x2444b880  addiu       $a0, $v0, -0x4780
    ctx->pc = 0x297f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948992));
label_297f80:
    // 0x297f80: 0x97a20252  lhu         $v0, 0x252($sp)
    ctx->pc = 0x297f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 594)));
label_297f84:
    // 0x297f84: 0xc0cd4fc  jal         func_3353F0
label_297f88:
    if (ctx->pc == 0x297F88u) {
        ctx->pc = 0x297F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F84u;
        // 0x297f88: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297F8Cu;
        goto label_297f8c;
    }
    ctx->pc = 0x297F84u;
    SET_GPR_U32(ctx, 31, 0x297F8Cu);
    ctx->pc = 0x297F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F84u;
    // 0x297f88: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x297F84u, 0x297F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F8Cu;
label_297f8c:
    // 0x297f8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x297f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_297f90:
    // 0x297f90: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x297f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_297f94:
    // 0x297f94: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x297f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_297f98:
    // 0x297f98: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_297f9c:
    if (ctx->pc == 0x297F9Cu) {
        ctx->pc = 0x297F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F98u;
        // 0x297f9c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x297FA0u;
        goto label_297fa0;
    }
    ctx->pc = 0x297F98u;
    {
        const bool branch_taken_0x297f98 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x297f98) {
            ctx->pc = 0x297F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297F98u;
            // 0x297f9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297FA0u;
            goto label_297fa0;
        }
    }
    ctx->pc = 0x297FA0u;
label_297fa0:
    // 0x297fa0: 0xa6400016  sh          $zero, 0x16($s2)
    ctx->pc = 0x297fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 0));
label_297fa4:
    // 0x297fa4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x297fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_297fa8:
    // 0x297fa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x297fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_297fac:
    // 0x297fac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x297facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_297fb0:
    // 0x297fb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x297fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_297fb4:
    // 0x297fb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297fb8:
    // 0x297fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x297fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_297fbc:
    // 0x297fbc: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x297fbcu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_297fc0:
    // 0x297fc0: 0x1012  mflo        $v0
    ctx->pc = 0x297fc0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_297fc4:
    // 0x297fc4: 0xc0a6800  jal         func_29A000
label_297fc8:
    if (ctx->pc == 0x297FC8u) {
        ctx->pc = 0x297FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FC4u;
        // 0x297fc8: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297FCCu;
        goto label_297fcc;
    }
    ctx->pc = 0x297FC4u;
    SET_GPR_U32(ctx, 31, 0x297FCCu);
    ctx->pc = 0x297FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FC4u;
    // 0x297fc8: 0xa6420002  sh          $v0, 0x2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x297FC4u, 0x297FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FCCu;
label_297fcc:
    // 0x297fcc: 0x10000015  b           . + 4 + (0x15 << 2)
label_297fd0:
    if (ctx->pc == 0x297FD0u) {
        ctx->pc = 0x297FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FCCu;
        // 0x297fd0: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297FD4u;
        goto label_297fd4;
    }
    ctx->pc = 0x297FCCu;
    {
        const bool branch_taken_0x297fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FCCu;
        // 0x297fd0: 0x7bb002f0  lq          $s0, 0x2F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297fcc) {
            ctx->pc = 0x298024u;
            goto label_298024;
        }
    }
    ctx->pc = 0x297FD4u;
label_297fd4:
    // 0x297fd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_297fd8:
    // 0x297fd8: 0x2464b880  addiu       $a0, $v1, -0x4780
    ctx->pc = 0x297fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948992));
label_297fdc:
    // 0x297fdc: 0x240505dc  addiu       $a1, $zero, 0x5DC
    ctx->pc = 0x297fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_297fe0:
    // 0x297fe0: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x297fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_297fe4:
    // 0x297fe4: 0xc0cd4fc  jal         func_3353F0
label_297fe8:
    if (ctx->pc == 0x297FE8u) {
        ctx->pc = 0x297FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FE4u;
        // 0x297fe8: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297FECu;
        goto label_297fec;
    }
    ctx->pc = 0x297FE4u;
    SET_GPR_U32(ctx, 31, 0x297FECu);
    ctx->pc = 0x297FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FE4u;
    // 0x297fe8: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x297FE4u, 0x297FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FECu;
label_297fec:
    // 0x297fec: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x297fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_297ff0:
    // 0x297ff0: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x297ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_297ff4:
    // 0x297ff4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x297ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_297ff8:
    // 0x297ff8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_297ffc:
    if (ctx->pc == 0x297FFCu) {
        ctx->pc = 0x297FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FF8u;
        // 0x297ffc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298000u;
        goto label_298000;
    }
    ctx->pc = 0x297FF8u;
    {
        const bool branch_taken_0x297ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297ff8) {
            ctx->pc = 0x297FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297FF8u;
            // 0x297ffc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x298000u;
            goto label_298000;
        }
    }
    ctx->pc = 0x298000u;
label_298000:
    // 0x298000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_298004:
    // 0x298004: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_298008:
    // 0x298008: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x298008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29800c:
    // 0x29800c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29800cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298010:
    // 0x298010: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x298010u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_298014:
    // 0x298014: 0x1012  mflo        $v0
    ctx->pc = 0x298014u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_298018:
    // 0x298018: 0xc0a67aa  jal         func_299EA8
label_29801c:
    if (ctx->pc == 0x29801Cu) {
        ctx->pc = 0x29801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298018u;
        // 0x29801c: 0xa6420016  sh          $v0, 0x16($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298020u;
        goto label_298020;
    }
    ctx->pc = 0x298018u;
    SET_GPR_U32(ctx, 31, 0x298020u);
    ctx->pc = 0x29801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298018u;
    // 0x29801c: 0xa6420016  sh          $v0, 0x16($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x298018u, 0x298020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298020u;
label_298020:
    // 0x298020: 0x7bb002f0  lq          $s0, 0x2F0($sp)
    ctx->pc = 0x298020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_298024:
    // 0x298024: 0x7bb102e0  lq          $s1, 0x2E0($sp)
    ctx->pc = 0x298024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_298028:
    // 0x298028: 0x7bb202d0  lq          $s2, 0x2D0($sp)
    ctx->pc = 0x298028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_29802c:
    // 0x29802c: 0x7bb302c0  lq          $s3, 0x2C0($sp)
    ctx->pc = 0x29802cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_298030:
    // 0x298030: 0x7bb402b0  lq          $s4, 0x2B0($sp)
    ctx->pc = 0x298030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_298034:
    // 0x298034: 0x7bb502a0  lq          $s5, 0x2A0($sp)
    ctx->pc = 0x298034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_298038:
    // 0x298038: 0x7bb60290  lq          $s6, 0x290($sp)
    ctx->pc = 0x298038u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_29803c:
    // 0x29803c: 0x7bb70280  lq          $s7, 0x280($sp)
    ctx->pc = 0x29803cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_298040:
    // 0x298040: 0x7bbe0270  lq          $fp, 0x270($sp)
    ctx->pc = 0x298040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_298044:
    // 0x298044: 0xdfbf0260  ld          $ra, 0x260($sp)
    ctx->pc = 0x298044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_298048:
    // 0x298048: 0xc7b40300  lwc1        $f20, 0x300($sp)
    ctx->pc = 0x298048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29804c:
    // 0x29804c: 0x3e00008  jr          $ra
label_298050:
    if (ctx->pc == 0x298050u) {
        ctx->pc = 0x298050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29804Cu;
        // 0x298050: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298054u;
        goto label_298054;
    }
    ctx->pc = 0x29804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29804Cu;
        // 0x298050: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29804Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298054u;
label_298054:
    // 0x298054: 0x0  nop
    ctx->pc = 0x298054u;
    // NOP
    ctx->pc = 0x298058u;
}

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

// Function: sub_001D4F20
// Address: 0x1d4f20 - 0x1d52c8
void sub_001D4F20_0x1d4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4F20_0x1d4f20");
#endif

    switch (ctx->pc) {
        case 0x1d4f20u: goto label_1d4f20;
        case 0x1d4f24u: goto label_1d4f24;
        case 0x1d4f28u: goto label_1d4f28;
        case 0x1d4f2cu: goto label_1d4f2c;
        case 0x1d4f30u: goto label_1d4f30;
        case 0x1d4f34u: goto label_1d4f34;
        case 0x1d4f38u: goto label_1d4f38;
        case 0x1d4f3cu: goto label_1d4f3c;
        case 0x1d4f40u: goto label_1d4f40;
        case 0x1d4f44u: goto label_1d4f44;
        case 0x1d4f48u: goto label_1d4f48;
        case 0x1d4f4cu: goto label_1d4f4c;
        case 0x1d4f50u: goto label_1d4f50;
        case 0x1d4f54u: goto label_1d4f54;
        case 0x1d4f58u: goto label_1d4f58;
        case 0x1d4f5cu: goto label_1d4f5c;
        case 0x1d4f60u: goto label_1d4f60;
        case 0x1d4f64u: goto label_1d4f64;
        case 0x1d4f68u: goto label_1d4f68;
        case 0x1d4f6cu: goto label_1d4f6c;
        case 0x1d4f70u: goto label_1d4f70;
        case 0x1d4f74u: goto label_1d4f74;
        case 0x1d4f78u: goto label_1d4f78;
        case 0x1d4f7cu: goto label_1d4f7c;
        case 0x1d4f80u: goto label_1d4f80;
        case 0x1d4f84u: goto label_1d4f84;
        case 0x1d4f88u: goto label_1d4f88;
        case 0x1d4f8cu: goto label_1d4f8c;
        case 0x1d4f90u: goto label_1d4f90;
        case 0x1d4f94u: goto label_1d4f94;
        case 0x1d4f98u: goto label_1d4f98;
        case 0x1d4f9cu: goto label_1d4f9c;
        case 0x1d4fa0u: goto label_1d4fa0;
        case 0x1d4fa4u: goto label_1d4fa4;
        case 0x1d4fa8u: goto label_1d4fa8;
        case 0x1d4facu: goto label_1d4fac;
        case 0x1d4fb0u: goto label_1d4fb0;
        case 0x1d4fb4u: goto label_1d4fb4;
        case 0x1d4fb8u: goto label_1d4fb8;
        case 0x1d4fbcu: goto label_1d4fbc;
        case 0x1d4fc0u: goto label_1d4fc0;
        case 0x1d4fc4u: goto label_1d4fc4;
        case 0x1d4fc8u: goto label_1d4fc8;
        case 0x1d4fccu: goto label_1d4fcc;
        case 0x1d4fd0u: goto label_1d4fd0;
        case 0x1d4fd4u: goto label_1d4fd4;
        case 0x1d4fd8u: goto label_1d4fd8;
        case 0x1d4fdcu: goto label_1d4fdc;
        case 0x1d4fe0u: goto label_1d4fe0;
        case 0x1d4fe4u: goto label_1d4fe4;
        case 0x1d4fe8u: goto label_1d4fe8;
        case 0x1d4fecu: goto label_1d4fec;
        case 0x1d4ff0u: goto label_1d4ff0;
        case 0x1d4ff4u: goto label_1d4ff4;
        case 0x1d4ff8u: goto label_1d4ff8;
        case 0x1d4ffcu: goto label_1d4ffc;
        case 0x1d5000u: goto label_1d5000;
        case 0x1d5004u: goto label_1d5004;
        case 0x1d5008u: goto label_1d5008;
        case 0x1d500cu: goto label_1d500c;
        case 0x1d5010u: goto label_1d5010;
        case 0x1d5014u: goto label_1d5014;
        case 0x1d5018u: goto label_1d5018;
        case 0x1d501cu: goto label_1d501c;
        case 0x1d5020u: goto label_1d5020;
        case 0x1d5024u: goto label_1d5024;
        case 0x1d5028u: goto label_1d5028;
        case 0x1d502cu: goto label_1d502c;
        case 0x1d5030u: goto label_1d5030;
        case 0x1d5034u: goto label_1d5034;
        case 0x1d5038u: goto label_1d5038;
        case 0x1d503cu: goto label_1d503c;
        case 0x1d5040u: goto label_1d5040;
        case 0x1d5044u: goto label_1d5044;
        case 0x1d5048u: goto label_1d5048;
        case 0x1d504cu: goto label_1d504c;
        case 0x1d5050u: goto label_1d5050;
        case 0x1d5054u: goto label_1d5054;
        case 0x1d5058u: goto label_1d5058;
        case 0x1d505cu: goto label_1d505c;
        case 0x1d5060u: goto label_1d5060;
        case 0x1d5064u: goto label_1d5064;
        case 0x1d5068u: goto label_1d5068;
        case 0x1d506cu: goto label_1d506c;
        case 0x1d5070u: goto label_1d5070;
        case 0x1d5074u: goto label_1d5074;
        case 0x1d5078u: goto label_1d5078;
        case 0x1d507cu: goto label_1d507c;
        case 0x1d5080u: goto label_1d5080;
        case 0x1d5084u: goto label_1d5084;
        case 0x1d5088u: goto label_1d5088;
        case 0x1d508cu: goto label_1d508c;
        case 0x1d5090u: goto label_1d5090;
        case 0x1d5094u: goto label_1d5094;
        case 0x1d5098u: goto label_1d5098;
        case 0x1d509cu: goto label_1d509c;
        case 0x1d50a0u: goto label_1d50a0;
        case 0x1d50a4u: goto label_1d50a4;
        case 0x1d50a8u: goto label_1d50a8;
        case 0x1d50acu: goto label_1d50ac;
        case 0x1d50b0u: goto label_1d50b0;
        case 0x1d50b4u: goto label_1d50b4;
        case 0x1d50b8u: goto label_1d50b8;
        case 0x1d50bcu: goto label_1d50bc;
        case 0x1d50c0u: goto label_1d50c0;
        case 0x1d50c4u: goto label_1d50c4;
        case 0x1d50c8u: goto label_1d50c8;
        case 0x1d50ccu: goto label_1d50cc;
        case 0x1d50d0u: goto label_1d50d0;
        case 0x1d50d4u: goto label_1d50d4;
        case 0x1d50d8u: goto label_1d50d8;
        case 0x1d50dcu: goto label_1d50dc;
        case 0x1d50e0u: goto label_1d50e0;
        case 0x1d50e4u: goto label_1d50e4;
        case 0x1d50e8u: goto label_1d50e8;
        case 0x1d50ecu: goto label_1d50ec;
        case 0x1d50f0u: goto label_1d50f0;
        case 0x1d50f4u: goto label_1d50f4;
        case 0x1d50f8u: goto label_1d50f8;
        case 0x1d50fcu: goto label_1d50fc;
        case 0x1d5100u: goto label_1d5100;
        case 0x1d5104u: goto label_1d5104;
        case 0x1d5108u: goto label_1d5108;
        case 0x1d510cu: goto label_1d510c;
        case 0x1d5110u: goto label_1d5110;
        case 0x1d5114u: goto label_1d5114;
        case 0x1d5118u: goto label_1d5118;
        case 0x1d511cu: goto label_1d511c;
        case 0x1d5120u: goto label_1d5120;
        case 0x1d5124u: goto label_1d5124;
        case 0x1d5128u: goto label_1d5128;
        case 0x1d512cu: goto label_1d512c;
        case 0x1d5130u: goto label_1d5130;
        case 0x1d5134u: goto label_1d5134;
        case 0x1d5138u: goto label_1d5138;
        case 0x1d513cu: goto label_1d513c;
        case 0x1d5140u: goto label_1d5140;
        case 0x1d5144u: goto label_1d5144;
        case 0x1d5148u: goto label_1d5148;
        case 0x1d514cu: goto label_1d514c;
        case 0x1d5150u: goto label_1d5150;
        case 0x1d5154u: goto label_1d5154;
        case 0x1d5158u: goto label_1d5158;
        case 0x1d515cu: goto label_1d515c;
        case 0x1d5160u: goto label_1d5160;
        case 0x1d5164u: goto label_1d5164;
        case 0x1d5168u: goto label_1d5168;
        case 0x1d516cu: goto label_1d516c;
        case 0x1d5170u: goto label_1d5170;
        case 0x1d5174u: goto label_1d5174;
        case 0x1d5178u: goto label_1d5178;
        case 0x1d517cu: goto label_1d517c;
        case 0x1d5180u: goto label_1d5180;
        case 0x1d5184u: goto label_1d5184;
        case 0x1d5188u: goto label_1d5188;
        case 0x1d518cu: goto label_1d518c;
        case 0x1d5190u: goto label_1d5190;
        case 0x1d5194u: goto label_1d5194;
        case 0x1d5198u: goto label_1d5198;
        case 0x1d519cu: goto label_1d519c;
        case 0x1d51a0u: goto label_1d51a0;
        case 0x1d51a4u: goto label_1d51a4;
        case 0x1d51a8u: goto label_1d51a8;
        case 0x1d51acu: goto label_1d51ac;
        case 0x1d51b0u: goto label_1d51b0;
        case 0x1d51b4u: goto label_1d51b4;
        case 0x1d51b8u: goto label_1d51b8;
        case 0x1d51bcu: goto label_1d51bc;
        case 0x1d51c0u: goto label_1d51c0;
        case 0x1d51c4u: goto label_1d51c4;
        case 0x1d51c8u: goto label_1d51c8;
        case 0x1d51ccu: goto label_1d51cc;
        case 0x1d51d0u: goto label_1d51d0;
        case 0x1d51d4u: goto label_1d51d4;
        case 0x1d51d8u: goto label_1d51d8;
        case 0x1d51dcu: goto label_1d51dc;
        case 0x1d51e0u: goto label_1d51e0;
        case 0x1d51e4u: goto label_1d51e4;
        case 0x1d51e8u: goto label_1d51e8;
        case 0x1d51ecu: goto label_1d51ec;
        case 0x1d51f0u: goto label_1d51f0;
        case 0x1d51f4u: goto label_1d51f4;
        case 0x1d51f8u: goto label_1d51f8;
        case 0x1d51fcu: goto label_1d51fc;
        case 0x1d5200u: goto label_1d5200;
        case 0x1d5204u: goto label_1d5204;
        case 0x1d5208u: goto label_1d5208;
        case 0x1d520cu: goto label_1d520c;
        case 0x1d5210u: goto label_1d5210;
        case 0x1d5214u: goto label_1d5214;
        case 0x1d5218u: goto label_1d5218;
        case 0x1d521cu: goto label_1d521c;
        case 0x1d5220u: goto label_1d5220;
        case 0x1d5224u: goto label_1d5224;
        case 0x1d5228u: goto label_1d5228;
        case 0x1d522cu: goto label_1d522c;
        case 0x1d5230u: goto label_1d5230;
        case 0x1d5234u: goto label_1d5234;
        case 0x1d5238u: goto label_1d5238;
        case 0x1d523cu: goto label_1d523c;
        case 0x1d5240u: goto label_1d5240;
        case 0x1d5244u: goto label_1d5244;
        case 0x1d5248u: goto label_1d5248;
        case 0x1d524cu: goto label_1d524c;
        case 0x1d5250u: goto label_1d5250;
        case 0x1d5254u: goto label_1d5254;
        case 0x1d5258u: goto label_1d5258;
        case 0x1d525cu: goto label_1d525c;
        case 0x1d5260u: goto label_1d5260;
        case 0x1d5264u: goto label_1d5264;
        case 0x1d5268u: goto label_1d5268;
        case 0x1d526cu: goto label_1d526c;
        case 0x1d5270u: goto label_1d5270;
        case 0x1d5274u: goto label_1d5274;
        case 0x1d5278u: goto label_1d5278;
        case 0x1d527cu: goto label_1d527c;
        case 0x1d5280u: goto label_1d5280;
        case 0x1d5284u: goto label_1d5284;
        case 0x1d5288u: goto label_1d5288;
        case 0x1d528cu: goto label_1d528c;
        case 0x1d5290u: goto label_1d5290;
        case 0x1d5294u: goto label_1d5294;
        case 0x1d5298u: goto label_1d5298;
        case 0x1d529cu: goto label_1d529c;
        case 0x1d52a0u: goto label_1d52a0;
        case 0x1d52a4u: goto label_1d52a4;
        case 0x1d52a8u: goto label_1d52a8;
        case 0x1d52acu: goto label_1d52ac;
        case 0x1d52b0u: goto label_1d52b0;
        case 0x1d52b4u: goto label_1d52b4;
        case 0x1d52b8u: goto label_1d52b8;
        case 0x1d52bcu: goto label_1d52bc;
        case 0x1d52c0u: goto label_1d52c0;
        case 0x1d52c4u: goto label_1d52c4;
        default: break;
    }

    ctx->pc = 0x1d4f20u;

label_1d4f20:
    // 0x1d4f20: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_1d4f24:
    // 0x1d4f24: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x1d4f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
label_1d4f28:
    // 0x1d4f28: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x1d4f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
label_1d4f2c:
    // 0x1d4f2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d4f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f30:
    // 0x1d4f30: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x1d4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
label_1d4f34:
    // 0x1d4f34: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x1d4f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
label_1d4f38:
    // 0x1d4f38: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x1d4f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
label_1d4f3c:
    // 0x1d4f3c: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x1d4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
label_1d4f40:
    // 0x1d4f40: 0x7fb60210  sq          $s6, 0x210($sp)
    ctx->pc = 0x1d4f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 22));
label_1d4f44:
    // 0x1d4f44: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x1d4f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
label_1d4f48:
    // 0x1d4f48: 0x7fbe01f0  sq          $fp, 0x1F0($sp)
    ctx->pc = 0x1d4f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 30));
label_1d4f4c:
    // 0x1d4f4c: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x1d4f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
label_1d4f50:
    // 0x1d4f50: 0xe7b60290  swc1        $f22, 0x290($sp)
    ctx->pc = 0x1d4f50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_1d4f54:
    // 0x1d4f54: 0xe7b50288  swc1        $f21, 0x288($sp)
    ctx->pc = 0x1d4f54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_1d4f58:
    // 0x1d4f58: 0xe7b40280  swc1        $f20, 0x280($sp)
    ctx->pc = 0x1d4f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1d4f5c:
    // 0x1d4f5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d4f60:
    // 0x1d4f60: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d4f64:
    // 0x1d4f64: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d4f68:
    // 0x1d4f68: 0x40f809  jalr        $v0
label_1d4f6c:
    if (ctx->pc == 0x1D4F6Cu) {
        ctx->pc = 0x1D4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F68u;
        // 0x1d4f6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F70u;
        goto label_1d4f70;
    }
    ctx->pc = 0x1D4F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4F70u);
        ctx->pc = 0x1D4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F68u;
        // 0x1d4f6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4F68u, 0x1D4F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4F70u;
label_1d4f70:
    // 0x1d4f70: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
label_1d4f74:
    if (ctx->pc == 0x1D4F74u) {
        ctx->pc = 0x1D4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F70u;
        // 0x1d4f74: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F78u;
        goto label_1d4f78;
    }
    ctx->pc = 0x1D4F70u;
    {
        const bool branch_taken_0x1d4f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F70u;
        // 0x1d4f74: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f70) {
            ctx->pc = 0x1D5290u;
            goto label_1d5290;
        }
    }
    ctx->pc = 0x1D4F78u;
label_1d4f78:
    // 0x1d4f78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d4f7c:
    // 0x1d4f7c: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1d4f7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1d4f80:
    // 0x1d4f80: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1d4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1d4f84:
    // 0x1d4f84: 0x40f809  jalr        $v0
label_1d4f88:
    if (ctx->pc == 0x1D4F88u) {
        ctx->pc = 0x1D4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F84u;
        // 0x1d4f88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F8Cu;
        goto label_1d4f8c;
    }
    ctx->pc = 0x1D4F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4F8Cu);
        ctx->pc = 0x1D4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F84u;
        // 0x1d4f88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4F84u, 0x1D4F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4F8Cu;
label_1d4f8c:
    // 0x1d4f8c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1d4f90:
    if (ctx->pc == 0x1D4F90u) {
        ctx->pc = 0x1D4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F8Cu;
        // 0x1d4f90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F94u;
        goto label_1d4f94;
    }
    ctx->pc = 0x1D4F8Cu;
    {
        const bool branch_taken_0x1d4f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F8Cu;
        // 0x1d4f90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f8c) {
            ctx->pc = 0x1D5004u;
            goto label_1d5004;
        }
    }
    ctx->pc = 0x1D4F94u;
label_1d4f94:
    // 0x1d4f94: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1d4f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1d4f98:
    // 0x1d4f98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4f9c:
    // 0x1d4f9c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d4f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d4fa0:
    // 0x1d4fa0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d4fa4:
    // 0x1d4fa4: 0x40f809  jalr        $v0
label_1d4fa8:
    if (ctx->pc == 0x1D4FA8u) {
        ctx->pc = 0x1D4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FA4u;
        // 0x1d4fa8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FACu;
        goto label_1d4fac;
    }
    ctx->pc = 0x1D4FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4FACu);
        ctx->pc = 0x1D4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FA4u;
        // 0x1d4fa8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4FA4u, 0x1D4FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4FACu;
label_1d4fac:
    // 0x1d4fac: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x1d4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_1d4fb0:
    // 0x1d4fb0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1d4fb4:
    // 0x1d4fb4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1d4fb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d4fb8:
    // 0x1d4fb8: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_1d4fbc:
    if (ctx->pc == 0x1D4FBCu) {
        ctx->pc = 0x1D4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FB8u;
        // 0x1d4fbc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FC0u;
        goto label_1d4fc0;
    }
    ctx->pc = 0x1D4FB8u;
    {
        const bool branch_taken_0x1d4fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fb8) {
            ctx->pc = 0x1D4FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4FB8u;
            // 0x1d4fbc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5008u;
            goto label_1d5008;
        }
    }
    ctx->pc = 0x1D4FC0u;
label_1d4fc0:
    // 0x1d4fc0: 0xc05181e  jal         func_146078
label_1d4fc4:
    if (ctx->pc == 0x1D4FC4u) {
        ctx->pc = 0x1D4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FC0u;
        // 0x1d4fc4: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FC8u;
        goto label_1d4fc8;
    }
    ctx->pc = 0x1D4FC0u;
    SET_GPR_U32(ctx, 31, 0x1D4FC8u);
    ctx->pc = 0x1D4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FC0u;
    // 0x1d4fc4: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1D4FC0u, 0x1D4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FC8u;
label_1d4fc8:
    // 0x1d4fc8: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x1d4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_1d4fcc:
    // 0x1d4fcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d4fd0:
    if (ctx->pc == 0x1D4FD0u) {
        ctx->pc = 0x1D4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FCCu;
        // 0x1d4fd0: 0x26700050  addiu       $s0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FD4u;
        goto label_1d4fd4;
    }
    ctx->pc = 0x1D4FCCu;
    {
        const bool branch_taken_0x1d4fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FCCu;
        // 0x1d4fd0: 0x26700050  addiu       $s0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fcc) {
            ctx->pc = 0x1D4FE8u;
            goto label_1d4fe8;
        }
    }
    ctx->pc = 0x1D4FD4u;
label_1d4fd4:
    // 0x1d4fd4: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1d4fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1d4fd8:
    // 0x1d4fd8: 0xc07a546  jal         func_1E9518
label_1d4fdc:
    if (ctx->pc == 0x1D4FDCu) {
        ctx->pc = 0x1D4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FD8u;
        // 0x1d4fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FE0u;
        goto label_1d4fe0;
    }
    ctx->pc = 0x1D4FD8u;
    SET_GPR_U32(ctx, 31, 0x1D4FE0u);
    ctx->pc = 0x1D4FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FD8u;
    // 0x1d4fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1D4FD8u, 0x1D4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FE0u;
label_1d4fe0:
    // 0x1d4fe0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d4fe4:
    if (ctx->pc == 0x1D4FE4u) {
        ctx->pc = 0x1D4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FE0u;
        // 0x1d4fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FE8u;
        goto label_1d4fe8;
    }
    ctx->pc = 0x1D4FE0u;
    {
        const bool branch_taken_0x1d4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FE0u;
        // 0x1d4fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fe0) {
            ctx->pc = 0x1D4FF8u;
            goto label_1d4ff8;
        }
    }
    ctx->pc = 0x1D4FE8u;
label_1d4fe8:
    // 0x1d4fe8: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1d4fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1d4fec:
    // 0x1d4fec: 0xc07a4f0  jal         func_1E93C0
label_1d4ff0:
    if (ctx->pc == 0x1D4FF0u) {
        ctx->pc = 0x1D4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FECu;
        // 0x1d4ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FF4u;
        goto label_1d4ff4;
    }
    ctx->pc = 0x1D4FECu;
    SET_GPR_U32(ctx, 31, 0x1D4FF4u);
    ctx->pc = 0x1D4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FECu;
    // 0x1d4ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1D4FECu, 0x1D4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FF4u;
label_1d4ff4:
    // 0x1d4ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ff8:
    // 0x1d4ff8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1d4ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1d4ffc:
    // 0x1d4ffc: 0xc07a51a  jal         func_1E9468
label_1d5000:
    if (ctx->pc == 0x1D5000u) {
        ctx->pc = 0x1D5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FFCu;
        // 0x1d5000: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5004u;
        goto label_1d5004;
    }
    ctx->pc = 0x1D4FFCu;
    SET_GPR_U32(ctx, 31, 0x1D5004u);
    ctx->pc = 0x1D5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FFCu;
    // 0x1d5000: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1D4FFCu, 0x1D5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5004u;
label_1d5004:
    // 0x1d5004: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1d5004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1d5008:
    // 0x1d5008: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_1d500c:
    if (ctx->pc == 0x1D500Cu) {
        ctx->pc = 0x1D500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5008u;
        // 0x1d500c: 0x26620070  addiu       $v0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5010u;
        goto label_1d5010;
    }
    ctx->pc = 0x1D5008u;
    {
        const bool branch_taken_0x1d5008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5008u;
        // 0x1d500c: 0x26620070  addiu       $v0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5008) {
            ctx->pc = 0x1D528Cu;
            goto label_1d528c;
        }
    }
    ctx->pc = 0x1D5010u;
label_1d5010:
    // 0x1d5010: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d5010u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5014:
    // 0x1d5014: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d5014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d5018:
    // 0x1d5018: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d5018u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d501c:
    // 0x1d501c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d5020:
    // 0x1d5020: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d5020u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d5024:
    // 0x1d5024: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1d5024u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1d5028:
    // 0x1d5028: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x1d5028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1d502c:
    // 0x1d502c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d5030:
    if (ctx->pc == 0x1D5030u) {
        ctx->pc = 0x1D5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D502Cu;
        // 0x1d5030: 0xc6750028  lwc1        $f21, 0x28($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5034u;
        goto label_1d5034;
    }
    ctx->pc = 0x1D502Cu;
    {
        const bool branch_taken_0x1d502c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D502Cu;
        // 0x1d5030: 0xc6750028  lwc1        $f21, 0x28($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d502c) {
            ctx->pc = 0x1D5038u;
            goto label_1d5038;
        }
    }
    ctx->pc = 0x1D5034u;
label_1d5034:
    // 0x1d5034: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x1d5034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_1d5038:
    // 0x1d5038: 0xae6000ac  sw          $zero, 0xAC($s3)
    ctx->pc = 0x1d5038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
label_1d503c:
    // 0x1d503c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1d503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1d5040:
    // 0x1d5040: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1d5044:
    // 0x1d5044: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d5048:
    // 0x1d5048: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d504c:
    // 0x1d504c: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_1d5050:
    if (ctx->pc == 0x1D5050u) {
        ctx->pc = 0x1D5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D504Cu;
        // 0x1d5050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5054u;
        goto label_1d5054;
    }
    ctx->pc = 0x1D504Cu;
    {
        const bool branch_taken_0x1d504c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D504Cu;
        // 0x1d5050: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d504c) {
            ctx->pc = 0x1D527Cu;
            goto label_1d527c;
        }
    }
    ctx->pc = 0x1D5054u;
label_1d5054:
    // 0x1d5054: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1d5054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d5058:
    // 0x1d5058: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1d505c:
    // 0x1d505c: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x1d505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_1d5060:
    // 0x1d5060: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x1d5060u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d5064:
    // 0x1d5064: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1d5064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1d5068:
    // 0x1d5068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d506c:
    // 0x1d506c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1d506cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1d5070:
    // 0x1d5070: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x1d5070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
label_1d5074:
    // 0x1d5074: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x1d5074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_1d5078:
    // 0x1d5078: 0xafa001d4  sw          $zero, 0x1D4($sp)
    ctx->pc = 0x1d5078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
label_1d507c:
    // 0x1d507c: 0x8e6200ac  lw          $v0, 0xAC($s3)
    ctx->pc = 0x1d507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_1d5080:
    // 0x1d5080: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d5080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d5084:
    // 0x1d5084: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d5084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d5088:
    // 0x1d5088: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1d5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1d508c:
    // 0x1d508c: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x1d508cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_1d5090:
    // 0x1d5090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d5094:
    // 0x1d5094: 0xae6200ac  sw          $v0, 0xAC($s3)
    ctx->pc = 0x1d5094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 2));
label_1d5098:
    // 0x1d5098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d509c:
    // 0x1d509c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d509cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d50a0:
    // 0x1d50a0: 0x8c7200b0  lw          $s2, 0xB0($v1)
    ctx->pc = 0x1d50a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_1d50a4:
    // 0x1d50a4: 0x8fa601c8  lw          $a2, 0x1C8($sp)
    ctx->pc = 0x1d50a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_1d50a8:
    // 0x1d50a8: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x1d50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_1d50ac:
    // 0x1d50ac: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x1d50acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d50b0:
    // 0x1d50b0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1d50b4:
    // 0x1d50b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d50b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1d50b8:
    // 0x1d50b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1d50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1d50bc:
    // 0x1d50bc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d50bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1d50c0:
    // 0x1d50c0: 0x2ce20032  sltiu       $v0, $a3, 0x32
    ctx->pc = 0x1d50c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_1d50c4:
    // 0x1d50c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1d50c8:
    if (ctx->pc == 0x1D50C8u) {
        ctx->pc = 0x1D50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50C4u;
        // 0x1d50c8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50CCu;
        goto label_1d50cc;
    }
    ctx->pc = 0x1D50C4u;
    {
        const bool branch_taken_0x1d50c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50C4u;
        // 0x1d50c8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50c4) {
            ctx->pc = 0x1D50B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d50b0;
        }
    }
    ctx->pc = 0x1D50CCu;
label_1d50cc:
    // 0x1d50cc: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x1d50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_1d50d0:
    // 0x1d50d0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1d50d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d50d4:
    // 0x1d50d4: 0x297b02b  sltu        $s6, $s4, $s7
    ctx->pc = 0x1d50d4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_1d50d8:
    // 0x1d50d8: 0x16c00013  bnez        $s6, . + 4 + (0x13 << 2)
label_1d50dc:
    if (ctx->pc == 0x1D50DCu) {
        ctx->pc = 0x1D50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50D8u;
        // 0x1d50dc: 0xafa301cc  sw          $v1, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50E0u;
        goto label_1d50e0;
    }
    ctx->pc = 0x1D50D8u;
    {
        const bool branch_taken_0x1d50d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50D8u;
        // 0x1d50dc: 0xafa301cc  sw          $v1, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50d8) {
            ctx->pc = 0x1D5128u;
            goto label_1d5128;
        }
    }
    ctx->pc = 0x1D50E0u;
label_1d50e0:
    // 0x1d50e0: 0x7e8821  addu        $s1, $v1, $fp
    ctx->pc = 0x1d50e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1d50e4:
    // 0x1d50e4: 0x0  nop
    ctx->pc = 0x1d50e4u;
    // NOP
label_1d50e8:
    // 0x1d50e8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1d50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1d50ec:
    // 0x1d50ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1d50f0:
    // 0x1d50f0: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x1d50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1d50f4:
    // 0x1d50f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d50f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d50f8:
    // 0x1d50f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d50fc:
    // 0x1d50fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d50fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5100:
    // 0x1d5100: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d5100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d5104:
    // 0x1d5104: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1d5104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d5108:
    // 0x1d5108: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1d5108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d510c:
    // 0x1d510c: 0xc0f809  jalr        $a2
label_1d5110:
    if (ctx->pc == 0x1D5110u) {
        ctx->pc = 0x1D5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D510Cu;
        // 0x1d5110: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5114u;
        goto label_1d5114;
    }
    ctx->pc = 0x1D510Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1D5114u);
        ctx->pc = 0x1D5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D510Cu;
        // 0x1d5110: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D510Cu, 0x1D5114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5114u;
label_1d5114:
    // 0x1d5114: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1d5114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5118:
    // 0x1d5118: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x1d5118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1d511c:
    // 0x1d511c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1d511cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1d5120:
    // 0x1d5120: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_1d5124:
    if (ctx->pc == 0x1D5124u) {
        ctx->pc = 0x1D5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5120u;
        // 0x1d5124: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5128u;
        goto label_1d5128;
    }
    ctx->pc = 0x1D5120u;
    {
        const bool branch_taken_0x1d5120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5120u;
        // 0x1d5124: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5120) {
            ctx->pc = 0x1D50E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d50e8;
        }
    }
    ctx->pc = 0x1D5128u;
label_1d5128:
    // 0x1d5128: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x1d5128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_1d512c:
    // 0x1d512c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1d5130:
    if (ctx->pc == 0x1D5130u) {
        ctx->pc = 0x1D5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D512Cu;
        // 0x1d5130: 0xc66c008c  lwc1        $f12, 0x8C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5134u;
        goto label_1d5134;
    }
    ctx->pc = 0x1D512Cu;
    {
        const bool branch_taken_0x1d512c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d512c) {
            ctx->pc = 0x1D5130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D512Cu;
            // 0x1d5130: 0xc66c008c  lwc1        $f12, 0x8C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5150u;
            goto label_1d5150;
        }
    }
    ctx->pc = 0x1D5134u;
label_1d5134:
    // 0x1d5134: 0xc66c0090  lwc1        $f12, 0x90($s3)
    ctx->pc = 0x1d5134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d5138:
    // 0x1d5138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d513c:
    // 0x1d513c: 0x8fa601c8  lw          $a2, 0x1C8($sp)
    ctx->pc = 0x1d513cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_1d5140:
    // 0x1d5140: 0xc06d776  jal         func_1B5DD8
label_1d5144:
    if (ctx->pc == 0x1D5144u) {
        ctx->pc = 0x1D5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5140u;
        // 0x1d5144: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5148u;
        goto label_1d5148;
    }
    ctx->pc = 0x1D5140u;
    SET_GPR_U32(ctx, 31, 0x1D5148u);
    ctx->pc = 0x1D5144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5140u;
    // 0x1d5144: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5DD8u, 0x1D5140u, 0x1D5148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5148u;
label_1d5148:
    // 0x1d5148: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d514c:
    if (ctx->pc == 0x1D514Cu) {
        ctx->pc = 0x1D514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5148u;
        // 0x1d514c: 0x8fa201c0  lw          $v0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5150u;
        goto label_1d5150;
    }
    ctx->pc = 0x1D5148u;
    {
        const bool branch_taken_0x1d5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5148u;
        // 0x1d514c: 0x8fa201c0  lw          $v0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5148) {
            ctx->pc = 0x1D5164u;
            goto label_1d5164;
        }
    }
    ctx->pc = 0x1D5150u;
label_1d5150:
    // 0x1d5150: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5154:
    // 0x1d5154: 0x8fa601c8  lw          $a2, 0x1C8($sp)
    ctx->pc = 0x1d5154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_1d5158:
    // 0x1d5158: 0xc06d798  jal         func_1B5E60
label_1d515c:
    if (ctx->pc == 0x1D515Cu) {
        ctx->pc = 0x1D515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5158u;
        // 0x1d515c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5160u;
        goto label_1d5160;
    }
    ctx->pc = 0x1D5158u;
    SET_GPR_U32(ctx, 31, 0x1D5160u);
    ctx->pc = 0x1D515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5158u;
    // 0x1d515c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5E60u, 0x1D5158u, 0x1D5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5160u;
label_1d5160:
    // 0x1d5160: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1d5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1d5164:
    // 0x1d5164: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x1d5164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d5168:
    // 0x1d5168: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x1d5168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_1d516c:
    // 0x1d516c: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x1d516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
label_1d5170:
    // 0x1d5170: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1d5170u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_1d5174:
    // 0x1d5174: 0x16c0001f  bnez        $s6, . + 4 + (0x1F << 2)
label_1d5178:
    if (ctx->pc == 0x1D5178u) {
        ctx->pc = 0x1D5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5174u;
        // 0x1d5178: 0xe456000c  swc1        $f22, 0xC($v0) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D517Cu;
        goto label_1d517c;
    }
    ctx->pc = 0x1D5174u;
    {
        const bool branch_taken_0x1d5174 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5174u;
        // 0x1d5178: 0xe456000c  swc1        $f22, 0xC($v0) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5174) {
            ctx->pc = 0x1D51F4u;
            goto label_1d51f4;
        }
    }
    ctx->pc = 0x1D517Cu;
label_1d517c:
    // 0x1d517c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d517cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1d5180:
    // 0x1d5180: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d5180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d5184:
    // 0x1d5184: 0x8fb001c8  lw          $s0, 0x1C8($sp)
    ctx->pc = 0x1d5184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_1d5188:
    // 0x1d5188: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1d5188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d518c:
    // 0x1d518c: 0x0  nop
    ctx->pc = 0x1d518cu;
    // NOP
label_1d5190:
    // 0x1d5190: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1d5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1d5194:
    // 0x1d5194: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d5194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d5198:
    // 0x1d5198: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1d5198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d519c:
    // 0x1d519c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d51a0:
    // 0x1d51a0: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x1d51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_1d51a4:
    // 0x1d51a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d51a8:
    // 0x1d51a8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1d51ac:
    if (ctx->pc == 0x1D51ACu) {
        ctx->pc = 0x1D51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51A8u;
        // 0x1d51ac: 0xe7a101a0  swc1        $f1, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51B0u;
        goto label_1d51b0;
    }
    ctx->pc = 0x1D51A8u;
    {
        const bool branch_taken_0x1d51a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51A8u;
        // 0x1d51ac: 0xe7a101a0  swc1        $f1, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51a8) {
            ctx->pc = 0x1D51C0u;
            goto label_1d51c0;
        }
    }
    ctx->pc = 0x1D51B0u;
label_1d51b0:
    // 0x1d51b0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d51b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d51b4:
    // 0x1d51b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1d51b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1d51b8:
    // 0x1d51b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d51b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d51bc:
    // 0x1d51bc: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1d51bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_1d51c0:
    // 0x1d51c0: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1d51c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_1d51c4:
    // 0x1d51c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d51c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d51c8:
    // 0x1d51c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d51c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d51cc:
    // 0x1d51cc: 0xc074f24  jal         func_1D3C90
label_1d51d0:
    if (ctx->pc == 0x1D51D0u) {
        ctx->pc = 0x1D51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51CCu;
        // 0x1d51d0: 0x27defffc  addiu       $fp, $fp, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51D4u;
        goto label_1d51d4;
    }
    ctx->pc = 0x1D51CCu;
    SET_GPR_U32(ctx, 31, 0x1D51D4u);
    ctx->pc = 0x1D51D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51CCu;
    // 0x1d51d0: 0x27defffc  addiu       $fp, $fp, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C90u, 0x1D51CCu, 0x1D51D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51D4u;
label_1d51d4:
    // 0x1d51d4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1d51d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1d51d8:
    // 0x1d51d8: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1d51d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_1d51dc:
    // 0x1d51dc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d51dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1d51e0:
    // 0x1d51e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1d51e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1d51e4:
    // 0x1d51e4: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1d51e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1d51e8:
    // 0x1d51e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d51ec:
    // 0x1d51ec: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
label_1d51f0:
    if (ctx->pc == 0x1D51F0u) {
        ctx->pc = 0x1D51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51ECu;
        // 0x1d51f0: 0xafa301d4  sw          $v1, 0x1D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51F4u;
        goto label_1d51f4;
    }
    ctx->pc = 0x1D51ECu;
    {
        const bool branch_taken_0x1d51ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51ECu;
        // 0x1d51f0: 0xafa301d4  sw          $v1, 0x1D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51ec) {
            ctx->pc = 0x1D5190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5190;
        }
    }
    ctx->pc = 0x1D51F4u;
label_1d51f4:
    // 0x1d51f4: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x1d51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_1d51f8:
    // 0x1d51f8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1d51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1d51fc:
    // 0x1d51fc: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x1d51fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_1d5200:
    // 0x1d5200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d5204:
    // 0x1d5204: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d5204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5208:
    // 0x1d5208: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d520c:
    // 0x1d520c: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1d520cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1d5210:
    // 0x1d5210: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1d5210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1d5214:
    // 0x1d5214: 0x40f809  jalr        $v0
label_1d5218:
    if (ctx->pc == 0x1D5218u) {
        ctx->pc = 0x1D5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5214u;
        // 0x1d5218: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D521Cu;
        goto label_1d521c;
    }
    ctx->pc = 0x1D5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D521Cu);
        ctx->pc = 0x1D5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5214u;
        // 0x1d5218: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5214u, 0x1D521Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D521Cu;
label_1d521c:
    // 0x1d521c: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x1d521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5220:
    // 0x1d5220: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x1d5220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5224:
    // 0x1d5224: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5228:
    // 0x1d5228: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d5228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d522c:
    // 0x1d522c: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x1d522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_1d5230:
    // 0x1d5230: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1d5230u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d5234:
    // 0x1d5234: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d5234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d5238:
    // 0x1d5238: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x1d5238u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_1d523c:
    // 0x1d523c: 0x60f809  jalr        $v1
label_1d5240:
    if (ctx->pc == 0x1D5240u) {
        ctx->pc = 0x1D5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D523Cu;
        // 0x1d5240: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5244u;
        goto label_1d5244;
    }
    ctx->pc = 0x1D523Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D5244u);
        ctx->pc = 0x1D5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D523Cu;
        // 0x1d5240: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D523Cu, 0x1D5244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5244u;
label_1d5244:
    // 0x1d5244: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x1d5244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5248:
    // 0x1d5248: 0xc66100a0  lwc1        $f1, 0xA0($s3)
    ctx->pc = 0x1d5248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d524c:
    // 0x1d524c: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x1d524cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_1d5250:
    // 0x1d5250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d5250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d5254:
    // 0x1d5254: 0x2c820032  sltiu       $v0, $a0, 0x32
    ctx->pc = 0x1d5254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_1d5258:
    // 0x1d5258: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d525c:
    if (ctx->pc == 0x1D525Cu) {
        ctx->pc = 0x1D525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5258u;
        // 0x1d525c: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5260u;
        goto label_1d5260;
    }
    ctx->pc = 0x1D5258u;
    {
        const bool branch_taken_0x1d5258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5258u;
        // 0x1d525c: 0xe6600038  swc1        $f0, 0x38($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5258) {
            ctx->pc = 0x1D527Cu;
            goto label_1d527c;
        }
    }
    ctx->pc = 0x1D5260u;
label_1d5260:
    // 0x1d5260: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1d5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1d5264:
    // 0x1d5264: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1d5264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1d5268:
    // 0x1d5268: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d5268u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d526c:
    // 0x1d526c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d526cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d5270:
    // 0x1d5270: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x1d5270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d5274:
    // 0x1d5274: 0x5440ff82  bnel        $v0, $zero, . + 4 + (-0x7E << 2)
label_1d5278:
    if (ctx->pc == 0x1D5278u) {
        ctx->pc = 0x1D5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5274u;
        // 0x1d5278: 0x8e6200ac  lw          $v0, 0xAC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D527Cu;
        goto label_1d527c;
    }
    ctx->pc = 0x1D5274u;
    {
        const bool branch_taken_0x1d5274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5274) {
            ctx->pc = 0x1D5278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5274u;
            // 0x1d5278: 0x8e6200ac  lw          $v0, 0xAC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5080;
        }
    }
    ctx->pc = 0x1D527Cu;
label_1d527c:
    // 0x1d527c: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x1d527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5280:
    // 0x1d5280: 0xc66100a0  lwc1        $f1, 0xA0($s3)
    ctx->pc = 0x1d5280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5284:
    // 0x1d5284: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d5284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d5288:
    // 0x1d5288: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x1d5288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_1d528c:
    // 0x1d528c: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x1d528cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_1d5290:
    // 0x1d5290: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x1d5290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_1d5294:
    // 0x1d5294: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x1d5294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_1d5298:
    // 0x1d5298: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x1d5298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_1d529c:
    // 0x1d529c: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x1d529cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_1d52a0:
    // 0x1d52a0: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x1d52a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_1d52a4:
    // 0x1d52a4: 0x7bb60210  lq          $s6, 0x210($sp)
    ctx->pc = 0x1d52a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1d52a8:
    // 0x1d52a8: 0x7bb70200  lq          $s7, 0x200($sp)
    ctx->pc = 0x1d52a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1d52ac:
    // 0x1d52ac: 0x7bbe01f0  lq          $fp, 0x1F0($sp)
    ctx->pc = 0x1d52acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1d52b0:
    // 0x1d52b0: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x1d52b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_1d52b4:
    // 0x1d52b4: 0xc7b60290  lwc1        $f22, 0x290($sp)
    ctx->pc = 0x1d52b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d52b8:
    // 0x1d52b8: 0xc7b50288  lwc1        $f21, 0x288($sp)
    ctx->pc = 0x1d52b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d52bc:
    // 0x1d52bc: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x1d52bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d52c0:
    // 0x1d52c0: 0x3e00008  jr          $ra
label_1d52c4:
    if (ctx->pc == 0x1D52C4u) {
        ctx->pc = 0x1D52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52C0u;
        // 0x1d52c4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D52C8u;
        goto label_fallthrough_0x1d52c0;
    }
    ctx->pc = 0x1D52C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52C0u;
        // 0x1d52c4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D52C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d52c0:
    ctx->pc = 0x1D52C8u;
}

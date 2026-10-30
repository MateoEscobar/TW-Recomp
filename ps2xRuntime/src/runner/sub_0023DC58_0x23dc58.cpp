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

// Function: sub_0023DC58
// Address: 0x23dc58 - 0x23e090
void sub_0023DC58_0x23dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DC58_0x23dc58");
#endif

    switch (ctx->pc) {
        case 0x23dc58u: goto label_23dc58;
        case 0x23dc5cu: goto label_23dc5c;
        case 0x23dc60u: goto label_23dc60;
        case 0x23dc64u: goto label_23dc64;
        case 0x23dc68u: goto label_23dc68;
        case 0x23dc6cu: goto label_23dc6c;
        case 0x23dc70u: goto label_23dc70;
        case 0x23dc74u: goto label_23dc74;
        case 0x23dc78u: goto label_23dc78;
        case 0x23dc7cu: goto label_23dc7c;
        case 0x23dc80u: goto label_23dc80;
        case 0x23dc84u: goto label_23dc84;
        case 0x23dc88u: goto label_23dc88;
        case 0x23dc8cu: goto label_23dc8c;
        case 0x23dc90u: goto label_23dc90;
        case 0x23dc94u: goto label_23dc94;
        case 0x23dc98u: goto label_23dc98;
        case 0x23dc9cu: goto label_23dc9c;
        case 0x23dca0u: goto label_23dca0;
        case 0x23dca4u: goto label_23dca4;
        case 0x23dca8u: goto label_23dca8;
        case 0x23dcacu: goto label_23dcac;
        case 0x23dcb0u: goto label_23dcb0;
        case 0x23dcb4u: goto label_23dcb4;
        case 0x23dcb8u: goto label_23dcb8;
        case 0x23dcbcu: goto label_23dcbc;
        case 0x23dcc0u: goto label_23dcc0;
        case 0x23dcc4u: goto label_23dcc4;
        case 0x23dcc8u: goto label_23dcc8;
        case 0x23dcccu: goto label_23dccc;
        case 0x23dcd0u: goto label_23dcd0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dcd8u: goto label_23dcd8;
        case 0x23dcdcu: goto label_23dcdc;
        case 0x23dce0u: goto label_23dce0;
        case 0x23dce4u: goto label_23dce4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dcecu: goto label_23dcec;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dcf4u: goto label_23dcf4;
        case 0x23dcf8u: goto label_23dcf8;
        case 0x23dcfcu: goto label_23dcfc;
        case 0x23dd00u: goto label_23dd00;
        case 0x23dd04u: goto label_23dd04;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd0cu: goto label_23dd0c;
        case 0x23dd10u: goto label_23dd10;
        case 0x23dd14u: goto label_23dd14;
        case 0x23dd18u: goto label_23dd18;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd28u: goto label_23dd28;
        case 0x23dd2cu: goto label_23dd2c;
        case 0x23dd30u: goto label_23dd30;
        case 0x23dd34u: goto label_23dd34;
        case 0x23dd38u: goto label_23dd38;
        case 0x23dd3cu: goto label_23dd3c;
        case 0x23dd40u: goto label_23dd40;
        case 0x23dd44u: goto label_23dd44;
        case 0x23dd48u: goto label_23dd48;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd50u: goto label_23dd50;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd58u: goto label_23dd58;
        case 0x23dd5cu: goto label_23dd5c;
        case 0x23dd60u: goto label_23dd60;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd68u: goto label_23dd68;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd70u: goto label_23dd70;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd78u: goto label_23dd78;
        case 0x23dd7cu: goto label_23dd7c;
        case 0x23dd80u: goto label_23dd80;
        case 0x23dd84u: goto label_23dd84;
        case 0x23dd88u: goto label_23dd88;
        case 0x23dd8cu: goto label_23dd8c;
        case 0x23dd90u: goto label_23dd90;
        case 0x23dd94u: goto label_23dd94;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dd9cu: goto label_23dd9c;
        case 0x23dda0u: goto label_23dda0;
        case 0x23dda4u: goto label_23dda4;
        case 0x23dda8u: goto label_23dda8;
        case 0x23ddacu: goto label_23ddac;
        case 0x23ddb0u: goto label_23ddb0;
        case 0x23ddb4u: goto label_23ddb4;
        case 0x23ddb8u: goto label_23ddb8;
        case 0x23ddbcu: goto label_23ddbc;
        case 0x23ddc0u: goto label_23ddc0;
        case 0x23ddc4u: goto label_23ddc4;
        case 0x23ddc8u: goto label_23ddc8;
        case 0x23ddccu: goto label_23ddcc;
        case 0x23ddd0u: goto label_23ddd0;
        case 0x23ddd4u: goto label_23ddd4;
        case 0x23ddd8u: goto label_23ddd8;
        case 0x23dddcu: goto label_23dddc;
        case 0x23dde0u: goto label_23dde0;
        case 0x23dde4u: goto label_23dde4;
        case 0x23dde8u: goto label_23dde8;
        case 0x23ddecu: goto label_23ddec;
        case 0x23ddf0u: goto label_23ddf0;
        case 0x23ddf4u: goto label_23ddf4;
        case 0x23ddf8u: goto label_23ddf8;
        case 0x23ddfcu: goto label_23ddfc;
        case 0x23de00u: goto label_23de00;
        case 0x23de04u: goto label_23de04;
        case 0x23de08u: goto label_23de08;
        case 0x23de0cu: goto label_23de0c;
        case 0x23de10u: goto label_23de10;
        case 0x23de14u: goto label_23de14;
        case 0x23de18u: goto label_23de18;
        case 0x23de1cu: goto label_23de1c;
        case 0x23de20u: goto label_23de20;
        case 0x23de24u: goto label_23de24;
        case 0x23de28u: goto label_23de28;
        case 0x23de2cu: goto label_23de2c;
        case 0x23de30u: goto label_23de30;
        case 0x23de34u: goto label_23de34;
        case 0x23de38u: goto label_23de38;
        case 0x23de3cu: goto label_23de3c;
        case 0x23de40u: goto label_23de40;
        case 0x23de44u: goto label_23de44;
        case 0x23de48u: goto label_23de48;
        case 0x23de4cu: goto label_23de4c;
        case 0x23de50u: goto label_23de50;
        case 0x23de54u: goto label_23de54;
        case 0x23de58u: goto label_23de58;
        case 0x23de5cu: goto label_23de5c;
        case 0x23de60u: goto label_23de60;
        case 0x23de64u: goto label_23de64;
        case 0x23de68u: goto label_23de68;
        case 0x23de6cu: goto label_23de6c;
        case 0x23de70u: goto label_23de70;
        case 0x23de74u: goto label_23de74;
        case 0x23de78u: goto label_23de78;
        case 0x23de7cu: goto label_23de7c;
        case 0x23de80u: goto label_23de80;
        case 0x23de84u: goto label_23de84;
        case 0x23de88u: goto label_23de88;
        case 0x23de8cu: goto label_23de8c;
        case 0x23de90u: goto label_23de90;
        case 0x23de94u: goto label_23de94;
        case 0x23de98u: goto label_23de98;
        case 0x23de9cu: goto label_23de9c;
        case 0x23dea0u: goto label_23dea0;
        case 0x23dea4u: goto label_23dea4;
        case 0x23dea8u: goto label_23dea8;
        case 0x23deacu: goto label_23deac;
        case 0x23deb0u: goto label_23deb0;
        case 0x23deb4u: goto label_23deb4;
        case 0x23deb8u: goto label_23deb8;
        case 0x23debcu: goto label_23debc;
        case 0x23dec0u: goto label_23dec0;
        case 0x23dec4u: goto label_23dec4;
        case 0x23dec8u: goto label_23dec8;
        case 0x23deccu: goto label_23decc;
        case 0x23ded0u: goto label_23ded0;
        case 0x23ded4u: goto label_23ded4;
        case 0x23ded8u: goto label_23ded8;
        case 0x23dedcu: goto label_23dedc;
        case 0x23dee0u: goto label_23dee0;
        case 0x23dee4u: goto label_23dee4;
        case 0x23dee8u: goto label_23dee8;
        case 0x23deecu: goto label_23deec;
        case 0x23def0u: goto label_23def0;
        case 0x23def4u: goto label_23def4;
        case 0x23def8u: goto label_23def8;
        case 0x23defcu: goto label_23defc;
        case 0x23df00u: goto label_23df00;
        case 0x23df04u: goto label_23df04;
        case 0x23df08u: goto label_23df08;
        case 0x23df0cu: goto label_23df0c;
        case 0x23df10u: goto label_23df10;
        case 0x23df14u: goto label_23df14;
        case 0x23df18u: goto label_23df18;
        case 0x23df1cu: goto label_23df1c;
        case 0x23df20u: goto label_23df20;
        case 0x23df24u: goto label_23df24;
        case 0x23df28u: goto label_23df28;
        case 0x23df2cu: goto label_23df2c;
        case 0x23df30u: goto label_23df30;
        case 0x23df34u: goto label_23df34;
        case 0x23df38u: goto label_23df38;
        case 0x23df3cu: goto label_23df3c;
        case 0x23df40u: goto label_23df40;
        case 0x23df44u: goto label_23df44;
        case 0x23df48u: goto label_23df48;
        case 0x23df4cu: goto label_23df4c;
        case 0x23df50u: goto label_23df50;
        case 0x23df54u: goto label_23df54;
        case 0x23df58u: goto label_23df58;
        case 0x23df5cu: goto label_23df5c;
        case 0x23df60u: goto label_23df60;
        case 0x23df64u: goto label_23df64;
        case 0x23df68u: goto label_23df68;
        case 0x23df6cu: goto label_23df6c;
        case 0x23df70u: goto label_23df70;
        case 0x23df74u: goto label_23df74;
        case 0x23df78u: goto label_23df78;
        case 0x23df7cu: goto label_23df7c;
        case 0x23df80u: goto label_23df80;
        case 0x23df84u: goto label_23df84;
        case 0x23df88u: goto label_23df88;
        case 0x23df8cu: goto label_23df8c;
        case 0x23df90u: goto label_23df90;
        case 0x23df94u: goto label_23df94;
        case 0x23df98u: goto label_23df98;
        case 0x23df9cu: goto label_23df9c;
        case 0x23dfa0u: goto label_23dfa0;
        case 0x23dfa4u: goto label_23dfa4;
        case 0x23dfa8u: goto label_23dfa8;
        case 0x23dfacu: goto label_23dfac;
        case 0x23dfb0u: goto label_23dfb0;
        case 0x23dfb4u: goto label_23dfb4;
        case 0x23dfb8u: goto label_23dfb8;
        case 0x23dfbcu: goto label_23dfbc;
        case 0x23dfc0u: goto label_23dfc0;
        case 0x23dfc4u: goto label_23dfc4;
        case 0x23dfc8u: goto label_23dfc8;
        case 0x23dfccu: goto label_23dfcc;
        case 0x23dfd0u: goto label_23dfd0;
        case 0x23dfd4u: goto label_23dfd4;
        case 0x23dfd8u: goto label_23dfd8;
        case 0x23dfdcu: goto label_23dfdc;
        case 0x23dfe0u: goto label_23dfe0;
        case 0x23dfe4u: goto label_23dfe4;
        case 0x23dfe8u: goto label_23dfe8;
        case 0x23dfecu: goto label_23dfec;
        case 0x23dff0u: goto label_23dff0;
        case 0x23dff4u: goto label_23dff4;
        case 0x23dff8u: goto label_23dff8;
        case 0x23dffcu: goto label_23dffc;
        case 0x23e000u: goto label_23e000;
        case 0x23e004u: goto label_23e004;
        case 0x23e008u: goto label_23e008;
        case 0x23e00cu: goto label_23e00c;
        case 0x23e010u: goto label_23e010;
        case 0x23e014u: goto label_23e014;
        case 0x23e018u: goto label_23e018;
        case 0x23e01cu: goto label_23e01c;
        case 0x23e020u: goto label_23e020;
        case 0x23e024u: goto label_23e024;
        case 0x23e028u: goto label_23e028;
        case 0x23e02cu: goto label_23e02c;
        case 0x23e030u: goto label_23e030;
        case 0x23e034u: goto label_23e034;
        case 0x23e038u: goto label_23e038;
        case 0x23e03cu: goto label_23e03c;
        case 0x23e040u: goto label_23e040;
        case 0x23e044u: goto label_23e044;
        case 0x23e048u: goto label_23e048;
        case 0x23e04cu: goto label_23e04c;
        case 0x23e050u: goto label_23e050;
        case 0x23e054u: goto label_23e054;
        case 0x23e058u: goto label_23e058;
        case 0x23e05cu: goto label_23e05c;
        case 0x23e060u: goto label_23e060;
        case 0x23e064u: goto label_23e064;
        case 0x23e068u: goto label_23e068;
        case 0x23e06cu: goto label_23e06c;
        case 0x23e070u: goto label_23e070;
        case 0x23e074u: goto label_23e074;
        case 0x23e078u: goto label_23e078;
        case 0x23e07cu: goto label_23e07c;
        case 0x23e080u: goto label_23e080;
        case 0x23e084u: goto label_23e084;
        case 0x23e088u: goto label_23e088;
        case 0x23e08cu: goto label_23e08c;
        default: break;
    }

    ctx->pc = 0x23dc58u;

label_23dc58:
    // 0x23dc58: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x23dc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_23dc5c:
    // 0x23dc5c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x23dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_23dc60:
    // 0x23dc60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23dc60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23dc64:
    // 0x23dc64: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x23dc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_23dc68:
    // 0x23dc68: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x23dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_23dc6c:
    // 0x23dc6c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x23dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_23dc70:
    // 0x23dc70: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23dc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23dc74:
    // 0x23dc74: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x23dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_23dc78:
    // 0x23dc78: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x23dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_23dc7c:
    // 0x23dc7c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x23dc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_23dc80:
    // 0x23dc80: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x23dc80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_23dc84:
    // 0x23dc84: 0xc087502  jal         func_21D408
label_23dc88:
    if (ctx->pc == 0x23DC88u) {
        ctx->pc = 0x23DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC84u;
        // 0x23dc88: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC8Cu;
        goto label_23dc8c;
    }
    ctx->pc = 0x23DC84u;
    SET_GPR_U32(ctx, 31, 0x23DC8Cu);
    ctx->pc = 0x23DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC84u;
    // 0x23dc88: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23DC84u, 0x23DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC8Cu;
label_23dc8c:
    // 0x23dc8c: 0x245000e0  addiu       $s0, $v0, 0xE0
    ctx->pc = 0x23dc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_23dc90:
    // 0x23dc90: 0x8e4201a4  lw          $v0, 0x1A4($s2)
    ctx->pc = 0x23dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
label_23dc94:
    // 0x23dc94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23dc98:
    if (ctx->pc == 0x23DC98u) {
        ctx->pc = 0x23DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC94u;
        // 0x23dc98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DC9Cu;
        goto label_23dc9c;
    }
    ctx->pc = 0x23DC94u;
    {
        const bool branch_taken_0x23dc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC94u;
        // 0x23dc98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc94) {
            ctx->pc = 0x23DCA8u;
            goto label_23dca8;
        }
    }
    ctx->pc = 0x23DC9Cu;
label_23dc9c:
    // 0x23dc9c: 0xc08750a  jal         func_21D428
label_23dca0:
    if (ctx->pc == 0x23DCA0u) {
        ctx->pc = 0x23DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC9Cu;
        // 0x23dca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCA4u;
        goto label_23dca4;
    }
    ctx->pc = 0x23DC9Cu;
    SET_GPR_U32(ctx, 31, 0x23DCA4u);
    ctx->pc = 0x23DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DC9Cu;
    // 0x23dca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x23DC9Cu, 0x23DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCA4u;
label_23dca4:
    // 0x23dca4: 0xa0510274  sb          $s1, 0x274($v0)
    ctx->pc = 0x23dca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 628), (uint8_t)GPR_U32(ctx, 17));
label_23dca8:
    // 0x23dca8: 0xc0874fa  jal         func_21D3E8
label_23dcac:
    if (ctx->pc == 0x23DCACu) {
        ctx->pc = 0x23DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCA8u;
        // 0x23dcac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCB0u;
        goto label_23dcb0;
    }
    ctx->pc = 0x23DCA8u;
    SET_GPR_U32(ctx, 31, 0x23DCB0u);
    ctx->pc = 0x23DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCA8u;
    // 0x23dcac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x23DCA8u, 0x23DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCB0u;
label_23dcb0:
    // 0x23dcb0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x23dcb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_23dcb4:
    // 0x23dcb4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_23dcb8:
    if (ctx->pc == 0x23DCB8u) {
        ctx->pc = 0x23DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB4u;
        // 0x23dcb8: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCBCu;
        goto label_23dcbc;
    }
    ctx->pc = 0x23DCB4u;
    {
        const bool branch_taken_0x23dcb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB4u;
        // 0x23dcb8: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcb4) {
            ctx->pc = 0x23DCD8u;
            goto label_23dcd8;
        }
    }
    ctx->pc = 0x23DCBCu;
label_23dcbc:
    // 0x23dcbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23dcc0:
    // 0x23dcc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23dcc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23dcc4:
    // 0x23dcc4: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
label_23dcc8:
    if (ctx->pc == 0x23DCC8u) {
        ctx->pc = 0x23DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCC4u;
        // 0x23dcc8: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCCCu;
        goto label_23dccc;
    }
    ctx->pc = 0x23DCC4u;
    {
        const bool branch_taken_0x23dcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x23DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCC4u;
        // 0x23dcc8: 0x26420090  addiu       $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcc4) {
            ctx->pc = 0x23DCD8u;
            goto label_23dcd8;
        }
    }
    ctx->pc = 0x23DCCCu;
label_23dccc:
    // 0x23dccc: 0xc0a6bf8  jal         func_29AFE0
label_23dcd0:
    if (ctx->pc == 0x23DCD0u) {
        ctx->pc = 0x23DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCCCu;
        // 0x23dcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCD4u;
        goto label_23dcd4;
    }
    ctx->pc = 0x23DCCCu;
    SET_GPR_U32(ctx, 31, 0x23DCD4u);
    ctx->pc = 0x23DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCCCu;
    // 0x23dcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFE0u, 0x23DCCCu, 0x23DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCD4u;
label_23dcd4:
    // 0x23dcd4: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x23dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_23dcd8:
    // 0x23dcd8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x23dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_23dcdc:
    // 0x23dcdc: 0x84500002  lh          $s0, 0x2($v0)
    ctx->pc = 0x23dcdcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_23dce0:
    // 0x23dce0: 0x24734b00  addiu       $s3, $v1, 0x4B00
    ctx->pc = 0x23dce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_23dce4:
    // 0x23dce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23dce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23dce8:
    // 0x23dce8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23dce8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23dcec:
    // 0x23dcec: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x23dcecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_23dcf0:
    // 0x23dcf0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x23dcf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23dcf4:
    // 0x23dcf4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x23dcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_23dcf8:
    // 0x23dcf8: 0xc0e87c0  jal         func_3A1F00
label_23dcfc:
    if (ctx->pc == 0x23DCFCu) {
        ctx->pc = 0x23DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCF8u;
        // 0x23dcfc: 0x265102c0  addiu       $s1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD00u;
        goto label_23dd00;
    }
    ctx->pc = 0x23DCF8u;
    SET_GPR_U32(ctx, 31, 0x23DD00u);
    ctx->pc = 0x23DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCF8u;
    // 0x23dcfc: 0x265102c0  addiu       $s1, $s2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23DCF8u, 0x23DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD00u;
label_23dd00:
    // 0x23dd00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_23dd04:
    // 0x23dd04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23dd04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_23dd08:
    // 0x23dd08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23dd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23dd0c:
    // 0x23dd0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23dd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23dd10:
    // 0x23dd10: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23dd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_23dd14:
    // 0x23dd14: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x23dd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_23dd18:
    // 0x23dd18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23dd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23dd1c:
    // 0x23dd1c: 0xc0d3dd0  jal         func_34F740
label_23dd20:
    if (ctx->pc == 0x23DD20u) {
        ctx->pc = 0x23DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD1Cu;
        // 0x23dd20: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD24u;
        goto label_23dd24;
    }
    ctx->pc = 0x23DD1Cu;
    SET_GPR_U32(ctx, 31, 0x23DD24u);
    ctx->pc = 0x23DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD1Cu;
    // 0x23dd20: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F740u, 0x23DD1Cu, 0x23DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD24u;
label_23dd24:
    // 0x23dd24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23dd28:
    if (ctx->pc == 0x23DD28u) {
        ctx->pc = 0x23DD2Cu;
        goto label_23dd2c;
    }
    ctx->pc = 0x23DD24u;
    {
        const bool branch_taken_0x23dd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dd24) {
            ctx->pc = 0x23DD40u;
            goto label_23dd40;
        }
    }
    ctx->pc = 0x23DD2Cu;
label_23dd2c:
    // 0x23dd2c: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x23dd2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_23dd30:
    // 0x23dd30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23dd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23dd34:
    // 0x23dd34: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x23dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_23dd38:
    // 0x23dd38: 0xc091e82  jal         func_247A08
label_23dd3c:
    if (ctx->pc == 0x23DD3Cu) {
        ctx->pc = 0x23DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD38u;
        // 0x23dd3c: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD40u;
        goto label_23dd40;
    }
    ctx->pc = 0x23DD38u;
    SET_GPR_U32(ctx, 31, 0x23DD40u);
    ctx->pc = 0x23DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD38u;
    // 0x23dd3c: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A08u, 0x23DD38u, 0x23DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD40u;
label_23dd40:
    // 0x23dd40: 0xc0e8856  jal         func_3A2158
label_23dd44:
    if (ctx->pc == 0x23DD44u) {
        ctx->pc = 0x23DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD40u;
        // 0x23dd44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD48u;
        goto label_23dd48;
    }
    ctx->pc = 0x23DD40u;
    SET_GPR_U32(ctx, 31, 0x23DD48u);
    ctx->pc = 0x23DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD40u;
    // 0x23dd44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2158u, 0x23DD40u, 0x23DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD48u;
label_23dd48:
    // 0x23dd48: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23dd4c:
    // 0x23dd4c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x23dd4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_23dd50:
    // 0x23dd50: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x23dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_23dd54:
    // 0x23dd54: 0x40f809  jalr        $v0
label_23dd58:
    if (ctx->pc == 0x23DD58u) {
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD54u;
        // 0x23dd58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD5Cu;
        goto label_23dd5c;
    }
    ctx->pc = 0x23DD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DD5Cu);
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD54u;
        // 0x23dd58: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DD54u, 0x23DD5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DD5Cu;
label_23dd5c:
    // 0x23dd5c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_23dd60:
    if (ctx->pc == 0x23DD60u) {
        ctx->pc = 0x23DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD5Cu;
        // 0x23dd60: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD64u;
        goto label_23dd64;
    }
    ctx->pc = 0x23DD5Cu;
    {
        const bool branch_taken_0x23dd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd5c) {
            ctx->pc = 0x23DD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD5Cu;
            // 0x23dd60: 0x824201b0  lb          $v0, 0x1B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DDC0u;
            goto label_23ddc0;
        }
    }
    ctx->pc = 0x23DD64u;
label_23dd64:
    // 0x23dd64: 0xc089a76  jal         func_2269D8
label_23dd68:
    if (ctx->pc == 0x23DD68u) {
        ctx->pc = 0x23DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD64u;
        // 0x23dd68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD6Cu;
        goto label_23dd6c;
    }
    ctx->pc = 0x23DD64u;
    SET_GPR_U32(ctx, 31, 0x23DD6Cu);
    ctx->pc = 0x23DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD64u;
    // 0x23dd68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x23DD64u, 0x23DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD6Cu;
label_23dd6c:
    // 0x23dd6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23dd70:
    if (ctx->pc == 0x23DD70u) {
        ctx->pc = 0x23DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD6Cu;
        // 0x23dd70: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD74u;
        goto label_23dd74;
    }
    ctx->pc = 0x23DD6Cu;
    {
        const bool branch_taken_0x23dd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD6Cu;
        // 0x23dd70: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd6c) {
            ctx->pc = 0x23DD8Cu;
            goto label_23dd8c;
        }
    }
    ctx->pc = 0x23DD74u;
label_23dd74:
    // 0x23dd74: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x23dd74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_23dd78:
    // 0x23dd78: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x23dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_23dd7c:
    // 0x23dd7c: 0x40f809  jalr        $v0
label_23dd80:
    if (ctx->pc == 0x23DD80u) {
        ctx->pc = 0x23DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD7Cu;
        // 0x23dd80: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD84u;
        goto label_23dd84;
    }
    ctx->pc = 0x23DD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DD84u);
        ctx->pc = 0x23DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD7Cu;
        // 0x23dd80: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DD7Cu, 0x23DD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DD84u;
label_23dd84:
    // 0x23dd84: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x23dd84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_23dd88:
    // 0x23dd88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23dd8c:
    // 0x23dd8c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x23dd8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_23dd90:
    // 0x23dd90: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x23dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_23dd94:
    // 0x23dd94: 0x40f809  jalr        $v0
label_23dd98:
    if (ctx->pc == 0x23DD98u) {
        ctx->pc = 0x23DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD94u;
        // 0x23dd98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD9Cu;
        goto label_23dd9c;
    }
    ctx->pc = 0x23DD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DD9Cu);
        ctx->pc = 0x23DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD94u;
        // 0x23dd98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DD94u, 0x23DD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DD9Cu;
label_23dd9c:
    // 0x23dd9c: 0x8c480074  lw          $t0, 0x74($v0)
    ctx->pc = 0x23dd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_23dda0:
    // 0x23dda0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23dda4:
    // 0x23dda4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23dda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23dda8:
    // 0x23dda8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23dda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ddac:
    // 0x23ddac: 0x85040028  lh          $a0, 0x28($t0)
    ctx->pc = 0x23ddacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_23ddb0:
    // 0x23ddb0: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x23ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_23ddb4:
    // 0x23ddb4: 0x60f809  jalr        $v1
label_23ddb8:
    if (ctx->pc == 0x23DDB8u) {
        ctx->pc = 0x23DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB4u;
        // 0x23ddb8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDBCu;
        goto label_23ddbc;
    }
    ctx->pc = 0x23DDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23DDBCu);
        ctx->pc = 0x23DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDB4u;
        // 0x23ddb8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DDB4u, 0x23DDBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DDBCu;
label_23ddbc:
    // 0x23ddbc: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x23ddbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23ddc0:
    // 0x23ddc0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23ddc0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23ddc4:
    // 0x23ddc4: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_23ddc8:
    if (ctx->pc == 0x23DDC8u) {
        ctx->pc = 0x23DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC4u;
        // 0x23ddc8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDCCu;
        goto label_23ddcc;
    }
    ctx->pc = 0x23DDC4u;
    {
        const bool branch_taken_0x23ddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDC4u;
        // 0x23ddc8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddc4) {
            ctx->pc = 0x23E068u;
            goto label_23e068;
        }
    }
    ctx->pc = 0x23DDCCu;
label_23ddcc:
    // 0x23ddcc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23ddccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23ddd0:
    // 0x23ddd0: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x23ddd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_23ddd4:
    // 0x23ddd4: 0xc08997c  jal         func_2265F0
label_23ddd8:
    if (ctx->pc == 0x23DDD8u) {
        ctx->pc = 0x23DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDD4u;
        // 0x23ddd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDDCu;
        goto label_23dddc;
    }
    ctx->pc = 0x23DDD4u;
    SET_GPR_U32(ctx, 31, 0x23DDDCu);
    ctx->pc = 0x23DDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DDD4u;
    // 0x23ddd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x23DDD4u, 0x23DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DDDCu;
label_23dddc:
    // 0x23dddc: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_23dde0:
    if (ctx->pc == 0x23DDE0u) {
        ctx->pc = 0x23DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDDCu;
        // 0x23dde0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DDE4u;
        goto label_23dde4;
    }
    ctx->pc = 0x23DDDCu;
    {
        const bool branch_taken_0x23dddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDDCu;
        // 0x23dde0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dddc) {
            ctx->pc = 0x23E068u;
            goto label_23e068;
        }
    }
    ctx->pc = 0x23DDE4u;
label_23dde4:
    // 0x23dde4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23dde8:
    // 0x23dde8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23ddec:
    // 0x23ddec: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_23ddf0:
    // 0x23ddf0: 0x8c65b198  lw          $a1, -0x4E68($v1)
    ctx->pc = 0x23ddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_23ddf4:
    // 0x23ddf4: 0x84820224  lh          $v0, 0x224($a0)
    ctx->pc = 0x23ddf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 548)));
label_23ddf8:
    // 0x23ddf8: 0x1445009c  bne         $v0, $a1, . + 4 + (0x9C << 2)
label_23ddfc:
    if (ctx->pc == 0x23DDFCu) {
        ctx->pc = 0x23DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDF8u;
        // 0x23ddfc: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE00u;
        goto label_23de00;
    }
    ctx->pc = 0x23DDF8u;
    {
        const bool branch_taken_0x23ddf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x23DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DDF8u;
        // 0x23ddfc: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddf8) {
            ctx->pc = 0x23E06Cu;
            goto label_23e06c;
        }
    }
    ctx->pc = 0x23DE00u;
label_23de00:
    // 0x23de00: 0xc048892  jal         func_122248
label_23de04:
    if (ctx->pc == 0x23DE04u) {
        ctx->pc = 0x23DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE00u;
        // 0x23de04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE08u;
        goto label_23de08;
    }
    ctx->pc = 0x23DE00u;
    SET_GPR_U32(ctx, 31, 0x23DE08u);
    ctx->pc = 0x23DE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE00u;
    // 0x23de04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x23DE00u, 0x23DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE08u;
label_23de08:
    // 0x23de08: 0x50400097  beql        $v0, $zero, . + 4 + (0x97 << 2)
label_23de0c:
    if (ctx->pc == 0x23DE0Cu) {
        ctx->pc = 0x23DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE08u;
        // 0x23de0c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE10u;
        goto label_23de10;
    }
    ctx->pc = 0x23DE08u;
    {
        const bool branch_taken_0x23de08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de08) {
            ctx->pc = 0x23DE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DE08u;
            // 0x23de0c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E068u;
            goto label_23e068;
        }
    }
    ctx->pc = 0x23DE10u;
label_23de10:
    // 0x23de10: 0xc047e6c  jal         func_11F9B0
label_23de14:
    if (ctx->pc == 0x23DE14u) {
        ctx->pc = 0x23DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE10u;
        // 0x23de14: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE18u;
        goto label_23de18;
    }
    ctx->pc = 0x23DE10u;
    SET_GPR_U32(ctx, 31, 0x23DE18u);
    ctx->pc = 0x23DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE10u;
    // 0x23de14: 0x824401b0  lb          $a0, 0x1B0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x23DE10u, 0x23DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE18u;
label_23de18:
    // 0x23de18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23de1c:
    // 0x23de1c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_23de20:
    // 0x23de20: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x23de20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_23de24:
    // 0x23de24: 0xa0f809  jalr        $a1
label_23de28:
    if (ctx->pc == 0x23DE28u) {
        ctx->pc = 0x23DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE24u;
        // 0x23de28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE2Cu;
        goto label_23de2c;
    }
    ctx->pc = 0x23DE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x23DE2Cu);
        ctx->pc = 0x23DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE24u;
        // 0x23de28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DE24u, 0x23DE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DE2Cu;
label_23de2c:
    // 0x23de2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23de30:
    // 0x23de30: 0x1443008d  bne         $v0, $v1, . + 4 + (0x8D << 2)
label_23de34:
    if (ctx->pc == 0x23DE34u) {
        ctx->pc = 0x23DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE30u;
        // 0x23de34: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE38u;
        goto label_23de38;
    }
    ctx->pc = 0x23DE30u;
    {
        const bool branch_taken_0x23de30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE30u;
        // 0x23de34: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de30) {
            ctx->pc = 0x23E068u;
            goto label_23e068;
        }
    }
    ctx->pc = 0x23DE38u;
label_23de38:
    // 0x23de38: 0xc0e87c0  jal         func_3A1F00
label_23de3c:
    if (ctx->pc == 0x23DE3Cu) {
        ctx->pc = 0x23DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE38u;
        // 0x23de3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE40u;
        goto label_23de40;
    }
    ctx->pc = 0x23DE38u;
    SET_GPR_U32(ctx, 31, 0x23DE40u);
    ctx->pc = 0x23DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE38u;
    // 0x23de3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23DE38u, 0x23DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE40u;
label_23de40:
    // 0x23de40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23de40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23de44:
    // 0x23de44: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23de44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23de48:
    // 0x23de48: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x23de48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23de4c:
    // 0x23de4c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23de4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23de50:
    // 0x23de50: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x23de50u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_23de54:
    // 0x23de54: 0x4a0003bf  vwaitq
    ctx->pc = 0x23de54u;
    // VWAITQ (Q already resolved in this runtime)
label_23de58:
    // 0x23de58: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x23de58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23de5c:
    // 0x23de5c: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x23de5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_23de60:
    // 0x23de60: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x23de60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23de64:
    // 0x23de64: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23de68:
    // 0x23de68: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x23de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_23de6c:
    // 0x23de6c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x23de6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_23de70:
    // 0x23de70: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x23de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_23de74:
    // 0x23de74: 0x60f809  jalr        $v1
label_23de78:
    if (ctx->pc == 0x23DE78u) {
        ctx->pc = 0x23DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE74u;
        // 0x23de78: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE7Cu;
        goto label_23de7c;
    }
    ctx->pc = 0x23DE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23DE7Cu);
        ctx->pc = 0x23DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE74u;
        // 0x23de78: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DE74u, 0x23DE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DE7Cu;
label_23de7c:
    // 0x23de7c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x23de7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_23de80:
    // 0x23de80: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x23de80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_23de84:
    // 0x23de84: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x23de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_23de88:
    // 0x23de88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23de88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23de8c:
    // 0x23de8c: 0xc136b24  jal         func_4DAC90
label_23de90:
    if (ctx->pc == 0x23DE90u) {
        ctx->pc = 0x23DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DE8Cu;
        // 0x23de90: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DE94u;
        goto label_23de94;
    }
    ctx->pc = 0x23DE8Cu;
    SET_GPR_U32(ctx, 31, 0x23DE94u);
    ctx->pc = 0x23DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DE8Cu;
    // 0x23de90: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23DE8Cu, 0x23DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DE94u;
label_23de94:
    // 0x23de94: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x23de94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_23de98:
    // 0x23de98: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x23de98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_23de9c:
    // 0x23de9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23de9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23dea0:
    // 0x23dea0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x23dea0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_23dea4:
    // 0x23dea4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x23dea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23dea8:
    // 0x23dea8: 0x0  nop
    ctx->pc = 0x23dea8u;
    // NOP
label_23deac:
    // 0x23deac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_23deb0:
    if (ctx->pc == 0x23DEB0u) {
        ctx->pc = 0x23DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEACu;
        // 0x23deb0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEB4u;
        goto label_23deb4;
    }
    ctx->pc = 0x23DEACu;
    {
        const bool branch_taken_0x23deac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEACu;
        // 0x23deb0: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23deac) {
            ctx->pc = 0x23DED4u;
            goto label_23ded4;
        }
    }
    ctx->pc = 0x23DEB4u;
label_23deb4:
    // 0x23deb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23deb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23deb8:
    // 0x23deb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23deb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23debc:
    // 0x23debc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23debcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23dec0:
    // 0x23dec0: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x23dec0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
label_23dec4:
    // 0x23dec4: 0xc136b24  jal         func_4DAC90
label_23dec8:
    if (ctx->pc == 0x23DEC8u) {
        ctx->pc = 0x23DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEC4u;
        // 0x23dec8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DECCu;
        goto label_23decc;
    }
    ctx->pc = 0x23DEC4u;
    SET_GPR_U32(ctx, 31, 0x23DECCu);
    ctx->pc = 0x23DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEC4u;
    // 0x23dec8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23DEC4u, 0x23DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DECCu;
label_23decc:
    // 0x23decc: 0x1000000a  b           . + 4 + (0xA << 2)
label_23ded0:
    if (ctx->pc == 0x23DED0u) {
        ctx->pc = 0x23DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DECCu;
        // 0x23ded0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DED4u;
        goto label_23ded4;
    }
    ctx->pc = 0x23DECCu;
    {
        const bool branch_taken_0x23decc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DECCu;
        // 0x23ded0: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23decc) {
            ctx->pc = 0x23DEF8u;
            goto label_23def8;
        }
    }
    ctx->pc = 0x23DED4u;
label_23ded4:
    // 0x23ded4: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_23ded8:
    // 0x23ded8: 0x26a24b00  addiu       $v0, $s5, 0x4B00
    ctx->pc = 0x23ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_23dedc:
    // 0x23dedc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23dedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23dee0:
    // 0x23dee0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x23dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_23dee4:
    // 0x23dee4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23dee8:
    // 0x23dee8: 0xc0cd8ec  jal         func_3363B0
label_23deec:
    if (ctx->pc == 0x23DEECu) {
        ctx->pc = 0x23DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DEE8u;
        // 0x23deec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DEF0u;
        goto label_23def0;
    }
    ctx->pc = 0x23DEE8u;
    SET_GPR_U32(ctx, 31, 0x23DEF0u);
    ctx->pc = 0x23DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DEE8u;
    // 0x23deec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x23DEE8u, 0x23DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DEF0u;
label_23def0:
    // 0x23def0: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x23def0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_23def4:
    // 0x23def4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x23def4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_23def8:
    // 0x23def8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x23def8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_23defc:
    // 0x23defc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23defcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23df00:
    // 0x23df00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23df04:
    // 0x23df04: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x23df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_23df08:
    // 0x23df08: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x23df08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23df0c:
    // 0x23df0c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x23df0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_23df10:
    // 0x23df10: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23df10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23df14:
    // 0x23df14: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x23df14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_23df18:
    // 0x23df18: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x23df18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_23df1c:
    // 0x23df1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23df1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23df20:
    // 0x23df20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x23df20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23df24:
    // 0x23df24: 0x84c50098  lh          $a1, 0x98($a2)
    ctx->pc = 0x23df24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 152)));
label_23df28:
    // 0x23df28: 0x8cc2009c  lw          $v0, 0x9C($a2)
    ctx->pc = 0x23df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
label_23df2c:
    // 0x23df2c: 0x40f809  jalr        $v0
label_23df30:
    if (ctx->pc == 0x23DF30u) {
        ctx->pc = 0x23DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF2Cu;
        // 0x23df30: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF34u;
        goto label_23df34;
    }
    ctx->pc = 0x23DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DF34u);
        ctx->pc = 0x23DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF2Cu;
        // 0x23df30: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DF2Cu, 0x23DF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DF34u;
label_23df34:
    // 0x23df34: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x23df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_23df38:
    // 0x23df38: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23df3c:
    // 0x23df3c: 0xc136b18  jal         func_4DAC60
label_23df40:
    if (ctx->pc == 0x23DF40u) {
        ctx->pc = 0x23DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF3Cu;
        // 0x23df40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF44u;
        goto label_23df44;
    }
    ctx->pc = 0x23DF3Cu;
    SET_GPR_U32(ctx, 31, 0x23DF44u);
    ctx->pc = 0x23DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF3Cu;
    // 0x23df40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x23DF3Cu, 0x23DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF44u;
label_23df44:
    // 0x23df44: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x23df44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_23df48:
    // 0x23df48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x23df48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_23df4c:
    // 0x23df4c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x23df4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_23df50:
    // 0x23df50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23df50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23df54:
    // 0x23df54: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x23df54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23df58:
    // 0x23df58: 0xc136b24  jal         func_4DAC90
label_23df5c:
    if (ctx->pc == 0x23DF5Cu) {
        ctx->pc = 0x23DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF58u;
        // 0x23df5c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF60u;
        goto label_23df60;
    }
    ctx->pc = 0x23DF58u;
    SET_GPR_U32(ctx, 31, 0x23DF60u);
    ctx->pc = 0x23DF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF58u;
    // 0x23df5c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23DF58u, 0x23DF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF60u;
label_23df60:
    // 0x23df60: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x23df60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_23df64:
    // 0x23df64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x23df64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_23df68:
    // 0x23df68: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x23df68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23df6c:
    // 0x23df6c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x23df6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_23df70:
    // 0x23df70: 0xc136b18  jal         func_4DAC60
label_23df74:
    if (ctx->pc == 0x23DF74u) {
        ctx->pc = 0x23DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF70u;
        // 0x23df74: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DF78u;
        goto label_23df78;
    }
    ctx->pc = 0x23DF70u;
    SET_GPR_U32(ctx, 31, 0x23DF78u);
    ctx->pc = 0x23DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF70u;
    // 0x23df74: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x23DF70u, 0x23DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DF78u;
label_23df78:
    // 0x23df78: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x23df78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_23df7c:
    // 0x23df7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23df80:
    // 0x23df80: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x23df80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_23df84:
    // 0x23df84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23df84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23df88:
    // 0x23df88: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x23df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_23df8c:
    // 0x23df8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x23df8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23df90:
    // 0x23df90: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x23df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_23df94:
    // 0x23df94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23df94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23df98:
    // 0x23df98: 0xc1036e2  jal         func_40DB88
label_23df9c:
    if (ctx->pc == 0x23DF9Cu) {
        ctx->pc = 0x23DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DF98u;
        // 0x23df9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFA0u;
        goto label_23dfa0;
    }
    ctx->pc = 0x23DF98u;
    SET_GPR_U32(ctx, 31, 0x23DFA0u);
    ctx->pc = 0x23DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DF98u;
    // 0x23df9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x23DF98u, 0x23DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFA0u;
label_23dfa0:
    // 0x23dfa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23dfa4:
    // 0x23dfa4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_23dfa8:
    if (ctx->pc == 0x23DFA8u) {
        ctx->pc = 0x23DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFA4u;
        // 0x23dfa8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFACu;
        goto label_23dfac;
    }
    ctx->pc = 0x23DFA4u;
    {
        const bool branch_taken_0x23dfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFA4u;
        // 0x23dfa8: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfa4) {
            ctx->pc = 0x23E068u;
            goto label_23e068;
        }
    }
    ctx->pc = 0x23DFACu;
label_23dfac:
    // 0x23dfac: 0xc0e87c0  jal         func_3A1F00
label_23dfb0:
    if (ctx->pc == 0x23DFB0u) {
        ctx->pc = 0x23DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DFACu;
        // 0x23dfb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DFB4u;
        goto label_23dfb4;
    }
    ctx->pc = 0x23DFACu;
    SET_GPR_U32(ctx, 31, 0x23DFB4u);
    ctx->pc = 0x23DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DFACu;
    // 0x23dfb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23DFACu, 0x23DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DFB4u;
label_23dfb4:
    // 0x23dfb4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23dfb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23dfb8:
    // 0x23dfb8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23dfb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23dfbc:
    // 0x23dfbc: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x23dfbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23dfc0:
    // 0x23dfc0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x23dfc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23dfc4:
    // 0x23dfc4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x23dfc4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_23dfc8:
    // 0x23dfc8: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x23dfc8u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_23dfcc:
    // 0x23dfcc: 0x4a0003bf  vwaitq
    ctx->pc = 0x23dfccu;
    // VWAITQ (Q already resolved in this runtime)
label_23dfd0:
    // 0x23dfd0: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x23dfd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23dfd4:
    // 0x23dfd4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x23dfd4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_23dfd8:
    // 0x23dfd8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x23dfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_23dfdc:
    // 0x23dfdc: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x23dfdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_23dfe0:
    // 0x23dfe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23dfe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23dfe4:
    // 0x23dfe4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23dfe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23dfe8:
    // 0x23dfe8: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x23dfe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23dfec:
    // 0x23dfec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23dfecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23dff0:
    // 0x23dff0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x23dff0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_23dff4:
    // 0x23dff4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x23dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_23dff8:
    // 0x23dff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23dffc:
    // 0x23dffc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x23dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_23e000:
    // 0x23e000: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23e000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e004:
    // 0x23e004: 0x0  nop
    ctx->pc = 0x23e004u;
    // NOP
label_23e008:
    // 0x23e008: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_23e00c:
    if (ctx->pc == 0x23E00Cu) {
        ctx->pc = 0x23E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E008u;
        // 0x23e00c: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E010u;
        goto label_23e010;
    }
    ctx->pc = 0x23E008u;
    {
        const bool branch_taken_0x23e008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E008u;
        // 0x23e00c: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e008) {
            ctx->pc = 0x23E034u;
            goto label_23e034;
        }
    }
    ctx->pc = 0x23E010u;
label_23e010:
    // 0x23e010: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x23e010u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_23e014:
    // 0x23e014: 0x26a24b00  addiu       $v0, $s5, 0x4B00
    ctx->pc = 0x23e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
label_23e018:
    // 0x23e018: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x23e018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23e01c:
    // 0x23e01c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x23e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_23e020:
    // 0x23e020: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23e020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23e024:
    // 0x23e024: 0xc0cd8ec  jal         func_3363B0
label_23e028:
    if (ctx->pc == 0x23E028u) {
        ctx->pc = 0x23E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E024u;
        // 0x23e028: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E02Cu;
        goto label_23e02c;
    }
    ctx->pc = 0x23E024u;
    SET_GPR_U32(ctx, 31, 0x23E02Cu);
    ctx->pc = 0x23E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E024u;
    // 0x23e028: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x23E024u, 0x23E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E02Cu;
label_23e02c:
    // 0x23e02c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x23e02cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_23e030:
    // 0x23e030: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x23e030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_23e034:
    // 0x23e034: 0xc0cd766  jal         func_335D98
label_23e038:
    if (ctx->pc == 0x23E038u) {
        ctx->pc = 0x23E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E034u;
        // 0x23e038: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E03Cu;
        goto label_23e03c;
    }
    ctx->pc = 0x23E034u;
    SET_GPR_U32(ctx, 31, 0x23E03Cu);
    ctx->pc = 0x23E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E034u;
    // 0x23e038: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x23E034u, 0x23E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E03Cu;
label_23e03c:
    // 0x23e03c: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x23e03cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_23e040:
    // 0x23e040: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23e040u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_23e044:
    // 0x23e044: 0xc047e78  jal         func_11F9E0
label_23e048:
    if (ctx->pc == 0x23E048u) {
        ctx->pc = 0x23E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E044u;
        // 0x23e048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E04Cu;
        goto label_23e04c;
    }
    ctx->pc = 0x23E044u;
    SET_GPR_U32(ctx, 31, 0x23E04Cu);
    ctx->pc = 0x23E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E044u;
    // 0x23e048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x23E044u, 0x23E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E04Cu;
label_23e04c:
    // 0x23e04c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23e04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_23e050:
    // 0x23e050: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x23e050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_23e054:
    // 0x23e054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23e054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23e058:
    // 0x23e058: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x23e058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_23e05c:
    // 0x23e05c: 0xc04b688  jal         func_12DA20
label_23e060:
    if (ctx->pc == 0x23E060u) {
        ctx->pc = 0x23E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E05Cu;
        // 0x23e060: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E064u;
        goto label_23e064;
    }
    ctx->pc = 0x23E05Cu;
    SET_GPR_U32(ctx, 31, 0x23E064u);
    ctx->pc = 0x23E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E05Cu;
    // 0x23e060: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DA20u, 0x23E05Cu, 0x23E064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E064u;
label_23e064:
    // 0x23e064: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x23e064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_23e068:
    // 0x23e068: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x23e068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_23e06c:
    // 0x23e06c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x23e06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_23e070:
    // 0x23e070: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x23e070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_23e074:
    // 0x23e074: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x23e074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_23e078:
    // 0x23e078: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x23e078u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_23e07c:
    // 0x23e07c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x23e07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_23e080:
    // 0x23e080: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x23e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_23e084:
    // 0x23e084: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x23e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23e088:
    // 0x23e088: 0x3e00008  jr          $ra
label_23e08c:
    if (ctx->pc == 0x23E08Cu) {
        ctx->pc = 0x23E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E088u;
        // 0x23e08c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E090u;
        goto label_fallthrough_0x23e088;
    }
    ctx->pc = 0x23E088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E088u;
        // 0x23e08c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23e088:
    ctx->pc = 0x23E090u;
}

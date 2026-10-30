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

// Function: sub_0030DD90
// Address: 0x30dd90 - 0x30e010
void sub_0030DD90_0x30dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DD90_0x30dd90");
#endif

    switch (ctx->pc) {
        case 0x30dd90u: goto label_30dd90;
        case 0x30dd94u: goto label_30dd94;
        case 0x30dd98u: goto label_30dd98;
        case 0x30dd9cu: goto label_30dd9c;
        case 0x30dda0u: goto label_30dda0;
        case 0x30dda4u: goto label_30dda4;
        case 0x30dda8u: goto label_30dda8;
        case 0x30ddacu: goto label_30ddac;
        case 0x30ddb0u: goto label_30ddb0;
        case 0x30ddb4u: goto label_30ddb4;
        case 0x30ddb8u: goto label_30ddb8;
        case 0x30ddbcu: goto label_30ddbc;
        case 0x30ddc0u: goto label_30ddc0;
        case 0x30ddc4u: goto label_30ddc4;
        case 0x30ddc8u: goto label_30ddc8;
        case 0x30ddccu: goto label_30ddcc;
        case 0x30ddd0u: goto label_30ddd0;
        case 0x30ddd4u: goto label_30ddd4;
        case 0x30ddd8u: goto label_30ddd8;
        case 0x30dddcu: goto label_30dddc;
        case 0x30dde0u: goto label_30dde0;
        case 0x30dde4u: goto label_30dde4;
        case 0x30dde8u: goto label_30dde8;
        case 0x30ddecu: goto label_30ddec;
        case 0x30ddf0u: goto label_30ddf0;
        case 0x30ddf4u: goto label_30ddf4;
        case 0x30ddf8u: goto label_30ddf8;
        case 0x30ddfcu: goto label_30ddfc;
        case 0x30de00u: goto label_30de00;
        case 0x30de04u: goto label_30de04;
        case 0x30de08u: goto label_30de08;
        case 0x30de0cu: goto label_30de0c;
        case 0x30de10u: goto label_30de10;
        case 0x30de14u: goto label_30de14;
        case 0x30de18u: goto label_30de18;
        case 0x30de1cu: goto label_30de1c;
        case 0x30de20u: goto label_30de20;
        case 0x30de24u: goto label_30de24;
        case 0x30de28u: goto label_30de28;
        case 0x30de2cu: goto label_30de2c;
        case 0x30de30u: goto label_30de30;
        case 0x30de34u: goto label_30de34;
        case 0x30de38u: goto label_30de38;
        case 0x30de3cu: goto label_30de3c;
        case 0x30de40u: goto label_30de40;
        case 0x30de44u: goto label_30de44;
        case 0x30de48u: goto label_30de48;
        case 0x30de4cu: goto label_30de4c;
        case 0x30de50u: goto label_30de50;
        case 0x30de54u: goto label_30de54;
        case 0x30de58u: goto label_30de58;
        case 0x30de5cu: goto label_30de5c;
        case 0x30de60u: goto label_30de60;
        case 0x30de64u: goto label_30de64;
        case 0x30de68u: goto label_30de68;
        case 0x30de6cu: goto label_30de6c;
        case 0x30de70u: goto label_30de70;
        case 0x30de74u: goto label_30de74;
        case 0x30de78u: goto label_30de78;
        case 0x30de7cu: goto label_30de7c;
        case 0x30de80u: goto label_30de80;
        case 0x30de84u: goto label_30de84;
        case 0x30de88u: goto label_30de88;
        case 0x30de8cu: goto label_30de8c;
        case 0x30de90u: goto label_30de90;
        case 0x30de94u: goto label_30de94;
        case 0x30de98u: goto label_30de98;
        case 0x30de9cu: goto label_30de9c;
        case 0x30dea0u: goto label_30dea0;
        case 0x30dea4u: goto label_30dea4;
        case 0x30dea8u: goto label_30dea8;
        case 0x30deacu: goto label_30deac;
        case 0x30deb0u: goto label_30deb0;
        case 0x30deb4u: goto label_30deb4;
        case 0x30deb8u: goto label_30deb8;
        case 0x30debcu: goto label_30debc;
        case 0x30dec0u: goto label_30dec0;
        case 0x30dec4u: goto label_30dec4;
        case 0x30dec8u: goto label_30dec8;
        case 0x30deccu: goto label_30decc;
        case 0x30ded0u: goto label_30ded0;
        case 0x30ded4u: goto label_30ded4;
        case 0x30ded8u: goto label_30ded8;
        case 0x30dedcu: goto label_30dedc;
        case 0x30dee0u: goto label_30dee0;
        case 0x30dee4u: goto label_30dee4;
        case 0x30dee8u: goto label_30dee8;
        case 0x30deecu: goto label_30deec;
        case 0x30def0u: goto label_30def0;
        case 0x30def4u: goto label_30def4;
        case 0x30def8u: goto label_30def8;
        case 0x30defcu: goto label_30defc;
        case 0x30df00u: goto label_30df00;
        case 0x30df04u: goto label_30df04;
        case 0x30df08u: goto label_30df08;
        case 0x30df0cu: goto label_30df0c;
        case 0x30df10u: goto label_30df10;
        case 0x30df14u: goto label_30df14;
        case 0x30df18u: goto label_30df18;
        case 0x30df1cu: goto label_30df1c;
        case 0x30df20u: goto label_30df20;
        case 0x30df24u: goto label_30df24;
        case 0x30df28u: goto label_30df28;
        case 0x30df2cu: goto label_30df2c;
        case 0x30df30u: goto label_30df30;
        case 0x30df34u: goto label_30df34;
        case 0x30df38u: goto label_30df38;
        case 0x30df3cu: goto label_30df3c;
        case 0x30df40u: goto label_30df40;
        case 0x30df44u: goto label_30df44;
        case 0x30df48u: goto label_30df48;
        case 0x30df4cu: goto label_30df4c;
        case 0x30df50u: goto label_30df50;
        case 0x30df54u: goto label_30df54;
        case 0x30df58u: goto label_30df58;
        case 0x30df5cu: goto label_30df5c;
        case 0x30df60u: goto label_30df60;
        case 0x30df64u: goto label_30df64;
        case 0x30df68u: goto label_30df68;
        case 0x30df6cu: goto label_30df6c;
        case 0x30df70u: goto label_30df70;
        case 0x30df74u: goto label_30df74;
        case 0x30df78u: goto label_30df78;
        case 0x30df7cu: goto label_30df7c;
        case 0x30df80u: goto label_30df80;
        case 0x30df84u: goto label_30df84;
        case 0x30df88u: goto label_30df88;
        case 0x30df8cu: goto label_30df8c;
        case 0x30df90u: goto label_30df90;
        case 0x30df94u: goto label_30df94;
        case 0x30df98u: goto label_30df98;
        case 0x30df9cu: goto label_30df9c;
        case 0x30dfa0u: goto label_30dfa0;
        case 0x30dfa4u: goto label_30dfa4;
        case 0x30dfa8u: goto label_30dfa8;
        case 0x30dfacu: goto label_30dfac;
        case 0x30dfb0u: goto label_30dfb0;
        case 0x30dfb4u: goto label_30dfb4;
        case 0x30dfb8u: goto label_30dfb8;
        case 0x30dfbcu: goto label_30dfbc;
        case 0x30dfc0u: goto label_30dfc0;
        case 0x30dfc4u: goto label_30dfc4;
        case 0x30dfc8u: goto label_30dfc8;
        case 0x30dfccu: goto label_30dfcc;
        case 0x30dfd0u: goto label_30dfd0;
        case 0x30dfd4u: goto label_30dfd4;
        case 0x30dfd8u: goto label_30dfd8;
        case 0x30dfdcu: goto label_30dfdc;
        case 0x30dfe0u: goto label_30dfe0;
        case 0x30dfe4u: goto label_30dfe4;
        case 0x30dfe8u: goto label_30dfe8;
        case 0x30dfecu: goto label_30dfec;
        case 0x30dff0u: goto label_30dff0;
        case 0x30dff4u: goto label_30dff4;
        case 0x30dff8u: goto label_30dff8;
        case 0x30dffcu: goto label_30dffc;
        case 0x30e000u: goto label_30e000;
        case 0x30e004u: goto label_30e004;
        case 0x30e008u: goto label_30e008;
        case 0x30e00cu: goto label_30e00c;
        default: break;
    }

    ctx->pc = 0x30dd90u;

label_30dd90:
    // 0x30dd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30dd94:
    // 0x30dd94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_30dd98:
    // 0x30dd98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30dd9c:
    // 0x30dd9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30dd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30dda0:
    // 0x30dda0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30dda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30dda4:
    // 0x30dda4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30dda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30dda8:
    // 0x30dda8: 0xc08a61a  jal         func_229868
label_30ddac:
    if (ctx->pc == 0x30DDACu) {
        ctx->pc = 0x30DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDA8u;
        // 0x30ddac: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DDB0u;
        goto label_30ddb0;
    }
    ctx->pc = 0x30DDA8u;
    SET_GPR_U32(ctx, 31, 0x30DDB0u);
    ctx->pc = 0x30DDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DDA8u;
    // 0x30ddac: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30DDA8u, 0x30DDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDB0u;
label_30ddb0:
    // 0x30ddb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ddb4:
    // 0x30ddb4: 0x10a00097  beqz        $a1, . + 4 + (0x97 << 2)
label_30ddb8:
    if (ctx->pc == 0x30DDB8u) {
        ctx->pc = 0x30DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDB4u;
        // 0x30ddb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DDBCu;
        goto label_30ddbc;
    }
    ctx->pc = 0x30DDB4u;
    {
        const bool branch_taken_0x30ddb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDB4u;
        // 0x30ddb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddb4) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DDBCu;
label_30ddbc:
    // 0x30ddbc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x30ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_30ddc0:
    // 0x30ddc0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30ddc4:
    // 0x30ddc4: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x30ddc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_30ddc8:
    // 0x30ddc8: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
label_30ddcc:
    if (ctx->pc == 0x30DDCCu) {
        ctx->pc = 0x30DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDC8u;
        // 0x30ddcc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DDD0u;
        goto label_30ddd0;
    }
    ctx->pc = 0x30DDC8u;
    {
        const bool branch_taken_0x30ddc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDC8u;
        // 0x30ddcc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ddc8) {
            ctx->pc = 0x30E010u;
            return;
        }
    }
    ctx->pc = 0x30DDD0u;
label_30ddd0:
    // 0x30ddd0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30ddd4:
    // 0x30ddd4: 0x2442cec0  addiu       $v0, $v0, -0x3140
    ctx->pc = 0x30ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
label_30ddd8:
    // 0x30ddd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30dddc:
    // 0x30dddc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30dde0:
    // 0x30dde0: 0x800008  jr          $a0
label_30dde4:
    if (ctx->pc == 0x30DDE4u) {
        ctx->pc = 0x30DDE8u;
        goto label_30dde8;
    }
    ctx->pc = 0x30DDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30DDE8u: goto label_30dde8;
            case 0x30DDF8u: goto label_30ddf8;
            case 0x30DE10u: goto label_30de10;
            case 0x30DE30u: goto label_30de30;
            case 0x30DEACu: goto label_30deac;
            case 0x30DF20u: goto label_30df20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DDE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30DDE8u;
label_30dde8:
    // 0x30dde8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x30dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_30ddec:
    // 0x30ddec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30ddf0:
    // 0x30ddf0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_30ddf4:
    if (ctx->pc == 0x30DDF4u) {
        ctx->pc = 0x30DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDF0u;
        // 0x30ddf4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DDF8u;
        goto label_30ddf8;
    }
    ctx->pc = 0x30DDF0u;
    {
        const bool branch_taken_0x30ddf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30ddf0) {
            ctx->pc = 0x30DDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DDF0u;
            // 0x30ddf4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DE08u;
            goto label_30de08;
        }
    }
    ctx->pc = 0x30DDF8u;
label_30ddf8:
    // 0x30ddf8: 0xc0c3658  jal         func_30D960
label_30ddfc:
    if (ctx->pc == 0x30DDFCu) {
        ctx->pc = 0x30DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDF8u;
        // 0x30ddfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE00u;
        goto label_30de00;
    }
    ctx->pc = 0x30DDF8u;
    SET_GPR_U32(ctx, 31, 0x30DE00u);
    ctx->pc = 0x30DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DDF8u;
    // 0x30ddfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D960u, 0x30DDF8u, 0x30DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DE00u;
label_30de00:
    // 0x30de00: 0x10000084  b           . + 4 + (0x84 << 2)
label_30de04:
    if (ctx->pc == 0x30DE04u) {
        ctx->pc = 0x30DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE00u;
        // 0x30de04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE08u;
        goto label_30de08;
    }
    ctx->pc = 0x30DE00u;
    {
        const bool branch_taken_0x30de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE00u;
        // 0x30de04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de00) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DE08u;
label_30de08:
    // 0x30de08: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
label_30de0c:
    if (ctx->pc == 0x30DE0Cu) {
        ctx->pc = 0x30DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE08u;
        // 0x30de0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE10u;
        goto label_30de10;
    }
    ctx->pc = 0x30DE08u;
    {
        const bool branch_taken_0x30de08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE08u;
        // 0x30de0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de08) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DE10u;
label_30de10:
    // 0x30de10: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x30de10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_30de14:
    // 0x30de14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30de14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30de18:
    // 0x30de18: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30de18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30de1c:
    // 0x30de1c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30de20:
    // 0x30de20: 0x60f809  jalr        $v1
label_30de24:
    if (ctx->pc == 0x30DE24u) {
        ctx->pc = 0x30DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE20u;
        // 0x30de24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE28u;
        goto label_30de28;
    }
    ctx->pc = 0x30DE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30DE28u);
        ctx->pc = 0x30DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE20u;
        // 0x30de24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DE20u, 0x30DE28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30DE28u;
label_30de28:
    // 0x30de28: 0x1000007a  b           . + 4 + (0x7A << 2)
label_30de2c:
    if (ctx->pc == 0x30DE2Cu) {
        ctx->pc = 0x30DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE28u;
        // 0x30de2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE30u;
        goto label_30de30;
    }
    ctx->pc = 0x30DE28u;
    {
        const bool branch_taken_0x30de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE28u;
        // 0x30de2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de28) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DE30u;
label_30de30:
    // 0x30de30: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30de34:
    // 0x30de34: 0x240200b2  addiu       $v0, $zero, 0xB2
    ctx->pc = 0x30de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_30de38:
    // 0x30de38: 0x14620076  bne         $v1, $v0, . + 4 + (0x76 << 2)
label_30de3c:
    if (ctx->pc == 0x30DE3Cu) {
        ctx->pc = 0x30DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE38u;
        // 0x30de3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE40u;
        goto label_30de40;
    }
    ctx->pc = 0x30DE38u;
    {
        const bool branch_taken_0x30de38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE38u;
        // 0x30de3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de38) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DE40u;
label_30de40:
    // 0x30de40: 0x92040024  lbu         $a0, 0x24($s0)
    ctx->pc = 0x30de40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
label_30de44:
    // 0x30de44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30de44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30de48:
    // 0x30de48: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
label_30de4c:
    if (ctx->pc == 0x30DE4Cu) {
        ctx->pc = 0x30DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE48u;
        // 0x30de4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE50u;
        goto label_30de50;
    }
    ctx->pc = 0x30DE48u;
    {
        const bool branch_taken_0x30de48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE48u;
        // 0x30de4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de48) {
            ctx->pc = 0x30DEB4u;
            goto label_30deb4;
        }
    }
    ctx->pc = 0x30DE50u;
label_30de50:
    // 0x30de50: 0xc087502  jal         func_21D408
label_30de54:
    if (ctx->pc == 0x30DE54u) {
        ctx->pc = 0x30DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE50u;
        // 0x30de54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE58u;
        goto label_30de58;
    }
    ctx->pc = 0x30DE50u;
    SET_GPR_U32(ctx, 31, 0x30DE58u);
    ctx->pc = 0x30DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DE50u;
    // 0x30de54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30DE50u, 0x30DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DE58u;
label_30de58:
    // 0x30de58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30de58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30de5c:
    // 0x30de5c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30de5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30de60:
    // 0x30de60: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30de64:
    if (ctx->pc == 0x30DE64u) {
        ctx->pc = 0x30DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE60u;
        // 0x30de64: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE68u;
        goto label_30de68;
    }
    ctx->pc = 0x30DE60u;
    {
        const bool branch_taken_0x30de60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE60u;
        // 0x30de64: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de60) {
            ctx->pc = 0x30DE74u;
            goto label_30de74;
        }
    }
    ctx->pc = 0x30DE68u;
label_30de68:
    // 0x30de68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30de6c:
    // 0x30de6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_30de70:
    if (ctx->pc == 0x30DE70u) {
        ctx->pc = 0x30DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE6Cu;
        // 0x30de70: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE74u;
        goto label_30de74;
    }
    ctx->pc = 0x30DE6Cu;
    {
        const bool branch_taken_0x30de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE6Cu;
        // 0x30de70: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de6c) {
            ctx->pc = 0x30DE78u;
            goto label_30de78;
        }
    }
    ctx->pc = 0x30DE74u;
label_30de74:
    // 0x30de74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30de74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30de78:
    // 0x30de78: 0x12000066  beqz        $s0, . + 4 + (0x66 << 2)
label_30de7c:
    if (ctx->pc == 0x30DE7Cu) {
        ctx->pc = 0x30DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE78u;
        // 0x30de7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE80u;
        goto label_30de80;
    }
    ctx->pc = 0x30DE78u;
    {
        const bool branch_taken_0x30de78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE78u;
        // 0x30de7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de78) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DE80u;
label_30de80:
    // 0x30de80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30de84:
    // 0x30de84: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30de84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30de88:
    // 0x30de88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30de8c:
    // 0x30de8c: 0x40f809  jalr        $v0
label_30de90:
    if (ctx->pc == 0x30DE90u) {
        ctx->pc = 0x30DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE8Cu;
        // 0x30de90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DE94u;
        goto label_30de94;
    }
    ctx->pc = 0x30DE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30DE94u);
        ctx->pc = 0x30DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE8Cu;
        // 0x30de90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DE8Cu, 0x30DE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30DE94u;
label_30de94:
    // 0x30de94: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x30de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_30de98:
    // 0x30de98: 0x1443005e  bne         $v0, $v1, . + 4 + (0x5E << 2)
label_30de9c:
    if (ctx->pc == 0x30DE9Cu) {
        ctx->pc = 0x30DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE98u;
        // 0x30de9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DEA0u;
        goto label_30dea0;
    }
    ctx->pc = 0x30DE98u;
    {
        const bool branch_taken_0x30de98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE98u;
        // 0x30de9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de98) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DEA0u;
label_30dea0:
    // 0x30dea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30dea4:
    // 0x30dea4: 0xc0be090  jal         func_2F8240
label_30dea8:
    if (ctx->pc == 0x30DEA8u) {
        ctx->pc = 0x30DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEA4u;
        // 0x30dea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DEACu;
        goto label_30deac;
    }
    ctx->pc = 0x30DEA4u;
    SET_GPR_U32(ctx, 31, 0x30DEACu);
    ctx->pc = 0x30DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DEA4u;
    // 0x30dea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8240u, 0x30DEA4u, 0x30DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DEACu;
label_30deac:
    // 0x30deac: 0x10000059  b           . + 4 + (0x59 << 2)
label_30deb0:
    if (ctx->pc == 0x30DEB0u) {
        ctx->pc = 0x30DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEACu;
        // 0x30deb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DEB4u;
        goto label_30deb4;
    }
    ctx->pc = 0x30DEACu;
    {
        const bool branch_taken_0x30deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEACu;
        // 0x30deb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30deac) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DEB4u;
label_30deb4:
    // 0x30deb4: 0x14820057  bne         $a0, $v0, . + 4 + (0x57 << 2)
label_30deb8:
    if (ctx->pc == 0x30DEB8u) {
        ctx->pc = 0x30DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEB4u;
        // 0x30deb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DEBCu;
        goto label_30debc;
    }
    ctx->pc = 0x30DEB4u;
    {
        const bool branch_taken_0x30deb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEB4u;
        // 0x30deb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30deb4) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DEBCu;
label_30debc:
    // 0x30debc: 0xc087502  jal         func_21D408
label_30dec0:
    if (ctx->pc == 0x30DEC0u) {
        ctx->pc = 0x30DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEBCu;
        // 0x30dec0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DEC4u;
        goto label_30dec4;
    }
    ctx->pc = 0x30DEBCu;
    SET_GPR_U32(ctx, 31, 0x30DEC4u);
    ctx->pc = 0x30DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DEBCu;
    // 0x30dec0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30DEBCu, 0x30DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DEC4u;
label_30dec4:
    // 0x30dec4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30dec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30dec8:
    // 0x30dec8: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30dec8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30decc:
    // 0x30decc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30ded0:
    if (ctx->pc == 0x30DED0u) {
        ctx->pc = 0x30DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DECCu;
        // 0x30ded0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DED4u;
        goto label_30ded4;
    }
    ctx->pc = 0x30DECCu;
    {
        const bool branch_taken_0x30decc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DECCu;
        // 0x30ded0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30decc) {
            ctx->pc = 0x30DEE0u;
            goto label_30dee0;
        }
    }
    ctx->pc = 0x30DED4u;
label_30ded4:
    // 0x30ded4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30ded8:
    // 0x30ded8: 0x10000002  b           . + 4 + (0x2 << 2)
label_30dedc:
    if (ctx->pc == 0x30DEDCu) {
        ctx->pc = 0x30DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DED8u;
        // 0x30dedc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DEE0u;
        goto label_30dee0;
    }
    ctx->pc = 0x30DED8u;
    {
        const bool branch_taken_0x30ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DED8u;
        // 0x30dedc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ded8) {
            ctx->pc = 0x30DEE4u;
            goto label_30dee4;
        }
    }
    ctx->pc = 0x30DEE0u;
label_30dee0:
    // 0x30dee0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30dee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30dee4:
    // 0x30dee4: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
label_30dee8:
    if (ctx->pc == 0x30DEE8u) {
        ctx->pc = 0x30DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEE4u;
        // 0x30dee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DEECu;
        goto label_30deec;
    }
    ctx->pc = 0x30DEE4u;
    {
        const bool branch_taken_0x30dee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEE4u;
        // 0x30dee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dee4) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DEECu;
label_30deec:
    // 0x30deec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30deecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30def0:
    // 0x30def0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30def0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30def4:
    // 0x30def4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30def4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30def8:
    // 0x30def8: 0x40f809  jalr        $v0
label_30defc:
    if (ctx->pc == 0x30DEFCu) {
        ctx->pc = 0x30DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEF8u;
        // 0x30defc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF00u;
        goto label_30df00;
    }
    ctx->pc = 0x30DEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30DF00u);
        ctx->pc = 0x30DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEF8u;
        // 0x30defc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DEF8u, 0x30DF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30DF00u;
label_30df00:
    // 0x30df00: 0x24030085  addiu       $v1, $zero, 0x85
    ctx->pc = 0x30df00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_30df04:
    // 0x30df04: 0x14430043  bne         $v0, $v1, . + 4 + (0x43 << 2)
label_30df08:
    if (ctx->pc == 0x30DF08u) {
        ctx->pc = 0x30DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF04u;
        // 0x30df08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF0Cu;
        goto label_30df0c;
    }
    ctx->pc = 0x30DF04u;
    {
        const bool branch_taken_0x30df04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF04u;
        // 0x30df08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df04) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DF0Cu;
label_30df0c:
    // 0x30df0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30df0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30df10:
    // 0x30df10: 0xc0ba82e  jal         func_2EA0B8
label_30df14:
    if (ctx->pc == 0x30DF14u) {
        ctx->pc = 0x30DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF10u;
        // 0x30df14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF18u;
        goto label_30df18;
    }
    ctx->pc = 0x30DF10u;
    SET_GPR_U32(ctx, 31, 0x30DF18u);
    ctx->pc = 0x30DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DF10u;
    // 0x30df14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA0B8u, 0x30DF10u, 0x30DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF18u;
label_30df18:
    // 0x30df18: 0x1000003e  b           . + 4 + (0x3E << 2)
label_30df1c:
    if (ctx->pc == 0x30DF1Cu) {
        ctx->pc = 0x30DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF18u;
        // 0x30df1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF20u;
        goto label_30df20;
    }
    ctx->pc = 0x30DF18u;
    {
        const bool branch_taken_0x30df18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF18u;
        // 0x30df1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df18) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DF20u;
label_30df20:
    // 0x30df20: 0x8ca300cc  lw          $v1, 0xCC($a1)
    ctx->pc = 0x30df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_30df24:
    // 0x30df24: 0x240200b2  addiu       $v0, $zero, 0xB2
    ctx->pc = 0x30df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_30df28:
    // 0x30df28: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_30df2c:
    if (ctx->pc == 0x30DF2Cu) {
        ctx->pc = 0x30DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF28u;
        // 0x30df2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF30u;
        goto label_30df30;
    }
    ctx->pc = 0x30DF28u;
    {
        const bool branch_taken_0x30df28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF28u;
        // 0x30df2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df28) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DF30u;
label_30df30:
    // 0x30df30: 0x92040024  lbu         $a0, 0x24($s0)
    ctx->pc = 0x30df30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
label_30df34:
    // 0x30df34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30df38:
    // 0x30df38: 0x1482001a  bne         $a0, $v0, . + 4 + (0x1A << 2)
label_30df3c:
    if (ctx->pc == 0x30DF3Cu) {
        ctx->pc = 0x30DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF38u;
        // 0x30df3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF40u;
        goto label_30df40;
    }
    ctx->pc = 0x30DF38u;
    {
        const bool branch_taken_0x30df38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF38u;
        // 0x30df3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df38) {
            ctx->pc = 0x30DFA4u;
            goto label_30dfa4;
        }
    }
    ctx->pc = 0x30DF40u;
label_30df40:
    // 0x30df40: 0xc087502  jal         func_21D408
label_30df44:
    if (ctx->pc == 0x30DF44u) {
        ctx->pc = 0x30DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF40u;
        // 0x30df44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF48u;
        goto label_30df48;
    }
    ctx->pc = 0x30DF40u;
    SET_GPR_U32(ctx, 31, 0x30DF48u);
    ctx->pc = 0x30DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DF40u;
    // 0x30df44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30DF40u, 0x30DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF48u;
label_30df48:
    // 0x30df48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30df48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30df4c:
    // 0x30df4c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30df4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30df50:
    // 0x30df50: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30df54:
    if (ctx->pc == 0x30DF54u) {
        ctx->pc = 0x30DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF50u;
        // 0x30df54: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF58u;
        goto label_30df58;
    }
    ctx->pc = 0x30DF50u;
    {
        const bool branch_taken_0x30df50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF50u;
        // 0x30df54: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df50) {
            ctx->pc = 0x30DF64u;
            goto label_30df64;
        }
    }
    ctx->pc = 0x30DF58u;
label_30df58:
    // 0x30df58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30df5c:
    // 0x30df5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_30df60:
    if (ctx->pc == 0x30DF60u) {
        ctx->pc = 0x30DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF5Cu;
        // 0x30df60: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF64u;
        goto label_30df64;
    }
    ctx->pc = 0x30DF5Cu;
    {
        const bool branch_taken_0x30df5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF5Cu;
        // 0x30df60: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df5c) {
            ctx->pc = 0x30DF68u;
            goto label_30df68;
        }
    }
    ctx->pc = 0x30DF64u;
label_30df64:
    // 0x30df64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30df64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30df68:
    // 0x30df68: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_30df6c:
    if (ctx->pc == 0x30DF6Cu) {
        ctx->pc = 0x30DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF68u;
        // 0x30df6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF70u;
        goto label_30df70;
    }
    ctx->pc = 0x30DF68u;
    {
        const bool branch_taken_0x30df68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF68u;
        // 0x30df6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df68) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DF70u;
label_30df70:
    // 0x30df70: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30df74:
    // 0x30df74: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30df74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30df78:
    // 0x30df78: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30df78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30df7c:
    // 0x30df7c: 0x40f809  jalr        $v0
label_30df80:
    if (ctx->pc == 0x30DF80u) {
        ctx->pc = 0x30DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF7Cu;
        // 0x30df80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF84u;
        goto label_30df84;
    }
    ctx->pc = 0x30DF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30DF84u);
        ctx->pc = 0x30DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF7Cu;
        // 0x30df80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DF7Cu, 0x30DF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30DF84u;
label_30df84:
    // 0x30df84: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x30df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_30df88:
    // 0x30df88: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
label_30df8c:
    if (ctx->pc == 0x30DF8Cu) {
        ctx->pc = 0x30DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF88u;
        // 0x30df8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF90u;
        goto label_30df90;
    }
    ctx->pc = 0x30DF88u;
    {
        const bool branch_taken_0x30df88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF88u;
        // 0x30df8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df88) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DF90u;
label_30df90:
    // 0x30df90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30df90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30df94:
    // 0x30df94: 0xc0be100  jal         func_2F8400
label_30df98:
    if (ctx->pc == 0x30DF98u) {
        ctx->pc = 0x30DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF94u;
        // 0x30df98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DF9Cu;
        goto label_30df9c;
    }
    ctx->pc = 0x30DF94u;
    SET_GPR_U32(ctx, 31, 0x30DF9Cu);
    ctx->pc = 0x30DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DF94u;
    // 0x30df98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8400u, 0x30DF94u, 0x30DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DF9Cu;
label_30df9c:
    // 0x30df9c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_30dfa0:
    if (ctx->pc == 0x30DFA0u) {
        ctx->pc = 0x30DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF9Cu;
        // 0x30dfa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DFA4u;
        goto label_30dfa4;
    }
    ctx->pc = 0x30DF9Cu;
    {
        const bool branch_taken_0x30df9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF9Cu;
        // 0x30dfa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df9c) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DFA4u;
label_30dfa4:
    // 0x30dfa4: 0x1482001b  bne         $a0, $v0, . + 4 + (0x1B << 2)
label_30dfa8:
    if (ctx->pc == 0x30DFA8u) {
        ctx->pc = 0x30DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFA4u;
        // 0x30dfa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DFACu;
        goto label_30dfac;
    }
    ctx->pc = 0x30DFA4u;
    {
        const bool branch_taken_0x30dfa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFA4u;
        // 0x30dfa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfa4) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DFACu;
label_30dfac:
    // 0x30dfac: 0xc087502  jal         func_21D408
label_30dfb0:
    if (ctx->pc == 0x30DFB0u) {
        ctx->pc = 0x30DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFACu;
        // 0x30dfb0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DFB4u;
        goto label_30dfb4;
    }
    ctx->pc = 0x30DFACu;
    SET_GPR_U32(ctx, 31, 0x30DFB4u);
    ctx->pc = 0x30DFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DFACu;
    // 0x30dfb0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30DFACu, 0x30DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFB4u;
label_30dfb4:
    // 0x30dfb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30dfb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30dfb8:
    // 0x30dfb8: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x30dfb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_30dfbc:
    // 0x30dfbc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30dfc0:
    if (ctx->pc == 0x30DFC0u) {
        ctx->pc = 0x30DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFBCu;
        // 0x30dfc0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DFC4u;
        goto label_30dfc4;
    }
    ctx->pc = 0x30DFBCu;
    {
        const bool branch_taken_0x30dfbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFBCu;
        // 0x30dfc0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfbc) {
            ctx->pc = 0x30DFD0u;
            goto label_30dfd0;
        }
    }
    ctx->pc = 0x30DFC4u;
label_30dfc4:
    // 0x30dfc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30dfc8:
    // 0x30dfc8: 0x10000002  b           . + 4 + (0x2 << 2)
label_30dfcc:
    if (ctx->pc == 0x30DFCCu) {
        ctx->pc = 0x30DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFC8u;
        // 0x30dfcc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DFD0u;
        goto label_30dfd0;
    }
    ctx->pc = 0x30DFC8u;
    {
        const bool branch_taken_0x30dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFC8u;
        // 0x30dfcc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfc8) {
            ctx->pc = 0x30DFD4u;
            goto label_30dfd4;
        }
    }
    ctx->pc = 0x30DFD0u;
label_30dfd0:
    // 0x30dfd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30dfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30dfd4:
    // 0x30dfd4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_30dfd8:
    if (ctx->pc == 0x30DFD8u) {
        ctx->pc = 0x30DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFD4u;
        // 0x30dfd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DFDCu;
        goto label_30dfdc;
    }
    ctx->pc = 0x30DFD4u;
    {
        const bool branch_taken_0x30dfd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFD4u;
        // 0x30dfd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfd4) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DFDCu;
label_30dfdc:
    // 0x30dfdc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30dfe0:
    // 0x30dfe0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30dfe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30dfe4:
    // 0x30dfe4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30dfe8:
    // 0x30dfe8: 0x40f809  jalr        $v0
label_30dfec:
    if (ctx->pc == 0x30DFECu) {
        ctx->pc = 0x30DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFE8u;
        // 0x30dfec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DFF0u;
        goto label_30dff0;
    }
    ctx->pc = 0x30DFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30DFF0u);
        ctx->pc = 0x30DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFE8u;
        // 0x30dfec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DFE8u, 0x30DFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30DFF0u;
label_30dff0:
    // 0x30dff0: 0x24030085  addiu       $v1, $zero, 0x85
    ctx->pc = 0x30dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_30dff4:
    // 0x30dff4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_30dff8:
    if (ctx->pc == 0x30DFF8u) {
        ctx->pc = 0x30DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFF4u;
        // 0x30dff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30DFFCu;
        goto label_30dffc;
    }
    ctx->pc = 0x30DFF4u;
    {
        const bool branch_taken_0x30dff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFF4u;
        // 0x30dff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dff4) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
    ctx->pc = 0x30DFFCu;
label_30dffc:
    // 0x30dffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30e000:
    // 0x30e000: 0xc0ba886  jal         func_2EA218
label_30e004:
    if (ctx->pc == 0x30E004u) {
        ctx->pc = 0x30E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E000u;
        // 0x30e004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E008u;
        goto label_30e008;
    }
    ctx->pc = 0x30E000u;
    SET_GPR_U32(ctx, 31, 0x30E008u);
    ctx->pc = 0x30E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E000u;
    // 0x30e004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA218u, 0x30E000u, 0x30E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E008u;
label_30e008:
    // 0x30e008: 0x10000002  b           . + 4 + (0x2 << 2)
label_30e00c:
    if (ctx->pc == 0x30E00Cu) {
        ctx->pc = 0x30E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E008u;
        // 0x30e00c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30E010u;
        goto label_fallthrough_0x30e008;
    }
    ctx->pc = 0x30E008u;
    {
        const bool branch_taken_0x30e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E008u;
        // 0x30e00c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e008) {
            ctx->pc = 0x30E014u;
            return;
        }
    }
label_fallthrough_0x30e008:
    ctx->pc = 0x30E010u;
}

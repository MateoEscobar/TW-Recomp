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

// Function: sub_0025DE20
// Address: 0x25de20 - 0x25e0e0
void sub_0025DE20_0x25de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DE20_0x25de20");
#endif

    switch (ctx->pc) {
        case 0x25de20u: goto label_25de20;
        case 0x25de24u: goto label_25de24;
        case 0x25de28u: goto label_25de28;
        case 0x25de2cu: goto label_25de2c;
        case 0x25de30u: goto label_25de30;
        case 0x25de34u: goto label_25de34;
        case 0x25de38u: goto label_25de38;
        case 0x25de3cu: goto label_25de3c;
        case 0x25de40u: goto label_25de40;
        case 0x25de44u: goto label_25de44;
        case 0x25de48u: goto label_25de48;
        case 0x25de4cu: goto label_25de4c;
        case 0x25de50u: goto label_25de50;
        case 0x25de54u: goto label_25de54;
        case 0x25de58u: goto label_25de58;
        case 0x25de5cu: goto label_25de5c;
        case 0x25de60u: goto label_25de60;
        case 0x25de64u: goto label_25de64;
        case 0x25de68u: goto label_25de68;
        case 0x25de6cu: goto label_25de6c;
        case 0x25de70u: goto label_25de70;
        case 0x25de74u: goto label_25de74;
        case 0x25de78u: goto label_25de78;
        case 0x25de7cu: goto label_25de7c;
        case 0x25de80u: goto label_25de80;
        case 0x25de84u: goto label_25de84;
        case 0x25de88u: goto label_25de88;
        case 0x25de8cu: goto label_25de8c;
        case 0x25de90u: goto label_25de90;
        case 0x25de94u: goto label_25de94;
        case 0x25de98u: goto label_25de98;
        case 0x25de9cu: goto label_25de9c;
        case 0x25dea0u: goto label_25dea0;
        case 0x25dea4u: goto label_25dea4;
        case 0x25dea8u: goto label_25dea8;
        case 0x25deacu: goto label_25deac;
        case 0x25deb0u: goto label_25deb0;
        case 0x25deb4u: goto label_25deb4;
        case 0x25deb8u: goto label_25deb8;
        case 0x25debcu: goto label_25debc;
        case 0x25dec0u: goto label_25dec0;
        case 0x25dec4u: goto label_25dec4;
        case 0x25dec8u: goto label_25dec8;
        case 0x25deccu: goto label_25decc;
        case 0x25ded0u: goto label_25ded0;
        case 0x25ded4u: goto label_25ded4;
        case 0x25ded8u: goto label_25ded8;
        case 0x25dedcu: goto label_25dedc;
        case 0x25dee0u: goto label_25dee0;
        case 0x25dee4u: goto label_25dee4;
        case 0x25dee8u: goto label_25dee8;
        case 0x25deecu: goto label_25deec;
        case 0x25def0u: goto label_25def0;
        case 0x25def4u: goto label_25def4;
        case 0x25def8u: goto label_25def8;
        case 0x25defcu: goto label_25defc;
        case 0x25df00u: goto label_25df00;
        case 0x25df04u: goto label_25df04;
        case 0x25df08u: goto label_25df08;
        case 0x25df0cu: goto label_25df0c;
        case 0x25df10u: goto label_25df10;
        case 0x25df14u: goto label_25df14;
        case 0x25df18u: goto label_25df18;
        case 0x25df1cu: goto label_25df1c;
        case 0x25df20u: goto label_25df20;
        case 0x25df24u: goto label_25df24;
        case 0x25df28u: goto label_25df28;
        case 0x25df2cu: goto label_25df2c;
        case 0x25df30u: goto label_25df30;
        case 0x25df34u: goto label_25df34;
        case 0x25df38u: goto label_25df38;
        case 0x25df3cu: goto label_25df3c;
        case 0x25df40u: goto label_25df40;
        case 0x25df44u: goto label_25df44;
        case 0x25df48u: goto label_25df48;
        case 0x25df4cu: goto label_25df4c;
        case 0x25df50u: goto label_25df50;
        case 0x25df54u: goto label_25df54;
        case 0x25df58u: goto label_25df58;
        case 0x25df5cu: goto label_25df5c;
        case 0x25df60u: goto label_25df60;
        case 0x25df64u: goto label_25df64;
        case 0x25df68u: goto label_25df68;
        case 0x25df6cu: goto label_25df6c;
        case 0x25df70u: goto label_25df70;
        case 0x25df74u: goto label_25df74;
        case 0x25df78u: goto label_25df78;
        case 0x25df7cu: goto label_25df7c;
        case 0x25df80u: goto label_25df80;
        case 0x25df84u: goto label_25df84;
        case 0x25df88u: goto label_25df88;
        case 0x25df8cu: goto label_25df8c;
        case 0x25df90u: goto label_25df90;
        case 0x25df94u: goto label_25df94;
        case 0x25df98u: goto label_25df98;
        case 0x25df9cu: goto label_25df9c;
        case 0x25dfa0u: goto label_25dfa0;
        case 0x25dfa4u: goto label_25dfa4;
        case 0x25dfa8u: goto label_25dfa8;
        case 0x25dfacu: goto label_25dfac;
        case 0x25dfb0u: goto label_25dfb0;
        case 0x25dfb4u: goto label_25dfb4;
        case 0x25dfb8u: goto label_25dfb8;
        case 0x25dfbcu: goto label_25dfbc;
        case 0x25dfc0u: goto label_25dfc0;
        case 0x25dfc4u: goto label_25dfc4;
        case 0x25dfc8u: goto label_25dfc8;
        case 0x25dfccu: goto label_25dfcc;
        case 0x25dfd0u: goto label_25dfd0;
        case 0x25dfd4u: goto label_25dfd4;
        case 0x25dfd8u: goto label_25dfd8;
        case 0x25dfdcu: goto label_25dfdc;
        case 0x25dfe0u: goto label_25dfe0;
        case 0x25dfe4u: goto label_25dfe4;
        case 0x25dfe8u: goto label_25dfe8;
        case 0x25dfecu: goto label_25dfec;
        case 0x25dff0u: goto label_25dff0;
        case 0x25dff4u: goto label_25dff4;
        case 0x25dff8u: goto label_25dff8;
        case 0x25dffcu: goto label_25dffc;
        case 0x25e000u: goto label_25e000;
        case 0x25e004u: goto label_25e004;
        case 0x25e008u: goto label_25e008;
        case 0x25e00cu: goto label_25e00c;
        case 0x25e010u: goto label_25e010;
        case 0x25e014u: goto label_25e014;
        case 0x25e018u: goto label_25e018;
        case 0x25e01cu: goto label_25e01c;
        case 0x25e020u: goto label_25e020;
        case 0x25e024u: goto label_25e024;
        case 0x25e028u: goto label_25e028;
        case 0x25e02cu: goto label_25e02c;
        case 0x25e030u: goto label_25e030;
        case 0x25e034u: goto label_25e034;
        case 0x25e038u: goto label_25e038;
        case 0x25e03cu: goto label_25e03c;
        case 0x25e040u: goto label_25e040;
        case 0x25e044u: goto label_25e044;
        case 0x25e048u: goto label_25e048;
        case 0x25e04cu: goto label_25e04c;
        case 0x25e050u: goto label_25e050;
        case 0x25e054u: goto label_25e054;
        case 0x25e058u: goto label_25e058;
        case 0x25e05cu: goto label_25e05c;
        case 0x25e060u: goto label_25e060;
        case 0x25e064u: goto label_25e064;
        case 0x25e068u: goto label_25e068;
        case 0x25e06cu: goto label_25e06c;
        case 0x25e070u: goto label_25e070;
        case 0x25e074u: goto label_25e074;
        case 0x25e078u: goto label_25e078;
        case 0x25e07cu: goto label_25e07c;
        case 0x25e080u: goto label_25e080;
        case 0x25e084u: goto label_25e084;
        case 0x25e088u: goto label_25e088;
        case 0x25e08cu: goto label_25e08c;
        case 0x25e090u: goto label_25e090;
        case 0x25e094u: goto label_25e094;
        case 0x25e098u: goto label_25e098;
        case 0x25e09cu: goto label_25e09c;
        case 0x25e0a0u: goto label_25e0a0;
        case 0x25e0a4u: goto label_25e0a4;
        case 0x25e0a8u: goto label_25e0a8;
        case 0x25e0acu: goto label_25e0ac;
        case 0x25e0b0u: goto label_25e0b0;
        case 0x25e0b4u: goto label_25e0b4;
        case 0x25e0b8u: goto label_25e0b8;
        case 0x25e0bcu: goto label_25e0bc;
        case 0x25e0c0u: goto label_25e0c0;
        case 0x25e0c4u: goto label_25e0c4;
        case 0x25e0c8u: goto label_25e0c8;
        case 0x25e0ccu: goto label_25e0cc;
        case 0x25e0d0u: goto label_25e0d0;
        case 0x25e0d4u: goto label_25e0d4;
        case 0x25e0d8u: goto label_25e0d8;
        case 0x25e0dcu: goto label_25e0dc;
        default: break;
    }

    ctx->pc = 0x25de20u;

label_25de20:
    // 0x25de20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_25de24:
    // 0x25de24: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_25de28:
    // 0x25de28: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x25de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_25de2c:
    // 0x25de2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25de2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25de30:
    // 0x25de30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_25de34:
    // 0x25de34: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x25de34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25de38:
    // 0x25de38: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25de3c:
    // 0x25de3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25de3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25de40:
    // 0x25de40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25de40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25de44:
    // 0x25de44: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25de44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_25de48:
    // 0x25de48: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_25de4c:
    // 0x25de4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25de4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25de50:
    // 0x25de50: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x25de50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_25de54:
    // 0x25de54: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x25de54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25de58:
    // 0x25de58: 0xc089998  jal         func_226660
label_25de5c:
    if (ctx->pc == 0x25DE5Cu) {
        ctx->pc = 0x25DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE58u;
        // 0x25de5c: 0x8e3300d4  lw          $s3, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE60u;
        goto label_25de60;
    }
    ctx->pc = 0x25DE58u;
    SET_GPR_U32(ctx, 31, 0x25DE60u);
    ctx->pc = 0x25DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE58u;
    // 0x25de5c: 0x8e3300d4  lw          $s3, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25DE58u, 0x25DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE60u;
label_25de60:
    // 0x25de60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25de64:
    if (ctx->pc == 0x25DE64u) {
        ctx->pc = 0x25DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE60u;
        // 0x25de64: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE68u;
        goto label_25de68;
    }
    ctx->pc = 0x25DE60u;
    {
        const bool branch_taken_0x25de60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE60u;
        // 0x25de64: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de60) {
            ctx->pc = 0x25DE7Cu;
            goto label_25de7c;
        }
    }
    ctx->pc = 0x25DE68u;
label_25de68:
    // 0x25de68: 0xc0899ae  jal         func_2266B8
label_25de6c:
    if (ctx->pc == 0x25DE6Cu) {
        ctx->pc = 0x25DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE68u;
        // 0x25de6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE70u;
        goto label_25de70;
    }
    ctx->pc = 0x25DE68u;
    SET_GPR_U32(ctx, 31, 0x25DE70u);
    ctx->pc = 0x25DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE68u;
    // 0x25de6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25DE68u, 0x25DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE70u;
label_25de70:
    // 0x25de70: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x25de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_25de74:
    // 0x25de74: 0x1043008f  beq         $v0, $v1, . + 4 + (0x8F << 2)
label_25de78:
    if (ctx->pc == 0x25DE78u) {
        ctx->pc = 0x25DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE74u;
        // 0x25de78: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE7Cu;
        goto label_25de7c;
    }
    ctx->pc = 0x25DE74u;
    {
        const bool branch_taken_0x25de74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE74u;
        // 0x25de78: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de74) {
            ctx->pc = 0x25E0B4u;
            goto label_25e0b4;
        }
    }
    ctx->pc = 0x25DE7Cu;
label_25de7c:
    // 0x25de7c: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25de7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25de80:
    // 0x25de80: 0xc041532  jal         func_1054C8
label_25de84:
    if (ctx->pc == 0x25DE84u) {
        ctx->pc = 0x25DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE80u;
        // 0x25de84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE88u;
        goto label_25de88;
    }
    ctx->pc = 0x25DE80u;
    SET_GPR_U32(ctx, 31, 0x25DE88u);
    ctx->pc = 0x25DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE80u;
    // 0x25de84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25DE80u, 0x25DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE88u;
label_25de88:
    // 0x25de88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25de88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25de8c:
    // 0x25de8c: 0xc041532  jal         func_1054C8
label_25de90:
    if (ctx->pc == 0x25DE90u) {
        ctx->pc = 0x25DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE8Cu;
        // 0x25de90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DE94u;
        goto label_25de94;
    }
    ctx->pc = 0x25DE8Cu;
    SET_GPR_U32(ctx, 31, 0x25DE94u);
    ctx->pc = 0x25DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE8Cu;
    // 0x25de90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25DE8Cu, 0x25DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE94u;
label_25de94:
    // 0x25de94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25de94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25de98:
    // 0x25de98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25de98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25de9c:
    // 0x25de9c: 0xc089988  jal         func_226620
label_25dea0:
    if (ctx->pc == 0x25DEA0u) {
        ctx->pc = 0x25DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE9Cu;
        // 0x25dea0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEA4u;
        goto label_25dea4;
    }
    ctx->pc = 0x25DE9Cu;
    SET_GPR_U32(ctx, 31, 0x25DEA4u);
    ctx->pc = 0x25DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DE9Cu;
    // 0x25dea0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x25DE9Cu, 0x25DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEA4u;
label_25dea4:
    // 0x25dea4: 0xc0a007a  jal         func_2801E8
label_25dea8:
    if (ctx->pc == 0x25DEA8u) {
        ctx->pc = 0x25DEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEA4u;
        // 0x25dea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEACu;
        goto label_25deac;
    }
    ctx->pc = 0x25DEA4u;
    SET_GPR_U32(ctx, 31, 0x25DEACu);
    ctx->pc = 0x25DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DEA4u;
    // 0x25dea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x25DEA4u, 0x25DEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEACu;
label_25deac:
    // 0x25deac: 0xc0a001a  jal         func_280068
label_25deb0:
    if (ctx->pc == 0x25DEB0u) {
        ctx->pc = 0x25DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEACu;
        // 0x25deb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEB4u;
        goto label_25deb4;
    }
    ctx->pc = 0x25DEACu;
    SET_GPR_U32(ctx, 31, 0x25DEB4u);
    ctx->pc = 0x25DEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DEACu;
    // 0x25deb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x25DEACu, 0x25DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEB4u;
label_25deb4:
    // 0x25deb4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_25deb8:
    if (ctx->pc == 0x25DEB8u) {
        ctx->pc = 0x25DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEB4u;
        // 0x25deb8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEBCu;
        goto label_25debc;
    }
    ctx->pc = 0x25DEB4u;
    {
        const bool branch_taken_0x25deb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEB4u;
        // 0x25deb8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25deb4) {
            ctx->pc = 0x25DED4u;
            goto label_25ded4;
        }
    }
    ctx->pc = 0x25DEBCu;
label_25debc:
    // 0x25debc: 0x8e660084  lw          $a2, 0x84($s3)
    ctx->pc = 0x25debcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_25dec0:
    // 0x25dec0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25dec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25dec4:
    // 0x25dec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25dec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25dec8:
    // 0x25dec8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25dec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25decc:
    // 0x25decc: 0xc04159e  jal         func_105678
label_25ded0:
    if (ctx->pc == 0x25DED0u) {
        ctx->pc = 0x25DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DECCu;
        // 0x25ded0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DED4u;
        goto label_25ded4;
    }
    ctx->pc = 0x25DECCu;
    SET_GPR_U32(ctx, 31, 0x25DED4u);
    ctx->pc = 0x25DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DECCu;
    // 0x25ded0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25DECCu, 0x25DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DED4u;
label_25ded4:
    // 0x25ded4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ded8:
    // 0x25ded8: 0xc089998  jal         func_226660
label_25dedc:
    if (ctx->pc == 0x25DEDCu) {
        ctx->pc = 0x25DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DED8u;
        // 0x25dedc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEE0u;
        goto label_25dee0;
    }
    ctx->pc = 0x25DED8u;
    SET_GPR_U32(ctx, 31, 0x25DEE0u);
    ctx->pc = 0x25DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DED8u;
    // 0x25dedc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25DED8u, 0x25DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEE0u;
label_25dee0:
    // 0x25dee0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_25dee4:
    if (ctx->pc == 0x25DEE4u) {
        ctx->pc = 0x25DEE8u;
        goto label_25dee8;
    }
    ctx->pc = 0x25DEE0u;
    {
        const bool branch_taken_0x25dee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dee0) {
            ctx->pc = 0x25DF88u;
            goto label_25df88;
        }
    }
    ctx->pc = 0x25DEE8u;
label_25dee8:
    // 0x25dee8: 0xc08c90c  jal         func_232430
label_25deec:
    if (ctx->pc == 0x25DEECu) {
        ctx->pc = 0x25DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEE8u;
        // 0x25deec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DEF0u;
        goto label_25def0;
    }
    ctx->pc = 0x25DEE8u;
    SET_GPR_U32(ctx, 31, 0x25DEF0u);
    ctx->pc = 0x25DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DEE8u;
    // 0x25deec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232430u, 0x25DEE8u, 0x25DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEF0u;
label_25def0:
    // 0x25def0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x25def0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_25def4:
    // 0x25def4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25def4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25def8:
    // 0x25def8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25def8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25defc:
    // 0x25defc: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_25df00:
    if (ctx->pc == 0x25DF00u) {
        ctx->pc = 0x25DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEFCu;
        // 0x25df00: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF04u;
        goto label_25df04;
    }
    ctx->pc = 0x25DEFCu;
    {
        const bool branch_taken_0x25defc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DEFCu;
        // 0x25df00: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25defc) {
            ctx->pc = 0x25DF34u;
            goto label_25df34;
        }
    }
    ctx->pc = 0x25DF04u;
label_25df04:
    // 0x25df04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25df04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25df08:
    // 0x25df08: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x25df08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25df0c:
    // 0x25df0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25df0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25df10:
    // 0x25df10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25df14:
    // 0x25df14: 0x40f809  jalr        $v0
label_25df18:
    if (ctx->pc == 0x25DF18u) {
        ctx->pc = 0x25DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF14u;
        // 0x25df18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF1Cu;
        goto label_25df1c;
    }
    ctx->pc = 0x25DF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25DF1Cu);
        ctx->pc = 0x25DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF14u;
        // 0x25df18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DF14u, 0x25DF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DF1Cu;
label_25df1c:
    // 0x25df1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25df1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25df20:
    // 0x25df20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25df20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25df24:
    // 0x25df24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25df24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25df28:
    // 0x25df28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25df28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25df2c:
    // 0x25df2c: 0xc041b20  jal         func_106C80
label_25df30:
    if (ctx->pc == 0x25DF30u) {
        ctx->pc = 0x25DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF2Cu;
        // 0x25df30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF34u;
        goto label_25df34;
    }
    ctx->pc = 0x25DF2Cu;
    SET_GPR_U32(ctx, 31, 0x25DF34u);
    ctx->pc = 0x25DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF2Cu;
    // 0x25df30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25DF2Cu, 0x25DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF34u;
label_25df34:
    // 0x25df34: 0xc05d484  jal         func_175210
label_25df38:
    if (ctx->pc == 0x25DF38u) {
        ctx->pc = 0x25DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF34u;
        // 0x25df38: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF3Cu;
        goto label_25df3c;
    }
    ctx->pc = 0x25DF34u;
    SET_GPR_U32(ctx, 31, 0x25DF3Cu);
    ctx->pc = 0x25DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF34u;
    // 0x25df38: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25DF34u, 0x25DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF3Cu;
label_25df3c:
    // 0x25df3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25df40:
    // 0x25df40: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25df40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25df44:
    // 0x25df44: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25df44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25df48:
    // 0x25df48: 0xa0f809  jalr        $a1
label_25df4c:
    if (ctx->pc == 0x25DF4Cu) {
        ctx->pc = 0x25DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF48u;
        // 0x25df4c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF50u;
        goto label_25df50;
    }
    ctx->pc = 0x25DF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25DF50u);
        ctx->pc = 0x25DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF48u;
        // 0x25df4c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DF48u, 0x25DF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DF50u;
label_25df50:
    // 0x25df50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25df50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25df54:
    // 0x25df54: 0xc087016  jal         func_21C058
label_25df58:
    if (ctx->pc == 0x25DF58u) {
        ctx->pc = 0x25DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF54u;
        // 0x25df58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF5Cu;
        goto label_25df5c;
    }
    ctx->pc = 0x25DF54u;
    SET_GPR_U32(ctx, 31, 0x25DF5Cu);
    ctx->pc = 0x25DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF54u;
    // 0x25df58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25DF54u, 0x25DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF5Cu;
label_25df5c:
    // 0x25df5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25df5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25df60:
    // 0x25df60: 0xc089990  jal         func_226640
label_25df64:
    if (ctx->pc == 0x25DF64u) {
        ctx->pc = 0x25DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF60u;
        // 0x25df64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF68u;
        goto label_25df68;
    }
    ctx->pc = 0x25DF60u;
    SET_GPR_U32(ctx, 31, 0x25DF68u);
    ctx->pc = 0x25DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF60u;
    // 0x25df64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25DF60u, 0x25DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF68u;
label_25df68:
    // 0x25df68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25df68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25df6c:
    // 0x25df6c: 0xc05d53a  jal         func_1754E8
label_25df70:
    if (ctx->pc == 0x25DF70u) {
        ctx->pc = 0x25DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF6Cu;
        // 0x25df70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF74u;
        goto label_25df74;
    }
    ctx->pc = 0x25DF6Cu;
    SET_GPR_U32(ctx, 31, 0x25DF74u);
    ctx->pc = 0x25DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF6Cu;
    // 0x25df70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25DF6Cu, 0x25DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF74u;
label_25df74:
    // 0x25df74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25df74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25df78:
    // 0x25df78: 0xc089990  jal         func_226640
label_25df7c:
    if (ctx->pc == 0x25DF7Cu) {
        ctx->pc = 0x25DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF78u;
        // 0x25df7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF80u;
        goto label_25df80;
    }
    ctx->pc = 0x25DF78u;
    SET_GPR_U32(ctx, 31, 0x25DF80u);
    ctx->pc = 0x25DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DF78u;
    // 0x25df7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25DF78u, 0x25DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF80u;
label_25df80:
    // 0x25df80: 0x1000004a  b           . + 4 + (0x4A << 2)
label_25df84:
    if (ctx->pc == 0x25DF84u) {
        ctx->pc = 0x25DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF80u;
        // 0x25df84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DF88u;
        goto label_25df88;
    }
    ctx->pc = 0x25DF80u;
    {
        const bool branch_taken_0x25df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DF80u;
        // 0x25df84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df80) {
            ctx->pc = 0x25E0ACu;
            goto label_25e0ac;
        }
    }
    ctx->pc = 0x25DF88u;
label_25df88:
    // 0x25df88: 0x16c00023  bnez        $s6, . + 4 + (0x23 << 2)
label_25df8c:
    if (ctx->pc == 0x25DF8Cu) {
        ctx->pc = 0x25DF90u;
        goto label_25df90;
    }
    ctx->pc = 0x25DF88u;
    {
        const bool branch_taken_0x25df88 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x25df88) {
            ctx->pc = 0x25E018u;
            goto label_25e018;
        }
    }
    ctx->pc = 0x25DF90u;
label_25df90:
    // 0x25df90: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_25df94:
    if (ctx->pc == 0x25DF94u) {
        ctx->pc = 0x25DF98u;
        goto label_25df98;
    }
    ctx->pc = 0x25DF90u;
    {
        const bool branch_taken_0x25df90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25df90) {
            ctx->pc = 0x25DFD0u;
            goto label_25dfd0;
        }
    }
    ctx->pc = 0x25DF98u;
label_25df98:
    // 0x25df98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25df9c:
    // 0x25df9c: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x25df9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25dfa0:
    // 0x25dfa0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25dfa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25dfa4:
    // 0x25dfa4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25dfa8:
    // 0x25dfa8: 0x40f809  jalr        $v0
label_25dfac:
    if (ctx->pc == 0x25DFACu) {
        ctx->pc = 0x25DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFA8u;
        // 0x25dfac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DFB0u;
        goto label_25dfb0;
    }
    ctx->pc = 0x25DFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25DFB0u);
        ctx->pc = 0x25DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFA8u;
        // 0x25dfac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DFA8u, 0x25DFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DFB0u;
label_25dfb0:
    // 0x25dfb0: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25dfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25dfb4:
    // 0x25dfb4: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25dfb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25dfb8:
    // 0x25dfb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25dfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25dfbc:
    // 0x25dfbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25dfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25dfc0:
    // 0x25dfc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25dfc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25dfc4:
    // 0x25dfc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25dfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25dfc8:
    // 0x25dfc8: 0xc041b20  jal         func_106C80
label_25dfcc:
    if (ctx->pc == 0x25DFCCu) {
        ctx->pc = 0x25DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFC8u;
        // 0x25dfcc: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DFD0u;
        goto label_25dfd0;
    }
    ctx->pc = 0x25DFC8u;
    SET_GPR_U32(ctx, 31, 0x25DFD0u);
    ctx->pc = 0x25DFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFC8u;
    // 0x25dfcc: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25DFC8u, 0x25DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFD0u;
label_25dfd0:
    // 0x25dfd0: 0xc05d484  jal         func_175210
label_25dfd4:
    if (ctx->pc == 0x25DFD4u) {
        ctx->pc = 0x25DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFD0u;
        // 0x25dfd4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DFD8u;
        goto label_25dfd8;
    }
    ctx->pc = 0x25DFD0u;
    SET_GPR_U32(ctx, 31, 0x25DFD8u);
    ctx->pc = 0x25DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFD0u;
    // 0x25dfd4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25DFD0u, 0x25DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFD8u;
label_25dfd8:
    // 0x25dfd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25dfdc:
    // 0x25dfdc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25dfdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25dfe0:
    // 0x25dfe0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25dfe4:
    // 0x25dfe4: 0xa0f809  jalr        $a1
label_25dfe8:
    if (ctx->pc == 0x25DFE8u) {
        ctx->pc = 0x25DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFE4u;
        // 0x25dfe8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DFECu;
        goto label_25dfec;
    }
    ctx->pc = 0x25DFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25DFECu);
        ctx->pc = 0x25DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFE4u;
        // 0x25dfe8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DFE4u, 0x25DFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25DFECu;
label_25dfec:
    // 0x25dfec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25dfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25dff0:
    // 0x25dff0: 0xc087016  jal         func_21C058
label_25dff4:
    if (ctx->pc == 0x25DFF4u) {
        ctx->pc = 0x25DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFF0u;
        // 0x25dff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DFF8u;
        goto label_25dff8;
    }
    ctx->pc = 0x25DFF0u;
    SET_GPR_U32(ctx, 31, 0x25DFF8u);
    ctx->pc = 0x25DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFF0u;
    // 0x25dff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25DFF0u, 0x25DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DFF8u;
label_25dff8:
    // 0x25dff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25dff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25dffc:
    // 0x25dffc: 0xc089990  jal         func_226640
label_25e000:
    if (ctx->pc == 0x25E000u) {
        ctx->pc = 0x25E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DFFCu;
        // 0x25e000: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E004u;
        goto label_25e004;
    }
    ctx->pc = 0x25DFFCu;
    SET_GPR_U32(ctx, 31, 0x25E004u);
    ctx->pc = 0x25E000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DFFCu;
    // 0x25e000: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25DFFCu, 0x25E004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E004u;
label_25e004:
    // 0x25e004: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25e004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25e008:
    // 0x25e008: 0xc05d53a  jal         func_1754E8
label_25e00c:
    if (ctx->pc == 0x25E00Cu) {
        ctx->pc = 0x25E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E008u;
        // 0x25e00c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E010u;
        goto label_25e010;
    }
    ctx->pc = 0x25E008u;
    SET_GPR_U32(ctx, 31, 0x25E010u);
    ctx->pc = 0x25E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E008u;
    // 0x25e00c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25E008u, 0x25E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E010u;
label_25e010:
    // 0x25e010: 0x10000026  b           . + 4 + (0x26 << 2)
label_25e014:
    if (ctx->pc == 0x25E014u) {
        ctx->pc = 0x25E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E010u;
        // 0x25e014: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E018u;
        goto label_25e018;
    }
    ctx->pc = 0x25E010u;
    {
        const bool branch_taken_0x25e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E010u;
        // 0x25e014: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e010) {
            ctx->pc = 0x25E0ACu;
            goto label_25e0ac;
        }
    }
    ctx->pc = 0x25E018u;
label_25e018:
    // 0x25e018: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_25e01c:
    if (ctx->pc == 0x25E01Cu) {
        ctx->pc = 0x25E020u;
        goto label_25e020;
    }
    ctx->pc = 0x25E018u;
    {
        const bool branch_taken_0x25e018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e018) {
            ctx->pc = 0x25E068u;
            goto label_25e068;
        }
    }
    ctx->pc = 0x25E020u;
label_25e020:
    // 0x25e020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e024:
    // 0x25e024: 0xc08c90c  jal         func_232430
label_25e028:
    if (ctx->pc == 0x25E028u) {
        ctx->pc = 0x25E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E024u;
        // 0x25e028: 0x8e3000d8  lw          $s0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E02Cu;
        goto label_25e02c;
    }
    ctx->pc = 0x25E024u;
    SET_GPR_U32(ctx, 31, 0x25E02Cu);
    ctx->pc = 0x25E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E024u;
    // 0x25e028: 0x8e3000d8  lw          $s0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232430u, 0x25E024u, 0x25E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E02Cu;
label_25e02c:
    // 0x25e02c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25e030:
    // 0x25e030: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x25e030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_25e034:
    // 0x25e034: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x25e034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_25e038:
    // 0x25e038: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25e038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25e03c:
    // 0x25e03c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25e03cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25e040:
    // 0x25e040: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x25e040u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_25e044:
    // 0x25e044: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25e044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25e048:
    // 0x25e048: 0x40f809  jalr        $v0
label_25e04c:
    if (ctx->pc == 0x25E04Cu) {
        ctx->pc = 0x25E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E048u;
        // 0x25e04c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E050u;
        goto label_25e050;
    }
    ctx->pc = 0x25E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E050u);
        ctx->pc = 0x25E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E048u;
        // 0x25e04c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E048u, 0x25E050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E050u;
label_25e050:
    // 0x25e050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25e050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e054:
    // 0x25e054: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25e054u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25e058:
    // 0x25e058: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25e058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e05c:
    // 0x25e05c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25e05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e060:
    // 0x25e060: 0xc041b20  jal         func_106C80
label_25e064:
    if (ctx->pc == 0x25E064u) {
        ctx->pc = 0x25E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E060u;
        // 0x25e064: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E068u;
        goto label_25e068;
    }
    ctx->pc = 0x25E060u;
    SET_GPR_U32(ctx, 31, 0x25E068u);
    ctx->pc = 0x25E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E060u;
    // 0x25e064: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25E060u, 0x25E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E068u;
label_25e068:
    // 0x25e068: 0xc05d484  jal         func_175210
label_25e06c:
    if (ctx->pc == 0x25E06Cu) {
        ctx->pc = 0x25E06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E068u;
        // 0x25e06c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E070u;
        goto label_25e070;
    }
    ctx->pc = 0x25E068u;
    SET_GPR_U32(ctx, 31, 0x25E070u);
    ctx->pc = 0x25E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E068u;
    // 0x25e06c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25E068u, 0x25E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E070u;
label_25e070:
    // 0x25e070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e074:
    // 0x25e074: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25e074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25e078:
    // 0x25e078: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25e078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25e07c:
    // 0x25e07c: 0xa0f809  jalr        $a1
label_25e080:
    if (ctx->pc == 0x25E080u) {
        ctx->pc = 0x25E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E07Cu;
        // 0x25e080: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E084u;
        goto label_25e084;
    }
    ctx->pc = 0x25E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25E084u);
        ctx->pc = 0x25E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E07Cu;
        // 0x25e080: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E07Cu, 0x25E084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E084u;
label_25e084:
    // 0x25e084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e088:
    // 0x25e088: 0xc087016  jal         func_21C058
label_25e08c:
    if (ctx->pc == 0x25E08Cu) {
        ctx->pc = 0x25E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E088u;
        // 0x25e08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E090u;
        goto label_25e090;
    }
    ctx->pc = 0x25E088u;
    SET_GPR_U32(ctx, 31, 0x25E090u);
    ctx->pc = 0x25E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E088u;
    // 0x25e08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25E088u, 0x25E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E090u;
label_25e090:
    // 0x25e090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e094:
    // 0x25e094: 0xc089990  jal         func_226640
label_25e098:
    if (ctx->pc == 0x25E098u) {
        ctx->pc = 0x25E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E094u;
        // 0x25e098: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E09Cu;
        goto label_25e09c;
    }
    ctx->pc = 0x25E094u;
    SET_GPR_U32(ctx, 31, 0x25E09Cu);
    ctx->pc = 0x25E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E094u;
    // 0x25e098: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25E094u, 0x25E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E09Cu;
label_25e09c:
    // 0x25e09c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25e09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25e0a0:
    // 0x25e0a0: 0xc05d53a  jal         func_1754E8
label_25e0a4:
    if (ctx->pc == 0x25E0A4u) {
        ctx->pc = 0x25E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0A0u;
        // 0x25e0a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0A8u;
        goto label_25e0a8;
    }
    ctx->pc = 0x25E0A0u;
    SET_GPR_U32(ctx, 31, 0x25E0A8u);
    ctx->pc = 0x25E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0A0u;
    // 0x25e0a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25E0A0u, 0x25E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0A8u;
label_25e0a8:
    // 0x25e0a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25e0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25e0ac:
    // 0x25e0ac: 0xc05d4f6  jal         func_1753D8
label_25e0b0:
    if (ctx->pc == 0x25E0B0u) {
        ctx->pc = 0x25E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0ACu;
        // 0x25e0b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0B4u;
        goto label_25e0b4;
    }
    ctx->pc = 0x25E0ACu;
    SET_GPR_U32(ctx, 31, 0x25E0B4u);
    ctx->pc = 0x25E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0ACu;
    // 0x25e0b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25E0ACu, 0x25E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E0B4u;
label_25e0b4:
    // 0x25e0b4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25e0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25e0b8:
    // 0x25e0b8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25e0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25e0bc:
    // 0x25e0bc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25e0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25e0c0:
    // 0x25e0c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25e0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25e0c4:
    // 0x25e0c4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25e0c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25e0c8:
    // 0x25e0c8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25e0c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25e0cc:
    // 0x25e0cc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x25e0ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e0d0:
    // 0x25e0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e0d4:
    // 0x25e0d4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x25e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25e0d8:
    // 0x25e0d8: 0x3e00008  jr          $ra
label_25e0dc:
    if (ctx->pc == 0x25E0DCu) {
        ctx->pc = 0x25E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0D8u;
        // 0x25e0dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E0E0u;
        goto label_fallthrough_0x25e0d8;
    }
    ctx->pc = 0x25E0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0D8u;
        // 0x25e0dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e0d8:
    ctx->pc = 0x25E0E0u;
}

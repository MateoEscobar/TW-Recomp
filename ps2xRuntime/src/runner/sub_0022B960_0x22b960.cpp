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

// Function: sub_0022B960
// Address: 0x22b960 - 0x22bce0
void sub_0022B960_0x22b960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B960_0x22b960");
#endif

    switch (ctx->pc) {
        case 0x22b960u: goto label_22b960;
        case 0x22b964u: goto label_22b964;
        case 0x22b968u: goto label_22b968;
        case 0x22b96cu: goto label_22b96c;
        case 0x22b970u: goto label_22b970;
        case 0x22b974u: goto label_22b974;
        case 0x22b978u: goto label_22b978;
        case 0x22b97cu: goto label_22b97c;
        case 0x22b980u: goto label_22b980;
        case 0x22b984u: goto label_22b984;
        case 0x22b988u: goto label_22b988;
        case 0x22b98cu: goto label_22b98c;
        case 0x22b990u: goto label_22b990;
        case 0x22b994u: goto label_22b994;
        case 0x22b998u: goto label_22b998;
        case 0x22b99cu: goto label_22b99c;
        case 0x22b9a0u: goto label_22b9a0;
        case 0x22b9a4u: goto label_22b9a4;
        case 0x22b9a8u: goto label_22b9a8;
        case 0x22b9acu: goto label_22b9ac;
        case 0x22b9b0u: goto label_22b9b0;
        case 0x22b9b4u: goto label_22b9b4;
        case 0x22b9b8u: goto label_22b9b8;
        case 0x22b9bcu: goto label_22b9bc;
        case 0x22b9c0u: goto label_22b9c0;
        case 0x22b9c4u: goto label_22b9c4;
        case 0x22b9c8u: goto label_22b9c8;
        case 0x22b9ccu: goto label_22b9cc;
        case 0x22b9d0u: goto label_22b9d0;
        case 0x22b9d4u: goto label_22b9d4;
        case 0x22b9d8u: goto label_22b9d8;
        case 0x22b9dcu: goto label_22b9dc;
        case 0x22b9e0u: goto label_22b9e0;
        case 0x22b9e4u: goto label_22b9e4;
        case 0x22b9e8u: goto label_22b9e8;
        case 0x22b9ecu: goto label_22b9ec;
        case 0x22b9f0u: goto label_22b9f0;
        case 0x22b9f4u: goto label_22b9f4;
        case 0x22b9f8u: goto label_22b9f8;
        case 0x22b9fcu: goto label_22b9fc;
        case 0x22ba00u: goto label_22ba00;
        case 0x22ba04u: goto label_22ba04;
        case 0x22ba08u: goto label_22ba08;
        case 0x22ba0cu: goto label_22ba0c;
        case 0x22ba10u: goto label_22ba10;
        case 0x22ba14u: goto label_22ba14;
        case 0x22ba18u: goto label_22ba18;
        case 0x22ba1cu: goto label_22ba1c;
        case 0x22ba20u: goto label_22ba20;
        case 0x22ba24u: goto label_22ba24;
        case 0x22ba28u: goto label_22ba28;
        case 0x22ba2cu: goto label_22ba2c;
        case 0x22ba30u: goto label_22ba30;
        case 0x22ba34u: goto label_22ba34;
        case 0x22ba38u: goto label_22ba38;
        case 0x22ba3cu: goto label_22ba3c;
        case 0x22ba40u: goto label_22ba40;
        case 0x22ba44u: goto label_22ba44;
        case 0x22ba48u: goto label_22ba48;
        case 0x22ba4cu: goto label_22ba4c;
        case 0x22ba50u: goto label_22ba50;
        case 0x22ba54u: goto label_22ba54;
        case 0x22ba58u: goto label_22ba58;
        case 0x22ba5cu: goto label_22ba5c;
        case 0x22ba60u: goto label_22ba60;
        case 0x22ba64u: goto label_22ba64;
        case 0x22ba68u: goto label_22ba68;
        case 0x22ba6cu: goto label_22ba6c;
        case 0x22ba70u: goto label_22ba70;
        case 0x22ba74u: goto label_22ba74;
        case 0x22ba78u: goto label_22ba78;
        case 0x22ba7cu: goto label_22ba7c;
        case 0x22ba80u: goto label_22ba80;
        case 0x22ba84u: goto label_22ba84;
        case 0x22ba88u: goto label_22ba88;
        case 0x22ba8cu: goto label_22ba8c;
        case 0x22ba90u: goto label_22ba90;
        case 0x22ba94u: goto label_22ba94;
        case 0x22ba98u: goto label_22ba98;
        case 0x22ba9cu: goto label_22ba9c;
        case 0x22baa0u: goto label_22baa0;
        case 0x22baa4u: goto label_22baa4;
        case 0x22baa8u: goto label_22baa8;
        case 0x22baacu: goto label_22baac;
        case 0x22bab0u: goto label_22bab0;
        case 0x22bab4u: goto label_22bab4;
        case 0x22bab8u: goto label_22bab8;
        case 0x22babcu: goto label_22babc;
        case 0x22bac0u: goto label_22bac0;
        case 0x22bac4u: goto label_22bac4;
        case 0x22bac8u: goto label_22bac8;
        case 0x22baccu: goto label_22bacc;
        case 0x22bad0u: goto label_22bad0;
        case 0x22bad4u: goto label_22bad4;
        case 0x22bad8u: goto label_22bad8;
        case 0x22badcu: goto label_22badc;
        case 0x22bae0u: goto label_22bae0;
        case 0x22bae4u: goto label_22bae4;
        case 0x22bae8u: goto label_22bae8;
        case 0x22baecu: goto label_22baec;
        case 0x22baf0u: goto label_22baf0;
        case 0x22baf4u: goto label_22baf4;
        case 0x22baf8u: goto label_22baf8;
        case 0x22bafcu: goto label_22bafc;
        case 0x22bb00u: goto label_22bb00;
        case 0x22bb04u: goto label_22bb04;
        case 0x22bb08u: goto label_22bb08;
        case 0x22bb0cu: goto label_22bb0c;
        case 0x22bb10u: goto label_22bb10;
        case 0x22bb14u: goto label_22bb14;
        case 0x22bb18u: goto label_22bb18;
        case 0x22bb1cu: goto label_22bb1c;
        case 0x22bb20u: goto label_22bb20;
        case 0x22bb24u: goto label_22bb24;
        case 0x22bb28u: goto label_22bb28;
        case 0x22bb2cu: goto label_22bb2c;
        case 0x22bb30u: goto label_22bb30;
        case 0x22bb34u: goto label_22bb34;
        case 0x22bb38u: goto label_22bb38;
        case 0x22bb3cu: goto label_22bb3c;
        case 0x22bb40u: goto label_22bb40;
        case 0x22bb44u: goto label_22bb44;
        case 0x22bb48u: goto label_22bb48;
        case 0x22bb4cu: goto label_22bb4c;
        case 0x22bb50u: goto label_22bb50;
        case 0x22bb54u: goto label_22bb54;
        case 0x22bb58u: goto label_22bb58;
        case 0x22bb5cu: goto label_22bb5c;
        case 0x22bb60u: goto label_22bb60;
        case 0x22bb64u: goto label_22bb64;
        case 0x22bb68u: goto label_22bb68;
        case 0x22bb6cu: goto label_22bb6c;
        case 0x22bb70u: goto label_22bb70;
        case 0x22bb74u: goto label_22bb74;
        case 0x22bb78u: goto label_22bb78;
        case 0x22bb7cu: goto label_22bb7c;
        case 0x22bb80u: goto label_22bb80;
        case 0x22bb84u: goto label_22bb84;
        case 0x22bb88u: goto label_22bb88;
        case 0x22bb8cu: goto label_22bb8c;
        case 0x22bb90u: goto label_22bb90;
        case 0x22bb94u: goto label_22bb94;
        case 0x22bb98u: goto label_22bb98;
        case 0x22bb9cu: goto label_22bb9c;
        case 0x22bba0u: goto label_22bba0;
        case 0x22bba4u: goto label_22bba4;
        case 0x22bba8u: goto label_22bba8;
        case 0x22bbacu: goto label_22bbac;
        case 0x22bbb0u: goto label_22bbb0;
        case 0x22bbb4u: goto label_22bbb4;
        case 0x22bbb8u: goto label_22bbb8;
        case 0x22bbbcu: goto label_22bbbc;
        case 0x22bbc0u: goto label_22bbc0;
        case 0x22bbc4u: goto label_22bbc4;
        case 0x22bbc8u: goto label_22bbc8;
        case 0x22bbccu: goto label_22bbcc;
        case 0x22bbd0u: goto label_22bbd0;
        case 0x22bbd4u: goto label_22bbd4;
        case 0x22bbd8u: goto label_22bbd8;
        case 0x22bbdcu: goto label_22bbdc;
        case 0x22bbe0u: goto label_22bbe0;
        case 0x22bbe4u: goto label_22bbe4;
        case 0x22bbe8u: goto label_22bbe8;
        case 0x22bbecu: goto label_22bbec;
        case 0x22bbf0u: goto label_22bbf0;
        case 0x22bbf4u: goto label_22bbf4;
        case 0x22bbf8u: goto label_22bbf8;
        case 0x22bbfcu: goto label_22bbfc;
        case 0x22bc00u: goto label_22bc00;
        case 0x22bc04u: goto label_22bc04;
        case 0x22bc08u: goto label_22bc08;
        case 0x22bc0cu: goto label_22bc0c;
        case 0x22bc10u: goto label_22bc10;
        case 0x22bc14u: goto label_22bc14;
        case 0x22bc18u: goto label_22bc18;
        case 0x22bc1cu: goto label_22bc1c;
        case 0x22bc20u: goto label_22bc20;
        case 0x22bc24u: goto label_22bc24;
        case 0x22bc28u: goto label_22bc28;
        case 0x22bc2cu: goto label_22bc2c;
        case 0x22bc30u: goto label_22bc30;
        case 0x22bc34u: goto label_22bc34;
        case 0x22bc38u: goto label_22bc38;
        case 0x22bc3cu: goto label_22bc3c;
        case 0x22bc40u: goto label_22bc40;
        case 0x22bc44u: goto label_22bc44;
        case 0x22bc48u: goto label_22bc48;
        case 0x22bc4cu: goto label_22bc4c;
        case 0x22bc50u: goto label_22bc50;
        case 0x22bc54u: goto label_22bc54;
        case 0x22bc58u: goto label_22bc58;
        case 0x22bc5cu: goto label_22bc5c;
        case 0x22bc60u: goto label_22bc60;
        case 0x22bc64u: goto label_22bc64;
        case 0x22bc68u: goto label_22bc68;
        case 0x22bc6cu: goto label_22bc6c;
        case 0x22bc70u: goto label_22bc70;
        case 0x22bc74u: goto label_22bc74;
        case 0x22bc78u: goto label_22bc78;
        case 0x22bc7cu: goto label_22bc7c;
        case 0x22bc80u: goto label_22bc80;
        case 0x22bc84u: goto label_22bc84;
        case 0x22bc88u: goto label_22bc88;
        case 0x22bc8cu: goto label_22bc8c;
        case 0x22bc90u: goto label_22bc90;
        case 0x22bc94u: goto label_22bc94;
        case 0x22bc98u: goto label_22bc98;
        case 0x22bc9cu: goto label_22bc9c;
        case 0x22bca0u: goto label_22bca0;
        case 0x22bca4u: goto label_22bca4;
        case 0x22bca8u: goto label_22bca8;
        case 0x22bcacu: goto label_22bcac;
        case 0x22bcb0u: goto label_22bcb0;
        case 0x22bcb4u: goto label_22bcb4;
        case 0x22bcb8u: goto label_22bcb8;
        case 0x22bcbcu: goto label_22bcbc;
        case 0x22bcc0u: goto label_22bcc0;
        case 0x22bcc4u: goto label_22bcc4;
        case 0x22bcc8u: goto label_22bcc8;
        case 0x22bcccu: goto label_22bccc;
        case 0x22bcd0u: goto label_22bcd0;
        case 0x22bcd4u: goto label_22bcd4;
        case 0x22bcd8u: goto label_22bcd8;
        case 0x22bcdcu: goto label_22bcdc;
        default: break;
    }

    ctx->pc = 0x22b960u;

label_22b960:
    // 0x22b960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22b960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22b964:
    // 0x22b964: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22b968:
    // 0x22b968: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22b968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22b96c:
    // 0x22b96c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22b96cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b970:
    // 0x22b970: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22b970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22b974:
    // 0x22b974: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22b974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22b978:
    // 0x22b978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22b97c:
    // 0x22b97c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22b97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b980:
    // 0x22b980: 0xc088e60  jal         func_223980
label_22b984:
    if (ctx->pc == 0x22B984u) {
        ctx->pc = 0x22B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B980u;
        // 0x22b984: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B988u;
        goto label_22b988;
    }
    ctx->pc = 0x22B980u;
    SET_GPR_U32(ctx, 31, 0x22B988u);
    ctx->pc = 0x22B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B980u;
    // 0x22b984: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x22B980u, 0x22B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B988u;
label_22b988:
    // 0x22b988: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22b98c:
    if (ctx->pc == 0x22B98Cu) {
        ctx->pc = 0x22B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B988u;
        // 0x22b98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B990u;
        goto label_22b990;
    }
    ctx->pc = 0x22B988u;
    {
        const bool branch_taken_0x22b988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B988u;
        // 0x22b98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b988) {
            ctx->pc = 0x22B9ACu;
            goto label_22b9ac;
        }
    }
    ctx->pc = 0x22B990u;
label_22b990:
    // 0x22b990: 0xc0a0152  jal         func_280548
label_22b994:
    if (ctx->pc == 0x22B994u) {
        ctx->pc = 0x22B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B990u;
        // 0x22b994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B998u;
        goto label_22b998;
    }
    ctx->pc = 0x22B990u;
    SET_GPR_U32(ctx, 31, 0x22B998u);
    ctx->pc = 0x22B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B990u;
    // 0x22b994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x22B990u, 0x22B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B998u;
label_22b998:
    // 0x22b998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22b998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b99c:
    // 0x22b99c: 0xc08b2c0  jal         func_22CB00
label_22b9a0:
    if (ctx->pc == 0x22B9A0u) {
        ctx->pc = 0x22B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B99Cu;
        // 0x22b9a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9A4u;
        goto label_22b9a4;
    }
    ctx->pc = 0x22B99Cu;
    SET_GPR_U32(ctx, 31, 0x22B9A4u);
    ctx->pc = 0x22B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B99Cu;
    // 0x22b9a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x22B99Cu, 0x22B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9A4u;
label_22b9a4:
    // 0x22b9a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_22b9a8:
    if (ctx->pc == 0x22B9A8u) {
        ctx->pc = 0x22B9ACu;
        goto label_22b9ac;
    }
    ctx->pc = 0x22B9A4u;
    {
        const bool branch_taken_0x22b9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b9a4) {
            ctx->pc = 0x22B9C4u;
            goto label_22b9c4;
        }
    }
    ctx->pc = 0x22B9ACu;
label_22b9ac:
    // 0x22b9ac: 0xc088e40  jal         func_223900
label_22b9b0:
    if (ctx->pc == 0x22B9B0u) {
        ctx->pc = 0x22B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9ACu;
        // 0x22b9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9B4u;
        goto label_22b9b4;
    }
    ctx->pc = 0x22B9ACu;
    SET_GPR_U32(ctx, 31, 0x22B9B4u);
    ctx->pc = 0x22B9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9ACu;
    // 0x22b9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x22B9ACu, 0x22B9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9B4u;
label_22b9b4:
    // 0x22b9b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22b9b8:
    if (ctx->pc == 0x22B9B8u) {
        ctx->pc = 0x22B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9B4u;
        // 0x22b9b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9BCu;
        goto label_22b9bc;
    }
    ctx->pc = 0x22B9B4u;
    {
        const bool branch_taken_0x22b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9B4u;
        // 0x22b9b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9b4) {
            ctx->pc = 0x22B9C4u;
            goto label_22b9c4;
        }
    }
    ctx->pc = 0x22B9BCu;
label_22b9bc:
    // 0x22b9bc: 0xc08b0e2  jal         func_22C388
label_22b9c0:
    if (ctx->pc == 0x22B9C0u) {
        ctx->pc = 0x22B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9BCu;
        // 0x22b9c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9C4u;
        goto label_22b9c4;
    }
    ctx->pc = 0x22B9BCu;
    SET_GPR_U32(ctx, 31, 0x22B9C4u);
    ctx->pc = 0x22B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9BCu;
    // 0x22b9c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x22B9BCu, 0x22B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9C4u;
label_22b9c4:
    // 0x22b9c4: 0xc088e48  jal         func_223920
label_22b9c8:
    if (ctx->pc == 0x22B9C8u) {
        ctx->pc = 0x22B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9C4u;
        // 0x22b9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9CCu;
        goto label_22b9cc;
    }
    ctx->pc = 0x22B9C4u;
    SET_GPR_U32(ctx, 31, 0x22B9CCu);
    ctx->pc = 0x22B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9C4u;
    // 0x22b9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x22B9C4u, 0x22B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9CCu;
label_22b9cc:
    // 0x22b9cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22b9d0:
    if (ctx->pc == 0x22B9D0u) {
        ctx->pc = 0x22B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9CCu;
        // 0x22b9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9D4u;
        goto label_22b9d4;
    }
    ctx->pc = 0x22B9CCu;
    {
        const bool branch_taken_0x22b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9CCu;
        // 0x22b9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9cc) {
            ctx->pc = 0x22B9F0u;
            goto label_22b9f0;
        }
    }
    ctx->pc = 0x22B9D4u;
label_22b9d4:
    // 0x22b9d4: 0xc0a0152  jal         func_280548
label_22b9d8:
    if (ctx->pc == 0x22B9D8u) {
        ctx->pc = 0x22B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9D4u;
        // 0x22b9d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9DCu;
        goto label_22b9dc;
    }
    ctx->pc = 0x22B9D4u;
    SET_GPR_U32(ctx, 31, 0x22B9DCu);
    ctx->pc = 0x22B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9D4u;
    // 0x22b9d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x22B9D4u, 0x22B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9DCu;
label_22b9dc:
    // 0x22b9dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b9e0:
    // 0x22b9e0: 0xc08b2c0  jal         func_22CB00
label_22b9e4:
    if (ctx->pc == 0x22B9E4u) {
        ctx->pc = 0x22B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9E0u;
        // 0x22b9e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9E8u;
        goto label_22b9e8;
    }
    ctx->pc = 0x22B9E0u;
    SET_GPR_U32(ctx, 31, 0x22B9E8u);
    ctx->pc = 0x22B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9E0u;
    // 0x22b9e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x22B9E0u, 0x22B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9E8u;
label_22b9e8:
    // 0x22b9e8: 0x10000012  b           . + 4 + (0x12 << 2)
label_22b9ec:
    if (ctx->pc == 0x22B9ECu) {
        ctx->pc = 0x22B9F0u;
        goto label_22b9f0;
    }
    ctx->pc = 0x22B9E8u;
    {
        const bool branch_taken_0x22b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b9e8) {
            ctx->pc = 0x22BA34u;
            goto label_22ba34;
        }
    }
    ctx->pc = 0x22B9F0u;
label_22b9f0:
    // 0x22b9f0: 0xc088e38  jal         func_2238E0
label_22b9f4:
    if (ctx->pc == 0x22B9F4u) {
        ctx->pc = 0x22B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9F0u;
        // 0x22b9f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B9F8u;
        goto label_22b9f8;
    }
    ctx->pc = 0x22B9F0u;
    SET_GPR_U32(ctx, 31, 0x22B9F8u);
    ctx->pc = 0x22B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B9F0u;
    // 0x22b9f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x22B9F0u, 0x22B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B9F8u;
label_22b9f8:
    // 0x22b9f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22b9fc:
    if (ctx->pc == 0x22B9FCu) {
        ctx->pc = 0x22B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9F8u;
        // 0x22b9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA00u;
        goto label_22ba00;
    }
    ctx->pc = 0x22B9F8u;
    {
        const bool branch_taken_0x22b9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B9F8u;
        // 0x22b9fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9f8) {
            ctx->pc = 0x22BA10u;
            goto label_22ba10;
        }
    }
    ctx->pc = 0x22BA00u;
label_22ba00:
    // 0x22ba00: 0xc08b0e2  jal         func_22C388
label_22ba04:
    if (ctx->pc == 0x22BA04u) {
        ctx->pc = 0x22BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA00u;
        // 0x22ba04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA08u;
        goto label_22ba08;
    }
    ctx->pc = 0x22BA00u;
    SET_GPR_U32(ctx, 31, 0x22BA08u);
    ctx->pc = 0x22BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA00u;
    // 0x22ba04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x22BA00u, 0x22BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA08u;
label_22ba08:
    // 0x22ba08: 0x1000000a  b           . + 4 + (0xA << 2)
label_22ba0c:
    if (ctx->pc == 0x22BA0Cu) {
        ctx->pc = 0x22BA10u;
        goto label_22ba10;
    }
    ctx->pc = 0x22BA08u;
    {
        const bool branch_taken_0x22ba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ba08) {
            ctx->pc = 0x22BA34u;
            goto label_22ba34;
        }
    }
    ctx->pc = 0x22BA10u;
label_22ba10:
    // 0x22ba10: 0xc08997c  jal         func_2265F0
label_22ba14:
    if (ctx->pc == 0x22BA14u) {
        ctx->pc = 0x22BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA10u;
        // 0x22ba14: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA18u;
        goto label_22ba18;
    }
    ctx->pc = 0x22BA10u;
    SET_GPR_U32(ctx, 31, 0x22BA18u);
    ctx->pc = 0x22BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA10u;
    // 0x22ba14: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22BA10u, 0x22BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA18u;
label_22ba18:
    // 0x22ba18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22ba1c:
    if (ctx->pc == 0x22BA1Cu) {
        ctx->pc = 0x22BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA18u;
        // 0x22ba1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA20u;
        goto label_22ba20;
    }
    ctx->pc = 0x22BA18u;
    {
        const bool branch_taken_0x22ba18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA18u;
        // 0x22ba1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba18) {
            ctx->pc = 0x22BA34u;
            goto label_22ba34;
        }
    }
    ctx->pc = 0x22BA20u;
label_22ba20:
    // 0x22ba20: 0xc089988  jal         func_226620
label_22ba24:
    if (ctx->pc == 0x22BA24u) {
        ctx->pc = 0x22BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA20u;
        // 0x22ba24: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA28u;
        goto label_22ba28;
    }
    ctx->pc = 0x22BA20u;
    SET_GPR_U32(ctx, 31, 0x22BA28u);
    ctx->pc = 0x22BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA20u;
    // 0x22ba24: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22BA20u, 0x22BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA28u;
label_22ba28:
    // 0x22ba28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ba2c:
    // 0x22ba2c: 0xc094fde  jal         func_253F78
label_22ba30:
    if (ctx->pc == 0x22BA30u) {
        ctx->pc = 0x22BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA2Cu;
        // 0x22ba30: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA34u;
        goto label_22ba34;
    }
    ctx->pc = 0x22BA2Cu;
    SET_GPR_U32(ctx, 31, 0x22BA34u);
    ctx->pc = 0x22BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA2Cu;
    // 0x22ba30: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22BA2Cu, 0x22BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA34u;
label_22ba34:
    // 0x22ba34: 0xc088e30  jal         func_2238C0
label_22ba38:
    if (ctx->pc == 0x22BA38u) {
        ctx->pc = 0x22BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA34u;
        // 0x22ba38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA3Cu;
        goto label_22ba3c;
    }
    ctx->pc = 0x22BA34u;
    SET_GPR_U32(ctx, 31, 0x22BA3Cu);
    ctx->pc = 0x22BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA34u;
    // 0x22ba38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x22BA34u, 0x22BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA3Cu;
label_22ba3c:
    // 0x22ba3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22ba40:
    if (ctx->pc == 0x22BA40u) {
        ctx->pc = 0x22BA44u;
        goto label_22ba44;
    }
    ctx->pc = 0x22BA3Cu;
    {
        const bool branch_taken_0x22ba3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ba3c) {
            ctx->pc = 0x22BA5Cu;
            goto label_22ba5c;
        }
    }
    ctx->pc = 0x22BA44u;
label_22ba44:
    // 0x22ba44: 0xc0e4060  jal         func_390180
label_22ba48:
    if (ctx->pc == 0x22BA48u) {
        ctx->pc = 0x22BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA44u;
        // 0x22ba48: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA4Cu;
        goto label_22ba4c;
    }
    ctx->pc = 0x22BA44u;
    SET_GPR_U32(ctx, 31, 0x22BA4Cu);
    ctx->pc = 0x22BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA44u;
    // 0x22ba48: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x22BA44u, 0x22BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA4Cu;
label_22ba4c:
    // 0x22ba4c: 0xc0e6ee8  jal         func_39BBA0
label_22ba50:
    if (ctx->pc == 0x22BA50u) {
        ctx->pc = 0x22BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA4Cu;
        // 0x22ba50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA54u;
        goto label_22ba54;
    }
    ctx->pc = 0x22BA4Cu;
    SET_GPR_U32(ctx, 31, 0x22BA54u);
    ctx->pc = 0x22BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA4Cu;
    // 0x22ba50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x22BA4Cu, 0x22BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA54u;
label_22ba54:
    // 0x22ba54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22ba58:
    if (ctx->pc == 0x22BA58u) {
        ctx->pc = 0x22BA5Cu;
        goto label_22ba5c;
    }
    ctx->pc = 0x22BA54u;
    {
        const bool branch_taken_0x22ba54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ba54) {
            ctx->pc = 0x22BA64u;
            goto label_22ba64;
        }
    }
    ctx->pc = 0x22BA5Cu;
label_22ba5c:
    // 0x22ba5c: 0xc08ba12  jal         func_22E848
label_22ba60:
    if (ctx->pc == 0x22BA60u) {
        ctx->pc = 0x22BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA5Cu;
        // 0x22ba60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA64u;
        goto label_22ba64;
    }
    ctx->pc = 0x22BA5Cu;
    SET_GPR_U32(ctx, 31, 0x22BA64u);
    ctx->pc = 0x22BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA5Cu;
    // 0x22ba60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x22BA5Cu, 0x22BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA64u;
label_22ba64:
    // 0x22ba64: 0xc087c16  jal         func_21F058
label_22ba68:
    if (ctx->pc == 0x22BA68u) {
        ctx->pc = 0x22BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA64u;
        // 0x22ba68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA6Cu;
        goto label_22ba6c;
    }
    ctx->pc = 0x22BA64u;
    SET_GPR_U32(ctx, 31, 0x22BA6Cu);
    ctx->pc = 0x22BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA64u;
    // 0x22ba68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F058u, 0x22BA64u, 0x22BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA6Cu;
label_22ba6c:
    // 0x22ba6c: 0xc08c6a0  jal         func_231A80
label_22ba70:
    if (ctx->pc == 0x22BA70u) {
        ctx->pc = 0x22BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA6Cu;
        // 0x22ba70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA74u;
        goto label_22ba74;
    }
    ctx->pc = 0x22BA6Cu;
    SET_GPR_U32(ctx, 31, 0x22BA74u);
    ctx->pc = 0x22BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA6Cu;
    // 0x22ba70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x22BA6Cu, 0x22BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA74u;
label_22ba74:
    // 0x22ba74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22ba74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ba78:
    // 0x22ba78: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x22ba78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_22ba7c:
    // 0x22ba7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22ba80:
    if (ctx->pc == 0x22BA80u) {
        ctx->pc = 0x22BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA7Cu;
        // 0x22ba80: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA84u;
        goto label_22ba84;
    }
    ctx->pc = 0x22BA7Cu;
    {
        const bool branch_taken_0x22ba7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA7Cu;
        // 0x22ba80: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba7c) {
            ctx->pc = 0x22BAB8u;
            goto label_22bab8;
        }
    }
    ctx->pc = 0x22BA84u;
label_22ba84:
    // 0x22ba84: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_22ba88:
    if (ctx->pc == 0x22BA88u) {
        ctx->pc = 0x22BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA84u;
        // 0x22ba88: 0x3a020282  xori        $v0, $s0, 0x282 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)642);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA8Cu;
        goto label_22ba8c;
    }
    ctx->pc = 0x22BA84u;
    {
        const bool branch_taken_0x22ba84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA84u;
        // 0x22ba88: 0x3a020282  xori        $v0, $s0, 0x282 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)642);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba84) {
            ctx->pc = 0x22BA98u;
            goto label_22ba98;
        }
    }
    ctx->pc = 0x22BA8Cu;
label_22ba8c:
    // 0x22ba8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ba90:
    // 0x22ba90: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_22ba94:
    if (ctx->pc == 0x22BA94u) {
        ctx->pc = 0x22BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA90u;
        // 0x22ba94: 0x3a020282  xori        $v0, $s0, 0x282 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)642);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BA98u;
        goto label_22ba98;
    }
    ctx->pc = 0x22BA90u;
    {
        const bool branch_taken_0x22ba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA90u;
        // 0x22ba94: 0x3a020282  xori        $v0, $s0, 0x282 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)642);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba90) {
            ctx->pc = 0x22BAB8u;
            goto label_22bab8;
        }
    }
    ctx->pc = 0x22BA98u;
label_22ba98:
    // 0x22ba98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22ba9c:
    if (ctx->pc == 0x22BA9Cu) {
        ctx->pc = 0x22BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA98u;
        // 0x22ba9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAA0u;
        goto label_22baa0;
    }
    ctx->pc = 0x22BA98u;
    {
        const bool branch_taken_0x22ba98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA98u;
        // 0x22ba9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba98) {
            ctx->pc = 0x22BAA8u;
            goto label_22baa8;
        }
    }
    ctx->pc = 0x22BAA0u;
label_22baa0:
    // 0x22baa0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x22baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_22baa4:
    // 0x22baa4: 0x2c440002  sltiu       $a0, $v0, 0x2
    ctx->pc = 0x22baa4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22baa8:
    // 0x22baa8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_22baac:
    if (ctx->pc == 0x22BAACu) {
        ctx->pc = 0x22BAB0u;
        goto label_22bab0;
    }
    ctx->pc = 0x22BAA8u;
    {
        const bool branch_taken_0x22baa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22baa8) {
            ctx->pc = 0x22BAB8u;
            goto label_22bab8;
        }
    }
    ctx->pc = 0x22BAB0u;
label_22bab0:
    // 0x22bab0: 0xc095f3a  jal         func_257CE8
label_22bab4:
    if (ctx->pc == 0x22BAB4u) {
        ctx->pc = 0x22BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAB0u;
        // 0x22bab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAB8u;
        goto label_22bab8;
    }
    ctx->pc = 0x22BAB0u;
    SET_GPR_U32(ctx, 31, 0x22BAB8u);
    ctx->pc = 0x22BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAB0u;
    // 0x22bab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257CE8u, 0x22BAB0u, 0x22BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAB8u;
label_22bab8:
    // 0x22bab8: 0xc095f5c  jal         func_257D70
label_22babc:
    if (ctx->pc == 0x22BABCu) {
        ctx->pc = 0x22BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAB8u;
        // 0x22babc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAC0u;
        goto label_22bac0;
    }
    ctx->pc = 0x22BAB8u;
    SET_GPR_U32(ctx, 31, 0x22BAC0u);
    ctx->pc = 0x22BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAB8u;
    // 0x22babc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257D70u, 0x22BAB8u, 0x22BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAC0u;
label_22bac0:
    // 0x22bac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22bac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22bac4:
    // 0x22bac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22bac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22bac8:
    // 0x22bac8: 0xc040698  jal         func_101A60
label_22bacc:
    if (ctx->pc == 0x22BACCu) {
        ctx->pc = 0x22BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAC8u;
        // 0x22bacc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAD0u;
        goto label_22bad0;
    }
    ctx->pc = 0x22BAC8u;
    SET_GPR_U32(ctx, 31, 0x22BAD0u);
    ctx->pc = 0x22BACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAC8u;
    // 0x22bacc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x22BAC8u, 0x22BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAD0u;
label_22bad0:
    // 0x22bad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22bad4:
    if (ctx->pc == 0x22BAD4u) {
        ctx->pc = 0x22BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAD0u;
        // 0x22bad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAD8u;
        goto label_22bad8;
    }
    ctx->pc = 0x22BAD0u;
    {
        const bool branch_taken_0x22bad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAD0u;
        // 0x22bad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bad0) {
            ctx->pc = 0x22BAE8u;
            goto label_22bae8;
        }
    }
    ctx->pc = 0x22BAD8u;
label_22bad8:
    // 0x22bad8: 0xc094fb4  jal         func_253ED0
label_22badc:
    if (ctx->pc == 0x22BADCu) {
        ctx->pc = 0x22BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAD8u;
        // 0x22badc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAE0u;
        goto label_22bae0;
    }
    ctx->pc = 0x22BAD8u;
    SET_GPR_U32(ctx, 31, 0x22BAE0u);
    ctx->pc = 0x22BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAD8u;
    // 0x22badc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22BAD8u, 0x22BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAE0u;
label_22bae0:
    // 0x22bae0: 0x1000000d  b           . + 4 + (0xD << 2)
label_22bae4:
    if (ctx->pc == 0x22BAE4u) {
        ctx->pc = 0x22BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAE0u;
        // 0x22bae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAE8u;
        goto label_22bae8;
    }
    ctx->pc = 0x22BAE0u;
    {
        const bool branch_taken_0x22bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAE0u;
        // 0x22bae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bae0) {
            ctx->pc = 0x22BB18u;
            goto label_22bb18;
        }
    }
    ctx->pc = 0x22BAE8u;
label_22bae8:
    // 0x22bae8: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x22bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_22baec:
    // 0x22baec: 0xc0950ba  jal         func_2542E8
label_22baf0:
    if (ctx->pc == 0x22BAF0u) {
        ctx->pc = 0x22BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BAECu;
        // 0x22baf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BAF4u;
        goto label_22baf4;
    }
    ctx->pc = 0x22BAECu;
    SET_GPR_U32(ctx, 31, 0x22BAF4u);
    ctx->pc = 0x22BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAECu;
    // 0x22baf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x22BAECu, 0x22BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAF4u;
label_22baf4:
    // 0x22baf4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22baf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22baf8:
    // 0x22baf8: 0x0  nop
    ctx->pc = 0x22baf8u;
    // NOP
label_22bafc:
    // 0x22bafc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22bafcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22bb00:
    // 0x22bb00: 0x0  nop
    ctx->pc = 0x22bb00u;
    // NOP
label_22bb04:
    // 0x22bb04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_22bb08:
    if (ctx->pc == 0x22BB08u) {
        ctx->pc = 0x22BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB04u;
        // 0x22bb08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB0Cu;
        goto label_22bb0c;
    }
    ctx->pc = 0x22BB04u;
    {
        const bool branch_taken_0x22bb04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB04u;
        // 0x22bb08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb04) {
            ctx->pc = 0x22BB18u;
            goto label_22bb18;
        }
    }
    ctx->pc = 0x22BB0Cu;
label_22bb0c:
    // 0x22bb0c: 0xc08bd96  jal         func_22F658
label_22bb10:
    if (ctx->pc == 0x22BB10u) {
        ctx->pc = 0x22BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB0Cu;
        // 0x22bb10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB14u;
        goto label_22bb14;
    }
    ctx->pc = 0x22BB0Cu;
    SET_GPR_U32(ctx, 31, 0x22BB14u);
    ctx->pc = 0x22BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB0Cu;
    // 0x22bb10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22BB0Cu, 0x22BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB14u;
label_22bb14:
    // 0x22bb14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22bb18:
    // 0x22bb18: 0xc089a66  jal         func_226998
label_22bb1c:
    if (ctx->pc == 0x22BB1Cu) {
        ctx->pc = 0x22BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB18u;
        // 0x22bb1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB20u;
        goto label_22bb20;
    }
    ctx->pc = 0x22BB18u;
    SET_GPR_U32(ctx, 31, 0x22BB20u);
    ctx->pc = 0x22BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB18u;
    // 0x22bb1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226998u, 0x22BB18u, 0x22BB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB20u;
label_22bb20:
    // 0x22bb20: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_22bb24:
    if (ctx->pc == 0x22BB24u) {
        ctx->pc = 0x22BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB20u;
        // 0x22bb24: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB28u;
        goto label_22bb28;
    }
    ctx->pc = 0x22BB20u;
    {
        const bool branch_taken_0x22bb20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB20u;
        // 0x22bb24: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb20) {
            ctx->pc = 0x22BB44u;
            goto label_22bb44;
        }
    }
    ctx->pc = 0x22BB28u;
label_22bb28:
    // 0x22bb28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bb2c:
    // 0x22bb2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22bb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22bb30:
    // 0x22bb30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22bb34:
    // 0x22bb34: 0x40f809  jalr        $v0
label_22bb38:
    if (ctx->pc == 0x22BB38u) {
        ctx->pc = 0x22BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB34u;
        // 0x22bb38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB3Cu;
        goto label_22bb3c;
    }
    ctx->pc = 0x22BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BB3Cu);
        ctx->pc = 0x22BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB34u;
        // 0x22bb38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BB34u, 0x22BB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BB3Cu;
label_22bb3c:
    // 0x22bb3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_22bb40:
    if (ctx->pc == 0x22BB40u) {
        ctx->pc = 0x22BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB3Cu;
        // 0x22bb40: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB44u;
        goto label_22bb44;
    }
    ctx->pc = 0x22BB3Cu;
    {
        const bool branch_taken_0x22bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB3Cu;
        // 0x22bb40: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb3c) {
            ctx->pc = 0x22BB4Cu;
            goto label_22bb4c;
        }
    }
    ctx->pc = 0x22BB44u;
label_22bb44:
    // 0x22bb44: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22bb48:
    // 0x22bb48: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x22bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_22bb4c:
    // 0x22bb4c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_22bb50:
    if (ctx->pc == 0x22BB50u) {
        ctx->pc = 0x22BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB4Cu;
        // 0x22bb50: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB54u;
        goto label_22bb54;
    }
    ctx->pc = 0x22BB4Cu;
    {
        const bool branch_taken_0x22bb4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB4Cu;
        // 0x22bb50: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb4c) {
            ctx->pc = 0x22BB70u;
            goto label_22bb70;
        }
    }
    ctx->pc = 0x22BB54u;
label_22bb54:
    // 0x22bb54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22bb58:
    // 0x22bb58: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22bb58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22bb5c:
    // 0x22bb5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22bb60:
    // 0x22bb60: 0x40f809  jalr        $v0
label_22bb64:
    if (ctx->pc == 0x22BB64u) {
        ctx->pc = 0x22BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB60u;
        // 0x22bb64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB68u;
        goto label_22bb68;
    }
    ctx->pc = 0x22BB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BB68u);
        ctx->pc = 0x22BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB60u;
        // 0x22bb64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BB60u, 0x22BB68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BB68u;
label_22bb68:
    // 0x22bb68: 0x10000003  b           . + 4 + (0x3 << 2)
label_22bb6c:
    if (ctx->pc == 0x22BB6Cu) {
        ctx->pc = 0x22BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB68u;
        // 0x22bb6c: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB70u;
        goto label_22bb70;
    }
    ctx->pc = 0x22BB68u;
    {
        const bool branch_taken_0x22bb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB68u;
        // 0x22bb6c: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb68) {
            ctx->pc = 0x22BB78u;
            goto label_22bb78;
        }
    }
    ctx->pc = 0x22BB70u;
label_22bb70:
    // 0x22bb70: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22bb74:
    // 0x22bb74: 0xae4300c4  sw          $v1, 0xC4($s2)
    ctx->pc = 0x22bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
label_22bb78:
    // 0x22bb78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22bb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22bb7c:
    // 0x22bb7c: 0xc089988  jal         func_226620
label_22bb80:
    if (ctx->pc == 0x22BB80u) {
        ctx->pc = 0x22BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB7Cu;
        // 0x22bb80: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB84u;
        goto label_22bb84;
    }
    ctx->pc = 0x22BB7Cu;
    SET_GPR_U32(ctx, 31, 0x22BB84u);
    ctx->pc = 0x22BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB7Cu;
    // 0x22bb80: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22BB7Cu, 0x22BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB84u;
label_22bb84:
    // 0x22bb84: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22bb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22bb88:
    // 0x22bb88: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22bb88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22bb8c:
    // 0x22bb8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22bb8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22bb90:
    // 0x22bb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22bb94:
    // 0x22bb94: 0xc089988  jal         func_226620
label_22bb98:
    if (ctx->pc == 0x22BB98u) {
        ctx->pc = 0x22BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB94u;
        // 0x22bb98: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BB9Cu;
        goto label_22bb9c;
    }
    ctx->pc = 0x22BB94u;
    SET_GPR_U32(ctx, 31, 0x22BB9Cu);
    ctx->pc = 0x22BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB94u;
    // 0x22bb98: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22BB94u, 0x22BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB9Cu;
label_22bb9c:
    // 0x22bb9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22bb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22bba0:
    // 0x22bba0: 0xc089974  jal         func_2265D0
label_22bba4:
    if (ctx->pc == 0x22BBA4u) {
        ctx->pc = 0x22BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBA0u;
        // 0x22bba4: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBA8u;
        goto label_22bba8;
    }
    ctx->pc = 0x22BBA0u;
    SET_GPR_U32(ctx, 31, 0x22BBA8u);
    ctx->pc = 0x22BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBA0u;
    // 0x22bba4: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22BBA0u, 0x22BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBA8u;
label_22bba8:
    // 0x22bba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22bba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22bbac:
    // 0x22bbac: 0xc089974  jal         func_2265D0
label_22bbb0:
    if (ctx->pc == 0x22BBB0u) {
        ctx->pc = 0x22BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBACu;
        // 0x22bbb0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBB4u;
        goto label_22bbb4;
    }
    ctx->pc = 0x22BBACu;
    SET_GPR_U32(ctx, 31, 0x22BBB4u);
    ctx->pc = 0x22BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBACu;
    // 0x22bbb0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22BBACu, 0x22BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBB4u;
label_22bbb4:
    // 0x22bbb4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bbb8:
    // 0x22bbb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22bbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22bbbc:
    // 0x22bbbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22bbbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22bbc0:
    // 0x22bbc0: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22bbc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22bbc4:
    // 0x22bbc4: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22bbc8:
    // 0x22bbc8: 0x40f809  jalr        $v0
label_22bbcc:
    if (ctx->pc == 0x22BBCCu) {
        ctx->pc = 0x22BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBC8u;
        // 0x22bbcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBD0u;
        goto label_22bbd0;
    }
    ctx->pc = 0x22BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BBD0u);
        ctx->pc = 0x22BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBC8u;
        // 0x22bbcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BBC8u, 0x22BBD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BBD0u;
label_22bbd0:
    // 0x22bbd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22bbd4:
    // 0x22bbd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22bbd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22bbd8:
    // 0x22bbd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22bbdc:
    // 0x22bbdc: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22bbdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22bbe0:
    // 0x22bbe0: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22bbe4:
    // 0x22bbe4: 0x40f809  jalr        $v0
label_22bbe8:
    if (ctx->pc == 0x22BBE8u) {
        ctx->pc = 0x22BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBE4u;
        // 0x22bbe8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BBECu;
        goto label_22bbec;
    }
    ctx->pc = 0x22BBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BBECu);
        ctx->pc = 0x22BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBE4u;
        // 0x22bbe8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BBE4u, 0x22BBECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BBECu;
label_22bbec:
    // 0x22bbec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22bbf0:
    // 0x22bbf0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bbf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bbf4:
    // 0x22bbf4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bbf8:
    // 0x22bbf8: 0x40f809  jalr        $v0
label_22bbfc:
    if (ctx->pc == 0x22BBFCu) {
        ctx->pc = 0x22BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBF8u;
        // 0x22bbfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC00u;
        goto label_22bc00;
    }
    ctx->pc = 0x22BBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BC00u);
        ctx->pc = 0x22BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBF8u;
        // 0x22bbfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BBF8u, 0x22BC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BC00u;
label_22bc00:
    // 0x22bc00: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_22bc04:
    if (ctx->pc == 0x22BC04u) {
        ctx->pc = 0x22BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC00u;
        // 0x22bc04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC08u;
        goto label_22bc08;
    }
    ctx->pc = 0x22BC00u;
    {
        const bool branch_taken_0x22bc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC00u;
        // 0x22bc04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc00) {
            ctx->pc = 0x22BCC8u;
            goto label_22bcc8;
        }
    }
    ctx->pc = 0x22BC08u;
label_22bc08:
    // 0x22bc08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bc0c:
    // 0x22bc0c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bc0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bc10:
    // 0x22bc10: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bc14:
    // 0x22bc14: 0x40f809  jalr        $v0
label_22bc18:
    if (ctx->pc == 0x22BC18u) {
        ctx->pc = 0x22BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC14u;
        // 0x22bc18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC1Cu;
        goto label_22bc1c;
    }
    ctx->pc = 0x22BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BC1Cu);
        ctx->pc = 0x22BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC14u;
        // 0x22bc18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC14u, 0x22BC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BC1Cu;
label_22bc1c:
    // 0x22bc1c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_22bc20:
    if (ctx->pc == 0x22BC20u) {
        ctx->pc = 0x22BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC1Cu;
        // 0x22bc20: 0x3403fffd  ori         $v1, $zero, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC24u;
        goto label_22bc24;
    }
    ctx->pc = 0x22BC1Cu;
    {
        const bool branch_taken_0x22bc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC1Cu;
        // 0x22bc20: 0x3403fffd  ori         $v1, $zero, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc1c) {
            ctx->pc = 0x22BCC4u;
            goto label_22bcc4;
        }
    }
    ctx->pc = 0x22BC24u;
label_22bc24:
    // 0x22bc24: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x22bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_22bc28:
    // 0x22bc28: 0x8c857198  lw          $a1, 0x7198($a0)
    ctx->pc = 0x22bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29080)));
label_22bc2c:
    // 0x22bc2c: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x22bc2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_22bc30:
    // 0x22bc30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22bc34:
    // 0x22bc34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22bc38:
    // 0x22bc38: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x22bc38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_22bc3c:
    // 0x22bc3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_22bc40:
    if (ctx->pc == 0x22BC40u) {
        ctx->pc = 0x22BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC3Cu;
        // 0x22bc40: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC44u;
        goto label_22bc44;
    }
    ctx->pc = 0x22BC3Cu;
    {
        const bool branch_taken_0x22bc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC3Cu;
        // 0x22bc40: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc3c) {
            ctx->pc = 0x22BC4Cu;
            goto label_22bc4c;
        }
    }
    ctx->pc = 0x22BC44u;
label_22bc44:
    // 0x22bc44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22bc48:
    // 0x22bc48: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x22bc48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
label_22bc4c:
    // 0x22bc4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22bc50:
    // 0x22bc50: 0x94b00010  lhu         $s0, 0x10($a1)
    ctx->pc = 0x22bc50u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_22bc54:
    // 0x22bc54: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bc54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bc58:
    // 0x22bc58: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bc5c:
    // 0x22bc5c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x22bc5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_22bc60:
    // 0x22bc60: 0x40f809  jalr        $v0
label_22bc64:
    if (ctx->pc == 0x22BC64u) {
        ctx->pc = 0x22BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC60u;
        // 0x22bc64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC68u;
        goto label_22bc68;
    }
    ctx->pc = 0x22BC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BC68u);
        ctx->pc = 0x22BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC60u;
        // 0x22bc64: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC60u, 0x22BC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BC68u;
label_22bc68:
    // 0x22bc68: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x22bc68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_22bc6c:
    // 0x22bc6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bc70:
    // 0x22bc70: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bc70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bc74:
    // 0x22bc74: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bc78:
    // 0x22bc78: 0x40f809  jalr        $v0
label_22bc7c:
    if (ctx->pc == 0x22BC7Cu) {
        ctx->pc = 0x22BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC78u;
        // 0x22bc7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC80u;
        goto label_22bc80;
    }
    ctx->pc = 0x22BC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BC80u);
        ctx->pc = 0x22BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC78u;
        // 0x22bc7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC78u, 0x22BC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BC80u;
label_22bc80:
    // 0x22bc80: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x22bc80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_22bc84:
    // 0x22bc84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bc88:
    // 0x22bc88: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bc8c:
    // 0x22bc8c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bc90:
    // 0x22bc90: 0x40f809  jalr        $v0
label_22bc94:
    if (ctx->pc == 0x22BC94u) {
        ctx->pc = 0x22BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC90u;
        // 0x22bc94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BC98u;
        goto label_22bc98;
    }
    ctx->pc = 0x22BC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BC98u);
        ctx->pc = 0x22BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC90u;
        // 0x22bc94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BC90u, 0x22BC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BC98u;
label_22bc98:
    // 0x22bc98: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22bc9c:
    // 0x22bc9c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x22bc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_22bca0:
    // 0x22bca0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22bca4:
    // 0x22bca4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x22bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22bca8:
    // 0x22bca8: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x22bca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_22bcac:
    // 0x22bcac: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_22bcb0:
    // 0x22bcb0: 0x40f809  jalr        $v0
label_22bcb4:
    if (ctx->pc == 0x22BCB4u) {
        ctx->pc = 0x22BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCB0u;
        // 0x22bcb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCB8u;
        goto label_22bcb8;
    }
    ctx->pc = 0x22BCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BCB8u);
        ctx->pc = 0x22BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCB0u;
        // 0x22bcb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BCB0u, 0x22BCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BCB8u;
label_22bcb8:
    // 0x22bcb8: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22bcbc:
    // 0x22bcbc: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x22bcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_22bcc0:
    // 0x22bcc0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22bcc4:
    // 0x22bcc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22bcc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22bcc8:
    // 0x22bcc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22bcc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22bccc:
    // 0x22bccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22bcccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22bcd0:
    // 0x22bcd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22bcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22bcd4:
    // 0x22bcd4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22bcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22bcd8:
    // 0x22bcd8: 0x3e00008  jr          $ra
label_22bcdc:
    if (ctx->pc == 0x22BCDCu) {
        ctx->pc = 0x22BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCD8u;
        // 0x22bcdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BCE0u;
        goto label_fallthrough_0x22bcd8;
    }
    ctx->pc = 0x22BCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCD8u;
        // 0x22bcdc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22bcd8:
    ctx->pc = 0x22BCE0u;
}

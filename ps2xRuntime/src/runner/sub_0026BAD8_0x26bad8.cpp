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

// Function: sub_0026BAD8
// Address: 0x26bad8 - 0x26be68
void sub_0026BAD8_0x26bad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BAD8_0x26bad8");
#endif

    switch (ctx->pc) {
        case 0x26bad8u: goto label_26bad8;
        case 0x26badcu: goto label_26badc;
        case 0x26bae0u: goto label_26bae0;
        case 0x26bae4u: goto label_26bae4;
        case 0x26bae8u: goto label_26bae8;
        case 0x26baecu: goto label_26baec;
        case 0x26baf0u: goto label_26baf0;
        case 0x26baf4u: goto label_26baf4;
        case 0x26baf8u: goto label_26baf8;
        case 0x26bafcu: goto label_26bafc;
        case 0x26bb00u: goto label_26bb00;
        case 0x26bb04u: goto label_26bb04;
        case 0x26bb08u: goto label_26bb08;
        case 0x26bb0cu: goto label_26bb0c;
        case 0x26bb10u: goto label_26bb10;
        case 0x26bb14u: goto label_26bb14;
        case 0x26bb18u: goto label_26bb18;
        case 0x26bb1cu: goto label_26bb1c;
        case 0x26bb20u: goto label_26bb20;
        case 0x26bb24u: goto label_26bb24;
        case 0x26bb28u: goto label_26bb28;
        case 0x26bb2cu: goto label_26bb2c;
        case 0x26bb30u: goto label_26bb30;
        case 0x26bb34u: goto label_26bb34;
        case 0x26bb38u: goto label_26bb38;
        case 0x26bb3cu: goto label_26bb3c;
        case 0x26bb40u: goto label_26bb40;
        case 0x26bb44u: goto label_26bb44;
        case 0x26bb48u: goto label_26bb48;
        case 0x26bb4cu: goto label_26bb4c;
        case 0x26bb50u: goto label_26bb50;
        case 0x26bb54u: goto label_26bb54;
        case 0x26bb58u: goto label_26bb58;
        case 0x26bb5cu: goto label_26bb5c;
        case 0x26bb60u: goto label_26bb60;
        case 0x26bb64u: goto label_26bb64;
        case 0x26bb68u: goto label_26bb68;
        case 0x26bb6cu: goto label_26bb6c;
        case 0x26bb70u: goto label_26bb70;
        case 0x26bb74u: goto label_26bb74;
        case 0x26bb78u: goto label_26bb78;
        case 0x26bb7cu: goto label_26bb7c;
        case 0x26bb80u: goto label_26bb80;
        case 0x26bb84u: goto label_26bb84;
        case 0x26bb88u: goto label_26bb88;
        case 0x26bb8cu: goto label_26bb8c;
        case 0x26bb90u: goto label_26bb90;
        case 0x26bb94u: goto label_26bb94;
        case 0x26bb98u: goto label_26bb98;
        case 0x26bb9cu: goto label_26bb9c;
        case 0x26bba0u: goto label_26bba0;
        case 0x26bba4u: goto label_26bba4;
        case 0x26bba8u: goto label_26bba8;
        case 0x26bbacu: goto label_26bbac;
        case 0x26bbb0u: goto label_26bbb0;
        case 0x26bbb4u: goto label_26bbb4;
        case 0x26bbb8u: goto label_26bbb8;
        case 0x26bbbcu: goto label_26bbbc;
        case 0x26bbc0u: goto label_26bbc0;
        case 0x26bbc4u: goto label_26bbc4;
        case 0x26bbc8u: goto label_26bbc8;
        case 0x26bbccu: goto label_26bbcc;
        case 0x26bbd0u: goto label_26bbd0;
        case 0x26bbd4u: goto label_26bbd4;
        case 0x26bbd8u: goto label_26bbd8;
        case 0x26bbdcu: goto label_26bbdc;
        case 0x26bbe0u: goto label_26bbe0;
        case 0x26bbe4u: goto label_26bbe4;
        case 0x26bbe8u: goto label_26bbe8;
        case 0x26bbecu: goto label_26bbec;
        case 0x26bbf0u: goto label_26bbf0;
        case 0x26bbf4u: goto label_26bbf4;
        case 0x26bbf8u: goto label_26bbf8;
        case 0x26bbfcu: goto label_26bbfc;
        case 0x26bc00u: goto label_26bc00;
        case 0x26bc04u: goto label_26bc04;
        case 0x26bc08u: goto label_26bc08;
        case 0x26bc0cu: goto label_26bc0c;
        case 0x26bc10u: goto label_26bc10;
        case 0x26bc14u: goto label_26bc14;
        case 0x26bc18u: goto label_26bc18;
        case 0x26bc1cu: goto label_26bc1c;
        case 0x26bc20u: goto label_26bc20;
        case 0x26bc24u: goto label_26bc24;
        case 0x26bc28u: goto label_26bc28;
        case 0x26bc2cu: goto label_26bc2c;
        case 0x26bc30u: goto label_26bc30;
        case 0x26bc34u: goto label_26bc34;
        case 0x26bc38u: goto label_26bc38;
        case 0x26bc3cu: goto label_26bc3c;
        case 0x26bc40u: goto label_26bc40;
        case 0x26bc44u: goto label_26bc44;
        case 0x26bc48u: goto label_26bc48;
        case 0x26bc4cu: goto label_26bc4c;
        case 0x26bc50u: goto label_26bc50;
        case 0x26bc54u: goto label_26bc54;
        case 0x26bc58u: goto label_26bc58;
        case 0x26bc5cu: goto label_26bc5c;
        case 0x26bc60u: goto label_26bc60;
        case 0x26bc64u: goto label_26bc64;
        case 0x26bc68u: goto label_26bc68;
        case 0x26bc6cu: goto label_26bc6c;
        case 0x26bc70u: goto label_26bc70;
        case 0x26bc74u: goto label_26bc74;
        case 0x26bc78u: goto label_26bc78;
        case 0x26bc7cu: goto label_26bc7c;
        case 0x26bc80u: goto label_26bc80;
        case 0x26bc84u: goto label_26bc84;
        case 0x26bc88u: goto label_26bc88;
        case 0x26bc8cu: goto label_26bc8c;
        case 0x26bc90u: goto label_26bc90;
        case 0x26bc94u: goto label_26bc94;
        case 0x26bc98u: goto label_26bc98;
        case 0x26bc9cu: goto label_26bc9c;
        case 0x26bca0u: goto label_26bca0;
        case 0x26bca4u: goto label_26bca4;
        case 0x26bca8u: goto label_26bca8;
        case 0x26bcacu: goto label_26bcac;
        case 0x26bcb0u: goto label_26bcb0;
        case 0x26bcb4u: goto label_26bcb4;
        case 0x26bcb8u: goto label_26bcb8;
        case 0x26bcbcu: goto label_26bcbc;
        case 0x26bcc0u: goto label_26bcc0;
        case 0x26bcc4u: goto label_26bcc4;
        case 0x26bcc8u: goto label_26bcc8;
        case 0x26bcccu: goto label_26bccc;
        case 0x26bcd0u: goto label_26bcd0;
        case 0x26bcd4u: goto label_26bcd4;
        case 0x26bcd8u: goto label_26bcd8;
        case 0x26bcdcu: goto label_26bcdc;
        case 0x26bce0u: goto label_26bce0;
        case 0x26bce4u: goto label_26bce4;
        case 0x26bce8u: goto label_26bce8;
        case 0x26bcecu: goto label_26bcec;
        case 0x26bcf0u: goto label_26bcf0;
        case 0x26bcf4u: goto label_26bcf4;
        case 0x26bcf8u: goto label_26bcf8;
        case 0x26bcfcu: goto label_26bcfc;
        case 0x26bd00u: goto label_26bd00;
        case 0x26bd04u: goto label_26bd04;
        case 0x26bd08u: goto label_26bd08;
        case 0x26bd0cu: goto label_26bd0c;
        case 0x26bd10u: goto label_26bd10;
        case 0x26bd14u: goto label_26bd14;
        case 0x26bd18u: goto label_26bd18;
        case 0x26bd1cu: goto label_26bd1c;
        case 0x26bd20u: goto label_26bd20;
        case 0x26bd24u: goto label_26bd24;
        case 0x26bd28u: goto label_26bd28;
        case 0x26bd2cu: goto label_26bd2c;
        case 0x26bd30u: goto label_26bd30;
        case 0x26bd34u: goto label_26bd34;
        case 0x26bd38u: goto label_26bd38;
        case 0x26bd3cu: goto label_26bd3c;
        case 0x26bd40u: goto label_26bd40;
        case 0x26bd44u: goto label_26bd44;
        case 0x26bd48u: goto label_26bd48;
        case 0x26bd4cu: goto label_26bd4c;
        case 0x26bd50u: goto label_26bd50;
        case 0x26bd54u: goto label_26bd54;
        case 0x26bd58u: goto label_26bd58;
        case 0x26bd5cu: goto label_26bd5c;
        case 0x26bd60u: goto label_26bd60;
        case 0x26bd64u: goto label_26bd64;
        case 0x26bd68u: goto label_26bd68;
        case 0x26bd6cu: goto label_26bd6c;
        case 0x26bd70u: goto label_26bd70;
        case 0x26bd74u: goto label_26bd74;
        case 0x26bd78u: goto label_26bd78;
        case 0x26bd7cu: goto label_26bd7c;
        case 0x26bd80u: goto label_26bd80;
        case 0x26bd84u: goto label_26bd84;
        case 0x26bd88u: goto label_26bd88;
        case 0x26bd8cu: goto label_26bd8c;
        case 0x26bd90u: goto label_26bd90;
        case 0x26bd94u: goto label_26bd94;
        case 0x26bd98u: goto label_26bd98;
        case 0x26bd9cu: goto label_26bd9c;
        case 0x26bda0u: goto label_26bda0;
        case 0x26bda4u: goto label_26bda4;
        case 0x26bda8u: goto label_26bda8;
        case 0x26bdacu: goto label_26bdac;
        case 0x26bdb0u: goto label_26bdb0;
        case 0x26bdb4u: goto label_26bdb4;
        case 0x26bdb8u: goto label_26bdb8;
        case 0x26bdbcu: goto label_26bdbc;
        case 0x26bdc0u: goto label_26bdc0;
        case 0x26bdc4u: goto label_26bdc4;
        case 0x26bdc8u: goto label_26bdc8;
        case 0x26bdccu: goto label_26bdcc;
        case 0x26bdd0u: goto label_26bdd0;
        case 0x26bdd4u: goto label_26bdd4;
        case 0x26bdd8u: goto label_26bdd8;
        case 0x26bddcu: goto label_26bddc;
        case 0x26bde0u: goto label_26bde0;
        case 0x26bde4u: goto label_26bde4;
        case 0x26bde8u: goto label_26bde8;
        case 0x26bdecu: goto label_26bdec;
        case 0x26bdf0u: goto label_26bdf0;
        case 0x26bdf4u: goto label_26bdf4;
        case 0x26bdf8u: goto label_26bdf8;
        case 0x26bdfcu: goto label_26bdfc;
        case 0x26be00u: goto label_26be00;
        case 0x26be04u: goto label_26be04;
        case 0x26be08u: goto label_26be08;
        case 0x26be0cu: goto label_26be0c;
        case 0x26be10u: goto label_26be10;
        case 0x26be14u: goto label_26be14;
        case 0x26be18u: goto label_26be18;
        case 0x26be1cu: goto label_26be1c;
        case 0x26be20u: goto label_26be20;
        case 0x26be24u: goto label_26be24;
        case 0x26be28u: goto label_26be28;
        case 0x26be2cu: goto label_26be2c;
        case 0x26be30u: goto label_26be30;
        case 0x26be34u: goto label_26be34;
        case 0x26be38u: goto label_26be38;
        case 0x26be3cu: goto label_26be3c;
        case 0x26be40u: goto label_26be40;
        case 0x26be44u: goto label_26be44;
        case 0x26be48u: goto label_26be48;
        case 0x26be4cu: goto label_26be4c;
        case 0x26be50u: goto label_26be50;
        case 0x26be54u: goto label_26be54;
        case 0x26be58u: goto label_26be58;
        case 0x26be5cu: goto label_26be5c;
        case 0x26be60u: goto label_26be60;
        case 0x26be64u: goto label_26be64;
        default: break;
    }

    ctx->pc = 0x26bad8u;

label_26bad8:
    // 0x26bad8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26bad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_26badc:
    // 0x26badc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26bae0:
    // 0x26bae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26bae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26bae4:
    // 0x26bae4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_26bae8:
    // 0x26bae8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26baec:
    // 0x26baec: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x26baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_26baf0:
    // 0x26baf0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_26baf4:
    // 0x26baf4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x26baf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_26baf8:
    // 0x26baf8: 0xc0e409a  jal         func_390268
label_26bafc:
    if (ctx->pc == 0x26BAFCu) {
        ctx->pc = 0x26BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAF8u;
        // 0x26bafc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB00u;
        goto label_26bb00;
    }
    ctx->pc = 0x26BAF8u;
    SET_GPR_U32(ctx, 31, 0x26BB00u);
    ctx->pc = 0x26BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BAF8u;
    // 0x26bafc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26BAF8u, 0x26BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB00u;
label_26bb00:
    // 0x26bb00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26bb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26bb04:
    // 0x26bb04: 0x520000cb  beql        $s0, $zero, . + 4 + (0xCB << 2)
label_26bb08:
    if (ctx->pc == 0x26BB08u) {
        ctx->pc = 0x26BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB04u;
        // 0x26bb08: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB0Cu;
        goto label_26bb0c;
    }
    ctx->pc = 0x26BB04u;
    {
        const bool branch_taken_0x26bb04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bb04) {
            ctx->pc = 0x26BB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BB04u;
            // 0x26bb08: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE34u;
            goto label_26be34;
        }
    }
    ctx->pc = 0x26BB0Cu;
label_26bb0c:
    // 0x26bb0c: 0xc089fac  jal         func_227EB0
label_26bb10:
    if (ctx->pc == 0x26BB10u) {
        ctx->pc = 0x26BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB0Cu;
        // 0x26bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB14u;
        goto label_26bb14;
    }
    ctx->pc = 0x26BB0Cu;
    SET_GPR_U32(ctx, 31, 0x26BB14u);
    ctx->pc = 0x26BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB0Cu;
    // 0x26bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x26BB0Cu, 0x26BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB14u;
label_26bb14:
    // 0x26bb14: 0x544000c7  bnel        $v0, $zero, . + 4 + (0xC7 << 2)
label_26bb18:
    if (ctx->pc == 0x26BB18u) {
        ctx->pc = 0x26BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB14u;
        // 0x26bb18: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB1Cu;
        goto label_26bb1c;
    }
    ctx->pc = 0x26BB14u;
    {
        const bool branch_taken_0x26bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bb14) {
            ctx->pc = 0x26BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BB14u;
            // 0x26bb18: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE34u;
            goto label_26be34;
        }
    }
    ctx->pc = 0x26BB1Cu;
label_26bb1c:
    // 0x26bb1c: 0xc089f86  jal         func_227E18
label_26bb20:
    if (ctx->pc == 0x26BB20u) {
        ctx->pc = 0x26BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB1Cu;
        // 0x26bb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB24u;
        goto label_26bb24;
    }
    ctx->pc = 0x26BB1Cu;
    SET_GPR_U32(ctx, 31, 0x26BB24u);
    ctx->pc = 0x26BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB1Cu;
    // 0x26bb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x26BB1Cu, 0x26BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB24u;
label_26bb24:
    // 0x26bb24: 0x544000c3  bnel        $v0, $zero, . + 4 + (0xC3 << 2)
label_26bb28:
    if (ctx->pc == 0x26BB28u) {
        ctx->pc = 0x26BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB24u;
        // 0x26bb28: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB2Cu;
        goto label_26bb2c;
    }
    ctx->pc = 0x26BB24u;
    {
        const bool branch_taken_0x26bb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bb24) {
            ctx->pc = 0x26BB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BB24u;
            // 0x26bb28: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE34u;
            goto label_26be34;
        }
    }
    ctx->pc = 0x26BB2Cu;
label_26bb2c:
    // 0x26bb2c: 0xc089f76  jal         func_227DD8
label_26bb30:
    if (ctx->pc == 0x26BB30u) {
        ctx->pc = 0x26BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB2Cu;
        // 0x26bb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB34u;
        goto label_26bb34;
    }
    ctx->pc = 0x26BB2Cu;
    SET_GPR_U32(ctx, 31, 0x26BB34u);
    ctx->pc = 0x26BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB2Cu;
    // 0x26bb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x26BB2Cu, 0x26BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB34u;
label_26bb34:
    // 0x26bb34: 0x544000bf  bnel        $v0, $zero, . + 4 + (0xBF << 2)
label_26bb38:
    if (ctx->pc == 0x26BB38u) {
        ctx->pc = 0x26BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB34u;
        // 0x26bb38: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB3Cu;
        goto label_26bb3c;
    }
    ctx->pc = 0x26BB34u;
    {
        const bool branch_taken_0x26bb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bb34) {
            ctx->pc = 0x26BB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BB34u;
            // 0x26bb38: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE34u;
            goto label_26be34;
        }
    }
    ctx->pc = 0x26BB3Cu;
label_26bb3c:
    // 0x26bb3c: 0xc088e60  jal         func_223980
label_26bb40:
    if (ctx->pc == 0x26BB40u) {
        ctx->pc = 0x26BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB3Cu;
        // 0x26bb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB44u;
        goto label_26bb44;
    }
    ctx->pc = 0x26BB3Cu;
    SET_GPR_U32(ctx, 31, 0x26BB44u);
    ctx->pc = 0x26BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB3Cu;
    // 0x26bb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x26BB3Cu, 0x26BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB44u;
label_26bb44:
    // 0x26bb44: 0x504000bb  beql        $v0, $zero, . + 4 + (0xBB << 2)
label_26bb48:
    if (ctx->pc == 0x26BB48u) {
        ctx->pc = 0x26BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB44u;
        // 0x26bb48: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB4Cu;
        goto label_26bb4c;
    }
    ctx->pc = 0x26BB44u;
    {
        const bool branch_taken_0x26bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bb44) {
            ctx->pc = 0x26BB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BB44u;
            // 0x26bb48: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE34u;
            goto label_26be34;
        }
    }
    ctx->pc = 0x26BB4Cu;
label_26bb4c:
    // 0x26bb4c: 0xc088e48  jal         func_223920
label_26bb50:
    if (ctx->pc == 0x26BB50u) {
        ctx->pc = 0x26BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB4Cu;
        // 0x26bb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB54u;
        goto label_26bb54;
    }
    ctx->pc = 0x26BB4Cu;
    SET_GPR_U32(ctx, 31, 0x26BB54u);
    ctx->pc = 0x26BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB4Cu;
    // 0x26bb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x26BB4Cu, 0x26BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB54u;
label_26bb54:
    // 0x26bb54: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
label_26bb58:
    if (ctx->pc == 0x26BB58u) {
        ctx->pc = 0x26BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB54u;
        // 0x26bb58: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB5Cu;
        goto label_26bb5c;
    }
    ctx->pc = 0x26BB54u;
    {
        const bool branch_taken_0x26bb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB54u;
        // 0x26bb58: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb54) {
            ctx->pc = 0x26BE34u;
            goto label_26be34;
        }
    }
    ctx->pc = 0x26BB5Cu;
label_26bb5c:
    // 0x26bb5c: 0x84430148  lh          $v1, 0x148($v0)
    ctx->pc = 0x26bb5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_26bb60:
    // 0x26bb60: 0x586000b5  blezl       $v1, . + 4 + (0xB5 << 2)
label_26bb64:
    if (ctx->pc == 0x26BB64u) {
        ctx->pc = 0x26BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB60u;
        // 0x26bb64: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB68u;
        goto label_26bb68;
    }
    ctx->pc = 0x26BB60u;
    {
        const bool branch_taken_0x26bb60 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x26bb60) {
            ctx->pc = 0x26BB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BB60u;
            // 0x26bb64: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE38u;
            goto label_26be38;
        }
    }
    ctx->pc = 0x26BB68u;
label_26bb68:
    // 0x26bb68: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26bb6c:
    // 0x26bb6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26bb6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26bb70:
    // 0x26bb70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26bb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26bb74:
    // 0x26bb74: 0xc0874fa  jal         func_21D3E8
label_26bb78:
    if (ctx->pc == 0x26BB78u) {
        ctx->pc = 0x26BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB74u;
        // 0x26bb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB7Cu;
        goto label_26bb7c;
    }
    ctx->pc = 0x26BB74u;
    SET_GPR_U32(ctx, 31, 0x26BB7Cu);
    ctx->pc = 0x26BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB74u;
    // 0x26bb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x26BB74u, 0x26BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB7Cu;
label_26bb7c:
    // 0x26bb7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26bb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bb80:
    // 0x26bb80: 0xc0899ae  jal         func_2266B8
label_26bb84:
    if (ctx->pc == 0x26BB84u) {
        ctx->pc = 0x26BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB80u;
        // 0x26bb84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB88u;
        goto label_26bb88;
    }
    ctx->pc = 0x26BB80u;
    SET_GPR_U32(ctx, 31, 0x26BB88u);
    ctx->pc = 0x26BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB80u;
    // 0x26bb84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x26BB80u, 0x26BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB88u;
label_26bb88:
    // 0x26bb88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26bb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26bb8c:
    // 0x26bb8c: 0xc0950ba  jal         func_2542E8
label_26bb90:
    if (ctx->pc == 0x26BB90u) {
        ctx->pc = 0x26BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB8Cu;
        // 0x26bb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BB94u;
        goto label_26bb94;
    }
    ctx->pc = 0x26BB8Cu;
    SET_GPR_U32(ctx, 31, 0x26BB94u);
    ctx->pc = 0x26BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB8Cu;
    // 0x26bb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x26BB8Cu, 0x26BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB94u;
label_26bb94:
    // 0x26bb94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26bb94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26bb98:
    // 0x26bb98: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x26bb98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_26bb9c:
    // 0x26bb9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26bb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bba0:
    // 0x26bba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26bba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bba4:
    // 0x26bba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26bba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bba8:
    // 0x26bba8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26bba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bbac:
    // 0x26bbac: 0xc0875a0  jal         func_21D680
label_26bbb0:
    if (ctx->pc == 0x26BBB0u) {
        ctx->pc = 0x26BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBACu;
        // 0x26bbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BBB4u;
        goto label_26bbb4;
    }
    ctx->pc = 0x26BBACu;
    SET_GPR_U32(ctx, 31, 0x26BBB4u);
    ctx->pc = 0x26BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BBACu;
    // 0x26bbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x26BBACu, 0x26BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBB4u;
label_26bbb4:
    // 0x26bbb4: 0xc088e68  jal         func_2239A0
label_26bbb8:
    if (ctx->pc == 0x26BBB8u) {
        ctx->pc = 0x26BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBB4u;
        // 0x26bbb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BBBCu;
        goto label_26bbbc;
    }
    ctx->pc = 0x26BBB4u;
    SET_GPR_U32(ctx, 31, 0x26BBBCu);
    ctx->pc = 0x26BBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BBB4u;
    // 0x26bbb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x26BBB4u, 0x26BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBBCu;
label_26bbbc:
    // 0x26bbbc: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x26bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_26bbc0:
    // 0x26bbc0: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x26bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_26bbc4:
    // 0x26bbc4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x26bbc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_26bbc8:
    // 0x26bbc8: 0xc095128  jal         func_2544A0
label_26bbcc:
    if (ctx->pc == 0x26BBCCu) {
        ctx->pc = 0x26BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBC8u;
        // 0x26bbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BBD0u;
        goto label_26bbd0;
    }
    ctx->pc = 0x26BBC8u;
    SET_GPR_U32(ctx, 31, 0x26BBD0u);
    ctx->pc = 0x26BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BBC8u;
    // 0x26bbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x26BBC8u, 0x26BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBD0u;
label_26bbd0:
    // 0x26bbd0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x26bbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_26bbd4:
    // 0x26bbd4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26bbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26bbd8:
    // 0x26bbd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26bbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26bbdc:
    // 0x26bbdc: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x26bbdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_26bbe0:
    // 0x26bbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26bbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26bbe4:
    // 0x26bbe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26bbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bbe8:
    // 0x26bbe8: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x26bbe8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_26bbec:
    // 0x26bbec: 0xc08a684  jal         func_229A10
label_26bbf0:
    if (ctx->pc == 0x26BBF0u) {
        ctx->pc = 0x26BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBECu;
        // 0x26bbf0: 0x4601ad68  max.s       $f21, $f21, $f1 (Delay Slot)
        ctx->f[21] = std::max(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BBF4u;
        goto label_26bbf4;
    }
    ctx->pc = 0x26BBECu;
    SET_GPR_U32(ctx, 31, 0x26BBF4u);
    ctx->pc = 0x26BBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BBECu;
    // 0x26bbf0: 0x4601ad68  max.s       $f21, $f21, $f1 (Delay Slot)
    ctx->f[21] = std::max(ctx->f[21], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x26BBECu, 0x26BBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBF4u;
label_26bbf4:
    // 0x26bbf4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26bbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bbf8:
    // 0x26bbf8: 0x0  nop
    ctx->pc = 0x26bbf8u;
    // NOP
label_26bbfc:
    // 0x26bbfc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_26bc00:
    if (ctx->pc == 0x26BC00u) {
        ctx->pc = 0x26BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBFCu;
        // 0x26bc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC04u;
        goto label_26bc04;
    }
    ctx->pc = 0x26BBFCu;
    {
        const bool branch_taken_0x26bbfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBFCu;
        // 0x26bc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbfc) {
            ctx->pc = 0x26BC2Cu;
            goto label_26bc2c;
        }
    }
    ctx->pc = 0x26BC04u;
label_26bc04:
    // 0x26bc04: 0xc08a658  jal         func_229960
label_26bc08:
    if (ctx->pc == 0x26BC08u) {
        ctx->pc = 0x26BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC04u;
        // 0x26bc08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC0Cu;
        goto label_26bc0c;
    }
    ctx->pc = 0x26BC04u;
    SET_GPR_U32(ctx, 31, 0x26BC0Cu);
    ctx->pc = 0x26BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC04u;
    // 0x26bc08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x26BC04u, 0x26BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC0Cu;
label_26bc0c:
    // 0x26bc0c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x26bc0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bc10:
    // 0x26bc10: 0x0  nop
    ctx->pc = 0x26bc10u;
    // NOP
label_26bc14:
    // 0x26bc14: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_26bc18:
    if (ctx->pc == 0x26BC18u) {
        ctx->pc = 0x26BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC14u;
        // 0x26bc18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC1Cu;
        goto label_26bc1c;
    }
    ctx->pc = 0x26BC14u;
    {
        const bool branch_taken_0x26bc14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC14u;
        // 0x26bc18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc14) {
            ctx->pc = 0x26BC2Cu;
            goto label_26bc2c;
        }
    }
    ctx->pc = 0x26BC1Cu;
label_26bc1c:
    // 0x26bc1c: 0xc087090  jal         func_21C240
label_26bc20:
    if (ctx->pc == 0x26BC20u) {
        ctx->pc = 0x26BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC1Cu;
        // 0x26bc20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC24u;
        goto label_26bc24;
    }
    ctx->pc = 0x26BC1Cu;
    SET_GPR_U32(ctx, 31, 0x26BC24u);
    ctx->pc = 0x26BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC1Cu;
    // 0x26bc20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C240u, 0x26BC1Cu, 0x26BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC24u;
label_26bc24:
    // 0x26bc24: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_26bc28:
    if (ctx->pc == 0x26BC28u) {
        ctx->pc = 0x26BC2Cu;
        goto label_26bc2c;
    }
    ctx->pc = 0x26BC24u;
    {
        const bool branch_taken_0x26bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bc24) {
            ctx->pc = 0x26BC3Cu;
            goto label_26bc3c;
        }
    }
    ctx->pc = 0x26BC2Cu;
label_26bc2c:
    // 0x26bc2c: 0xc09b1f8  jal         func_26C7E0
label_26bc30:
    if (ctx->pc == 0x26BC30u) {
        ctx->pc = 0x26BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC2Cu;
        // 0x26bc30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC34u;
        goto label_26bc34;
    }
    ctx->pc = 0x26BC2Cu;
    SET_GPR_U32(ctx, 31, 0x26BC34u);
    ctx->pc = 0x26BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC2Cu;
    // 0x26bc30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C7E0u, 0x26BC2Cu, 0x26BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC34u;
label_26bc34:
    // 0x26bc34: 0x10000084  b           . + 4 + (0x84 << 2)
label_26bc38:
    if (ctx->pc == 0x26BC38u) {
        ctx->pc = 0x26BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC34u;
        // 0x26bc38: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC3Cu;
        goto label_26bc3c;
    }
    ctx->pc = 0x26BC34u;
    {
        const bool branch_taken_0x26bc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC34u;
        // 0x26bc38: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc34) {
            ctx->pc = 0x26BE48u;
            goto label_26be48;
        }
    }
    ctx->pc = 0x26BC3Cu;
label_26bc3c:
    // 0x26bc3c: 0xc088e68  jal         func_2239A0
label_26bc40:
    if (ctx->pc == 0x26BC40u) {
        ctx->pc = 0x26BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC3Cu;
        // 0x26bc40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC44u;
        goto label_26bc44;
    }
    ctx->pc = 0x26BC3Cu;
    SET_GPR_U32(ctx, 31, 0x26BC44u);
    ctx->pc = 0x26BC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC3Cu;
    // 0x26bc40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x26BC3Cu, 0x26BC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC44u;
label_26bc44:
    // 0x26bc44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_26bc48:
    if (ctx->pc == 0x26BC48u) {
        ctx->pc = 0x26BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC44u;
        // 0x26bc48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC4Cu;
        goto label_26bc4c;
    }
    ctx->pc = 0x26BC44u;
    {
        const bool branch_taken_0x26bc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC44u;
        // 0x26bc48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc44) {
            ctx->pc = 0x26BC70u;
            goto label_26bc70;
        }
    }
    ctx->pc = 0x26BC4Cu;
label_26bc4c:
    // 0x26bc4c: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x26bc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_26bc50:
    // 0x26bc50: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26bc50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_26bc54:
    // 0x26bc54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26bc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26bc58:
    // 0x26bc58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26bc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bc5c:
    // 0x26bc5c: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x26bc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_26bc60:
    // 0x26bc60: 0xc09db66  jal         func_276D98
label_26bc64:
    if (ctx->pc == 0x26BC64u) {
        ctx->pc = 0x26BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC60u;
        // 0x26bc64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC68u;
        goto label_26bc68;
    }
    ctx->pc = 0x26BC60u;
    SET_GPR_U32(ctx, 31, 0x26BC68u);
    ctx->pc = 0x26BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC60u;
    // 0x26bc64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D98u, 0x26BC60u, 0x26BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC68u;
label_26bc68:
    // 0x26bc68: 0x10000009  b           . + 4 + (0x9 << 2)
label_26bc6c:
    if (ctx->pc == 0x26BC6Cu) {
        ctx->pc = 0x26BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC68u;
        // 0x26bc6c: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC70u;
        goto label_26bc70;
    }
    ctx->pc = 0x26BC68u;
    {
        const bool branch_taken_0x26bc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC68u;
        // 0x26bc6c: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc68) {
            ctx->pc = 0x26BC90u;
            goto label_26bc90;
        }
    }
    ctx->pc = 0x26BC70u;
label_26bc70:
    // 0x26bc70: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x26bc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_26bc74:
    // 0x26bc74: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x26bc74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_26bc78:
    // 0x26bc78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26bc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26bc7c:
    // 0x26bc7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26bc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bc80:
    // 0x26bc80: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x26bc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_26bc84:
    // 0x26bc84: 0xc09db66  jal         func_276D98
label_26bc88:
    if (ctx->pc == 0x26BC88u) {
        ctx->pc = 0x26BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BC84u;
        // 0x26bc88: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BC8Cu;
        goto label_26bc8c;
    }
    ctx->pc = 0x26BC84u;
    SET_GPR_U32(ctx, 31, 0x26BC8Cu);
    ctx->pc = 0x26BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BC84u;
    // 0x26bc88: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D98u, 0x26BC84u, 0x26BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BC8Cu;
label_26bc8c:
    // 0x26bc8c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x26bc8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_26bc90:
    // 0x26bc90: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_26bc94:
    // 0x26bc94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26bc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26bc98:
    // 0x26bc98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26bc98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26bc9c:
    // 0x26bc9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26bca0:
    // 0x26bca0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26bca0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26bca4:
    // 0x26bca4: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_26bca8:
    if (ctx->pc == 0x26BCA8u) {
        ctx->pc = 0x26BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCA4u;
        // 0x26bca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCACu;
        goto label_26bcac;
    }
    ctx->pc = 0x26BCA4u;
    {
        const bool branch_taken_0x26bca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCA4u;
        // 0x26bca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bca4) {
            ctx->pc = 0x26BDF0u;
            goto label_26bdf0;
        }
    }
    ctx->pc = 0x26BCACu;
label_26bcac:
    // 0x26bcac: 0xc09efcc  jal         func_27BF30
label_26bcb0:
    if (ctx->pc == 0x26BCB0u) {
        ctx->pc = 0x26BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCACu;
        // 0x26bcb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCB4u;
        goto label_26bcb4;
    }
    ctx->pc = 0x26BCACu;
    SET_GPR_U32(ctx, 31, 0x26BCB4u);
    ctx->pc = 0x26BCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BCACu;
    // 0x26bcb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF30u, 0x26BCACu, 0x26BCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCB4u;
label_26bcb4:
    // 0x26bcb4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_26bcb8:
    if (ctx->pc == 0x26BCB8u) {
        ctx->pc = 0x26BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCB4u;
        // 0x26bcb8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCBCu;
        goto label_26bcbc;
    }
    ctx->pc = 0x26BCB4u;
    {
        const bool branch_taken_0x26bcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCB4u;
        // 0x26bcb8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bcb4) {
            ctx->pc = 0x26BE10u;
            goto label_26be10;
        }
    }
    ctx->pc = 0x26BCBCu;
label_26bcbc:
    // 0x26bcbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26bcc0:
    // 0x26bcc0: 0xc0cd4ee  jal         func_3353B8
label_26bcc4:
    if (ctx->pc == 0x26BCC4u) {
        ctx->pc = 0x26BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCC0u;
        // 0x26bcc4: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCC8u;
        goto label_26bcc8;
    }
    ctx->pc = 0x26BCC0u;
    SET_GPR_U32(ctx, 31, 0x26BCC8u);
    ctx->pc = 0x26BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BCC0u;
    // 0x26bcc4: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x26BCC0u, 0x26BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BCC8u;
label_26bcc8:
    // 0x26bcc8: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
label_26bccc:
    if (ctx->pc == 0x26BCCCu) {
        ctx->pc = 0x26BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BCC8u;
        // 0x26bccc: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BCD0u;
        goto label_26bcd0;
    }
    ctx->pc = 0x26BCC8u;
    {
        const bool branch_taken_0x26bcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bcc8) {
            ctx->pc = 0x26BCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BCC8u;
            // 0x26bccc: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BE14u;
            goto label_26be14;
        }
    }
    ctx->pc = 0x26BCD0u;
label_26bcd0:
    // 0x26bcd0: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x26bcd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_26bcd4:
    // 0x26bcd4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26bcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_26bcd8:
    // 0x26bcd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26bcd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26bcdc:
    // 0x26bcdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26bce0:
    // 0x26bce0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x26bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_26bce4:
    // 0x26bce4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x26bce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26bce8:
    // 0x26bce8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26bce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bcec:
    // 0x26bcec: 0x0  nop
    ctx->pc = 0x26bcecu;
    // NOP
label_26bcf0:
    // 0x26bcf0: 0x45000043  bc1f        . + 4 + (0x43 << 2)
label_26bcf4:
    if (ctx->pc == 0x26BCF4u) {
        ctx->pc = 0x26BCF8u;
        goto label_26bcf8;
    }
    ctx->pc = 0x26BCF0u;
    {
        const bool branch_taken_0x26bcf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bcf0) {
            ctx->pc = 0x26BE00u;
            goto label_26be00;
        }
    }
    ctx->pc = 0x26BCF8u;
label_26bcf8:
    // 0x26bcf8: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x26bcf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_26bcfc:
    // 0x26bcfc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26bcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_26bd00:
    // 0x26bd00: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x26bd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
label_26bd04:
    // 0x26bd04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26bd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26bd08:
    // 0x26bd08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26bd08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26bd0c:
    // 0x26bd0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26bd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26bd10:
    // 0x26bd10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26bd10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26bd14:
    // 0x26bd14: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_26bd18:
    if (ctx->pc == 0x26BD18u) {
        ctx->pc = 0x26BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD14u;
        // 0x26bd18: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BD1Cu;
        goto label_26bd1c;
    }
    ctx->pc = 0x26BD14u;
    {
        const bool branch_taken_0x26bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD14u;
        // 0x26bd18: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bd14) {
            ctx->pc = 0x26BE00u;
            goto label_26be00;
        }
    }
    ctx->pc = 0x26BD1Cu;
label_26bd1c:
    // 0x26bd1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26bd20:
    // 0x26bd20: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x26bd20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_26bd24:
    // 0x26bd24: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x26bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_26bd28:
    // 0x26bd28: 0x60f809  jalr        $v1
label_26bd2c:
    if (ctx->pc == 0x26BD2Cu) {
        ctx->pc = 0x26BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD28u;
        // 0x26bd2c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BD30u;
        goto label_26bd30;
    }
    ctx->pc = 0x26BD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26BD30u);
        ctx->pc = 0x26BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD28u;
        // 0x26bd2c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BD28u, 0x26BD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BD30u;
label_26bd30:
    // 0x26bd30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26bd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26bd34:
    // 0x26bd34: 0xc0cd940  jal         func_336500
label_26bd38:
    if (ctx->pc == 0x26BD38u) {
        ctx->pc = 0x26BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD34u;
        // 0x26bd38: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BD3Cu;
        goto label_26bd3c;
    }
    ctx->pc = 0x26BD34u;
    SET_GPR_U32(ctx, 31, 0x26BD3Cu);
    ctx->pc = 0x26BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD34u;
    // 0x26bd38: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x26BD34u, 0x26BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD3Cu;
label_26bd3c:
    // 0x26bd3c: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x26bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26bd40:
    // 0x26bd40: 0xc0cd5ea  jal         func_3357A8
label_26bd44:
    if (ctx->pc == 0x26BD44u) {
        ctx->pc = 0x26BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD40u;
        // 0x26bd44: 0xc7ad0010  lwc1        $f13, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BD48u;
        goto label_26bd48;
    }
    ctx->pc = 0x26BD40u;
    SET_GPR_U32(ctx, 31, 0x26BD48u);
    ctx->pc = 0x26BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD40u;
    // 0x26bd44: 0xc7ad0010  lwc1        $f13, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x26BD40u, 0x26BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD48u;
label_26bd48:
    // 0x26bd48: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x26bd48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_26bd4c:
    // 0x26bd4c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26bd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_26bd50:
    // 0x26bd50: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26bd50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26bd54:
    // 0x26bd54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26bd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_26bd58:
    // 0x26bd58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26bd5c:
    // 0x26bd5c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x26bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_26bd60:
    // 0x26bd60: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26bd64:
    // 0x26bd64: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x26bd64u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26bd68:
    // 0x26bd68: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x26bd68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bd6c:
    // 0x26bd6c: 0x0  nop
    ctx->pc = 0x26bd6cu;
    // NOP
label_26bd70:
    // 0x26bd70: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26bd74:
    if (ctx->pc == 0x26BD74u) {
        ctx->pc = 0x26BD78u;
        goto label_26bd78;
    }
    ctx->pc = 0x26BD70u;
    {
        const bool branch_taken_0x26bd70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bd70) {
            ctx->pc = 0x26BD8Cu;
            goto label_26bd8c;
        }
    }
    ctx->pc = 0x26BD78u;
label_26bd78:
    // 0x26bd78: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x26bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_26bd7c:
    // 0x26bd7c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26bd7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26bd80:
    // 0x26bd80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bd84:
    // 0x26bd84: 0x0  nop
    ctx->pc = 0x26bd84u;
    // NOP
label_26bd88:
    // 0x26bd88: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x26bd88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_26bd8c:
    // 0x26bd8c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x26bd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_26bd90:
    // 0x26bd90: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26bd90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26bd94:
    // 0x26bd94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bd98:
    // 0x26bd98: 0x0  nop
    ctx->pc = 0x26bd98u;
    // NOP
label_26bd9c:
    // 0x26bd9c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x26bd9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bda0:
    // 0x26bda0: 0x0  nop
    ctx->pc = 0x26bda0u;
    // NOP
label_26bda4:
    // 0x26bda4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_26bda8:
    if (ctx->pc == 0x26BDA8u) {
        ctx->pc = 0x26BDACu;
        goto label_26bdac;
    }
    ctx->pc = 0x26BDA4u;
    {
        const bool branch_taken_0x26bda4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bda4) {
            ctx->pc = 0x26BDC0u;
            goto label_26bdc0;
        }
    }
    ctx->pc = 0x26BDACu;
label_26bdac:
    // 0x26bdac: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x26bdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_26bdb0:
    // 0x26bdb0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26bdb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26bdb4:
    // 0x26bdb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26bdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26bdb8:
    // 0x26bdb8: 0x0  nop
    ctx->pc = 0x26bdb8u;
    // NOP
label_26bdbc:
    // 0x26bdbc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x26bdbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_26bdc0:
    // 0x26bdc0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26bdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_26bdc4:
    // 0x26bdc4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26bdc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_26bdc8:
    // 0x26bdc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26bdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26bdcc:
    // 0x26bdcc: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x26bdccu;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
label_26bdd0:
    // 0x26bdd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26bdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26bdd4:
    // 0x26bdd4: 0x0  nop
    ctx->pc = 0x26bdd4u;
    // NOP
label_26bdd8:
    // 0x26bdd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_26bddc:
    if (ctx->pc == 0x26BDDCu) {
        ctx->pc = 0x26BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDD8u;
        // 0x26bddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BDE0u;
        goto label_26bde0;
    }
    ctx->pc = 0x26BDD8u;
    {
        const bool branch_taken_0x26bdd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDD8u;
        // 0x26bddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdd8) {
            ctx->pc = 0x26BDF0u;
            goto label_26bdf0;
        }
    }
    ctx->pc = 0x26BDE0u;
label_26bde0:
    // 0x26bde0: 0xc09b306  jal         func_26CC18
label_26bde4:
    if (ctx->pc == 0x26BDE4u) {
        ctx->pc = 0x26BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDE0u;
        // 0x26bde4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BDE8u;
        goto label_26bde8;
    }
    ctx->pc = 0x26BDE0u;
    SET_GPR_U32(ctx, 31, 0x26BDE8u);
    ctx->pc = 0x26BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDE0u;
    // 0x26bde4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CC18u, 0x26BDE0u, 0x26BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDE8u;
label_26bde8:
    // 0x26bde8: 0x1000000f  b           . + 4 + (0xF << 2)
label_26bdec:
    if (ctx->pc == 0x26BDECu) {
        ctx->pc = 0x26BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDE8u;
        // 0x26bdec: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BDF0u;
        goto label_26bdf0;
    }
    ctx->pc = 0x26BDE8u;
    {
        const bool branch_taken_0x26bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDE8u;
        // 0x26bdec: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bde8) {
            ctx->pc = 0x26BE28u;
            goto label_26be28;
        }
    }
    ctx->pc = 0x26BDF0u;
label_26bdf0:
    // 0x26bdf0: 0xc09b306  jal         func_26CC18
label_26bdf4:
    if (ctx->pc == 0x26BDF4u) {
        ctx->pc = 0x26BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDF0u;
        // 0x26bdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BDF8u;
        goto label_26bdf8;
    }
    ctx->pc = 0x26BDF0u;
    SET_GPR_U32(ctx, 31, 0x26BDF8u);
    ctx->pc = 0x26BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BDF0u;
    // 0x26bdf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CC18u, 0x26BDF0u, 0x26BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BDF8u;
label_26bdf8:
    // 0x26bdf8: 0x1000000b  b           . + 4 + (0xB << 2)
label_26bdfc:
    if (ctx->pc == 0x26BDFCu) {
        ctx->pc = 0x26BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDF8u;
        // 0x26bdfc: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE00u;
        goto label_26be00;
    }
    ctx->pc = 0x26BDF8u;
    {
        const bool branch_taken_0x26bdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDF8u;
        // 0x26bdfc: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bdf8) {
            ctx->pc = 0x26BE28u;
            goto label_26be28;
        }
    }
    ctx->pc = 0x26BE00u;
label_26be00:
    // 0x26be00: 0xc09b454  jal         func_26D150
label_26be04:
    if (ctx->pc == 0x26BE04u) {
        ctx->pc = 0x26BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE00u;
        // 0x26be04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE08u;
        goto label_26be08;
    }
    ctx->pc = 0x26BE00u;
    SET_GPR_U32(ctx, 31, 0x26BE08u);
    ctx->pc = 0x26BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE00u;
    // 0x26be04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D150u, 0x26BE00u, 0x26BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE08u;
label_26be08:
    // 0x26be08: 0x10000007  b           . + 4 + (0x7 << 2)
label_26be0c:
    if (ctx->pc == 0x26BE0Cu) {
        ctx->pc = 0x26BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE08u;
        // 0x26be0c: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE10u;
        goto label_26be10;
    }
    ctx->pc = 0x26BE08u;
    {
        const bool branch_taken_0x26be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE08u;
        // 0x26be0c: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26be08) {
            ctx->pc = 0x26BE28u;
            goto label_26be28;
        }
    }
    ctx->pc = 0x26BE10u;
label_26be10:
    // 0x26be10: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26be14:
    // 0x26be14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26be18:
    // 0x26be18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26be18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26be1c:
    // 0x26be1c: 0xc0993e8  jal         func_264FA0
label_26be20:
    if (ctx->pc == 0x26BE20u) {
        ctx->pc = 0x26BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE1Cu;
        // 0x26be20: 0x8c4600b4  lw          $a2, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE24u;
        goto label_26be24;
    }
    ctx->pc = 0x26BE1Cu;
    SET_GPR_U32(ctx, 31, 0x26BE24u);
    ctx->pc = 0x26BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BE1Cu;
    // 0x26be20: 0x8c4600b4  lw          $a2, 0xB4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264FA0u, 0x26BE1Cu, 0x26BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE24u;
label_26be24:
    // 0x26be24: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x26be24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_26be28:
    // 0x26be28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26be28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26be2c:
    // 0x26be2c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x26be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_26be30:
    // 0x26be30: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26be34:
    // 0x26be34: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26be38:
    // 0x26be38: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x26be38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_26be3c:
    // 0x26be3c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26be40:
    // 0x26be40: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x26be40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_26be44:
    // 0x26be44: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26be44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26be48:
    // 0x26be48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26be48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26be4c:
    // 0x26be4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26be4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26be50:
    // 0x26be50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26be50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26be54:
    // 0x26be54: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x26be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26be58:
    // 0x26be58: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x26be58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26be5c:
    // 0x26be5c: 0x3e00008  jr          $ra
label_26be60:
    if (ctx->pc == 0x26BE60u) {
        ctx->pc = 0x26BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE5Cu;
        // 0x26be60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BE64u;
        goto label_26be64;
    }
    ctx->pc = 0x26BE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BE5Cu;
        // 0x26be60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BE64u;
label_26be64:
    // 0x26be64: 0x0  nop
    ctx->pc = 0x26be64u;
    // NOP
    ctx->pc = 0x26be68u;
}

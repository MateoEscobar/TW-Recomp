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

// Function: sub_0022BDC0
// Address: 0x22bdc0 - 0x22bfd0
void sub_0022BDC0_0x22bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BDC0_0x22bdc0");
#endif

    switch (ctx->pc) {
        case 0x22bdc0u: goto label_22bdc0;
        case 0x22bdc4u: goto label_22bdc4;
        case 0x22bdc8u: goto label_22bdc8;
        case 0x22bdccu: goto label_22bdcc;
        case 0x22bdd0u: goto label_22bdd0;
        case 0x22bdd4u: goto label_22bdd4;
        case 0x22bdd8u: goto label_22bdd8;
        case 0x22bddcu: goto label_22bddc;
        case 0x22bde0u: goto label_22bde0;
        case 0x22bde4u: goto label_22bde4;
        case 0x22bde8u: goto label_22bde8;
        case 0x22bdecu: goto label_22bdec;
        case 0x22bdf0u: goto label_22bdf0;
        case 0x22bdf4u: goto label_22bdf4;
        case 0x22bdf8u: goto label_22bdf8;
        case 0x22bdfcu: goto label_22bdfc;
        case 0x22be00u: goto label_22be00;
        case 0x22be04u: goto label_22be04;
        case 0x22be08u: goto label_22be08;
        case 0x22be0cu: goto label_22be0c;
        case 0x22be10u: goto label_22be10;
        case 0x22be14u: goto label_22be14;
        case 0x22be18u: goto label_22be18;
        case 0x22be1cu: goto label_22be1c;
        case 0x22be20u: goto label_22be20;
        case 0x22be24u: goto label_22be24;
        case 0x22be28u: goto label_22be28;
        case 0x22be2cu: goto label_22be2c;
        case 0x22be30u: goto label_22be30;
        case 0x22be34u: goto label_22be34;
        case 0x22be38u: goto label_22be38;
        case 0x22be3cu: goto label_22be3c;
        case 0x22be40u: goto label_22be40;
        case 0x22be44u: goto label_22be44;
        case 0x22be48u: goto label_22be48;
        case 0x22be4cu: goto label_22be4c;
        case 0x22be50u: goto label_22be50;
        case 0x22be54u: goto label_22be54;
        case 0x22be58u: goto label_22be58;
        case 0x22be5cu: goto label_22be5c;
        case 0x22be60u: goto label_22be60;
        case 0x22be64u: goto label_22be64;
        case 0x22be68u: goto label_22be68;
        case 0x22be6cu: goto label_22be6c;
        case 0x22be70u: goto label_22be70;
        case 0x22be74u: goto label_22be74;
        case 0x22be78u: goto label_22be78;
        case 0x22be7cu: goto label_22be7c;
        case 0x22be80u: goto label_22be80;
        case 0x22be84u: goto label_22be84;
        case 0x22be88u: goto label_22be88;
        case 0x22be8cu: goto label_22be8c;
        case 0x22be90u: goto label_22be90;
        case 0x22be94u: goto label_22be94;
        case 0x22be98u: goto label_22be98;
        case 0x22be9cu: goto label_22be9c;
        case 0x22bea0u: goto label_22bea0;
        case 0x22bea4u: goto label_22bea4;
        case 0x22bea8u: goto label_22bea8;
        case 0x22beacu: goto label_22beac;
        case 0x22beb0u: goto label_22beb0;
        case 0x22beb4u: goto label_22beb4;
        case 0x22beb8u: goto label_22beb8;
        case 0x22bebcu: goto label_22bebc;
        case 0x22bec0u: goto label_22bec0;
        case 0x22bec4u: goto label_22bec4;
        case 0x22bec8u: goto label_22bec8;
        case 0x22beccu: goto label_22becc;
        case 0x22bed0u: goto label_22bed0;
        case 0x22bed4u: goto label_22bed4;
        case 0x22bed8u: goto label_22bed8;
        case 0x22bedcu: goto label_22bedc;
        case 0x22bee0u: goto label_22bee0;
        case 0x22bee4u: goto label_22bee4;
        case 0x22bee8u: goto label_22bee8;
        case 0x22beecu: goto label_22beec;
        case 0x22bef0u: goto label_22bef0;
        case 0x22bef4u: goto label_22bef4;
        case 0x22bef8u: goto label_22bef8;
        case 0x22befcu: goto label_22befc;
        case 0x22bf00u: goto label_22bf00;
        case 0x22bf04u: goto label_22bf04;
        case 0x22bf08u: goto label_22bf08;
        case 0x22bf0cu: goto label_22bf0c;
        case 0x22bf10u: goto label_22bf10;
        case 0x22bf14u: goto label_22bf14;
        case 0x22bf18u: goto label_22bf18;
        case 0x22bf1cu: goto label_22bf1c;
        case 0x22bf20u: goto label_22bf20;
        case 0x22bf24u: goto label_22bf24;
        case 0x22bf28u: goto label_22bf28;
        case 0x22bf2cu: goto label_22bf2c;
        case 0x22bf30u: goto label_22bf30;
        case 0x22bf34u: goto label_22bf34;
        case 0x22bf38u: goto label_22bf38;
        case 0x22bf3cu: goto label_22bf3c;
        case 0x22bf40u: goto label_22bf40;
        case 0x22bf44u: goto label_22bf44;
        case 0x22bf48u: goto label_22bf48;
        case 0x22bf4cu: goto label_22bf4c;
        case 0x22bf50u: goto label_22bf50;
        case 0x22bf54u: goto label_22bf54;
        case 0x22bf58u: goto label_22bf58;
        case 0x22bf5cu: goto label_22bf5c;
        case 0x22bf60u: goto label_22bf60;
        case 0x22bf64u: goto label_22bf64;
        case 0x22bf68u: goto label_22bf68;
        case 0x22bf6cu: goto label_22bf6c;
        case 0x22bf70u: goto label_22bf70;
        case 0x22bf74u: goto label_22bf74;
        case 0x22bf78u: goto label_22bf78;
        case 0x22bf7cu: goto label_22bf7c;
        case 0x22bf80u: goto label_22bf80;
        case 0x22bf84u: goto label_22bf84;
        case 0x22bf88u: goto label_22bf88;
        case 0x22bf8cu: goto label_22bf8c;
        case 0x22bf90u: goto label_22bf90;
        case 0x22bf94u: goto label_22bf94;
        case 0x22bf98u: goto label_22bf98;
        case 0x22bf9cu: goto label_22bf9c;
        case 0x22bfa0u: goto label_22bfa0;
        case 0x22bfa4u: goto label_22bfa4;
        case 0x22bfa8u: goto label_22bfa8;
        case 0x22bfacu: goto label_22bfac;
        case 0x22bfb0u: goto label_22bfb0;
        case 0x22bfb4u: goto label_22bfb4;
        case 0x22bfb8u: goto label_22bfb8;
        case 0x22bfbcu: goto label_22bfbc;
        case 0x22bfc0u: goto label_22bfc0;
        case 0x22bfc4u: goto label_22bfc4;
        case 0x22bfc8u: goto label_22bfc8;
        case 0x22bfccu: goto label_22bfcc;
        default: break;
    }

    ctx->pc = 0x22bdc0u;

label_22bdc0:
    // 0x22bdc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22bdc4:
    // 0x22bdc4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x22bdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_22bdc8:
    // 0x22bdc8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x22bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_22bdcc:
    // 0x22bdcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22bdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22bdd0:
    // 0x22bdd0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x22bdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_22bdd4:
    // 0x22bdd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22bdd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22bdd8:
    // 0x22bdd8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x22bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_22bddc:
    // 0x22bddc: 0x12400075  beqz        $s2, . + 4 + (0x75 << 2)
label_22bde0:
    if (ctx->pc == 0x22BDE0u) {
        ctx->pc = 0x22BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDDCu;
        // 0x22bde0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDE4u;
        goto label_22bde4;
    }
    ctx->pc = 0x22BDDCu;
    {
        const bool branch_taken_0x22bddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDDCu;
        // 0x22bde0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bddc) {
            ctx->pc = 0x22BFB4u;
            goto label_22bfb4;
        }
    }
    ctx->pc = 0x22BDE4u;
label_22bde4:
    // 0x22bde4: 0xc08997c  jal         func_2265F0
label_22bde8:
    if (ctx->pc == 0x22BDE8u) {
        ctx->pc = 0x22BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDE4u;
        // 0x22bde8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDECu;
        goto label_22bdec;
    }
    ctx->pc = 0x22BDE4u;
    SET_GPR_U32(ctx, 31, 0x22BDECu);
    ctx->pc = 0x22BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDE4u;
    // 0x22bde8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22BDE4u, 0x22BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDECu;
label_22bdec:
    // 0x22bdec: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_22bdf0:
    if (ctx->pc == 0x22BDF0u) {
        ctx->pc = 0x22BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDECu;
        // 0x22bdf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDF4u;
        goto label_22bdf4;
    }
    ctx->pc = 0x22BDECu;
    {
        const bool branch_taken_0x22bdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDECu;
        // 0x22bdf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdec) {
            ctx->pc = 0x22BFB4u;
            goto label_22bfb4;
        }
    }
    ctx->pc = 0x22BDF4u;
label_22bdf4:
    // 0x22bdf4: 0xc089988  jal         func_226620
label_22bdf8:
    if (ctx->pc == 0x22BDF8u) {
        ctx->pc = 0x22BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BDF4u;
        // 0x22bdf8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BDFCu;
        goto label_22bdfc;
    }
    ctx->pc = 0x22BDF4u;
    SET_GPR_U32(ctx, 31, 0x22BDFCu);
    ctx->pc = 0x22BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDF4u;
    // 0x22bdf8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22BDF4u, 0x22BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDFCu;
label_22bdfc:
    // 0x22bdfc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22be00:
    // 0x22be00: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22be00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22be04:
    // 0x22be04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22be04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22be08:
    // 0x22be08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22be08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22be0c:
    // 0x22be0c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22be0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22be10:
    // 0x22be10: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22be14:
    // 0x22be14: 0x60f809  jalr        $v1
label_22be18:
    if (ctx->pc == 0x22BE18u) {
        ctx->pc = 0x22BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE14u;
        // 0x22be18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE1Cu;
        goto label_22be1c;
    }
    ctx->pc = 0x22BE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22BE1Cu);
        ctx->pc = 0x22BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE14u;
        // 0x22be18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE14u, 0x22BE1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BE1Cu;
label_22be1c:
    // 0x22be1c: 0xc089f76  jal         func_227DD8
label_22be20:
    if (ctx->pc == 0x22BE20u) {
        ctx->pc = 0x22BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE1Cu;
        // 0x22be20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE24u;
        goto label_22be24;
    }
    ctx->pc = 0x22BE1Cu;
    SET_GPR_U32(ctx, 31, 0x22BE24u);
    ctx->pc = 0x22BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE1Cu;
    // 0x22be20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x22BE1Cu, 0x22BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE24u;
label_22be24:
    // 0x22be24: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
label_22be28:
    if (ctx->pc == 0x22BE28u) {
        ctx->pc = 0x22BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE24u;
        // 0x22be28: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE2Cu;
        goto label_22be2c;
    }
    ctx->pc = 0x22BE24u;
    {
        const bool branch_taken_0x22be24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be24) {
            ctx->pc = 0x22BE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE24u;
            // 0x22be28: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF0Cu;
            goto label_22bf0c;
        }
    }
    ctx->pc = 0x22BE2Cu;
label_22be2c:
    // 0x22be2c: 0xc089fac  jal         func_227EB0
label_22be30:
    if (ctx->pc == 0x22BE30u) {
        ctx->pc = 0x22BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE2Cu;
        // 0x22be30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE34u;
        goto label_22be34;
    }
    ctx->pc = 0x22BE2Cu;
    SET_GPR_U32(ctx, 31, 0x22BE34u);
    ctx->pc = 0x22BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE2Cu;
    // 0x22be30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x22BE2Cu, 0x22BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE34u;
label_22be34:
    // 0x22be34: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_22be38:
    if (ctx->pc == 0x22BE38u) {
        ctx->pc = 0x22BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE34u;
        // 0x22be38: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE3Cu;
        goto label_22be3c;
    }
    ctx->pc = 0x22BE34u;
    {
        const bool branch_taken_0x22be34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be34) {
            ctx->pc = 0x22BE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE34u;
            // 0x22be38: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF0Cu;
            goto label_22bf0c;
        }
    }
    ctx->pc = 0x22BE3Cu;
label_22be3c:
    // 0x22be3c: 0xc089f66  jal         func_227D98
label_22be40:
    if (ctx->pc == 0x22BE40u) {
        ctx->pc = 0x22BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE3Cu;
        // 0x22be40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE44u;
        goto label_22be44;
    }
    ctx->pc = 0x22BE3Cu;
    SET_GPR_U32(ctx, 31, 0x22BE44u);
    ctx->pc = 0x22BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE3Cu;
    // 0x22be40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x22BE3Cu, 0x22BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE44u;
label_22be44:
    // 0x22be44: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_22be48:
    if (ctx->pc == 0x22BE48u) {
        ctx->pc = 0x22BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE44u;
        // 0x22be48: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE4Cu;
        goto label_22be4c;
    }
    ctx->pc = 0x22BE44u;
    {
        const bool branch_taken_0x22be44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be44) {
            ctx->pc = 0x22BE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE44u;
            // 0x22be48: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF0Cu;
            goto label_22bf0c;
        }
    }
    ctx->pc = 0x22BE4Cu;
label_22be4c:
    // 0x22be4c: 0xc089f86  jal         func_227E18
label_22be50:
    if (ctx->pc == 0x22BE50u) {
        ctx->pc = 0x22BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE4Cu;
        // 0x22be50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE54u;
        goto label_22be54;
    }
    ctx->pc = 0x22BE4Cu;
    SET_GPR_U32(ctx, 31, 0x22BE54u);
    ctx->pc = 0x22BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE4Cu;
    // 0x22be50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x22BE4Cu, 0x22BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE54u;
label_22be54:
    // 0x22be54: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_22be58:
    if (ctx->pc == 0x22BE58u) {
        ctx->pc = 0x22BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE54u;
        // 0x22be58: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE5Cu;
        goto label_22be5c;
    }
    ctx->pc = 0x22BE54u;
    {
        const bool branch_taken_0x22be54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be54) {
            ctx->pc = 0x22BE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE54u;
            // 0x22be58: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF0Cu;
            goto label_22bf0c;
        }
    }
    ctx->pc = 0x22BE5Cu;
label_22be5c:
    // 0x22be5c: 0x5600002b  bnel        $s0, $zero, . + 4 + (0x2B << 2)
label_22be60:
    if (ctx->pc == 0x22BE60u) {
        ctx->pc = 0x22BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE5Cu;
        // 0x22be60: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE64u;
        goto label_22be64;
    }
    ctx->pc = 0x22BE5Cu;
    {
        const bool branch_taken_0x22be5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be5c) {
            ctx->pc = 0x22BE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE5Cu;
            // 0x22be60: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF0Cu;
            goto label_22bf0c;
        }
    }
    ctx->pc = 0x22BE64u;
label_22be64:
    // 0x22be64: 0xc0e409a  jal         func_390268
label_22be68:
    if (ctx->pc == 0x22BE68u) {
        ctx->pc = 0x22BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE64u;
        // 0x22be68: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE6Cu;
        goto label_22be6c;
    }
    ctx->pc = 0x22BE64u;
    SET_GPR_U32(ctx, 31, 0x22BE6Cu);
    ctx->pc = 0x22BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE64u;
    // 0x22be68: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x22BE64u, 0x22BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE6Cu;
label_22be6c:
    // 0x22be6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22be6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22be70:
    // 0x22be70: 0xc095018  jal         func_254060
label_22be74:
    if (ctx->pc == 0x22BE74u) {
        ctx->pc = 0x22BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE70u;
        // 0x22be74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE78u;
        goto label_22be78;
    }
    ctx->pc = 0x22BE70u;
    SET_GPR_U32(ctx, 31, 0x22BE78u);
    ctx->pc = 0x22BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE70u;
    // 0x22be74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22BE70u, 0x22BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE78u;
label_22be78:
    // 0x22be78: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x22be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22be7c:
    // 0x22be7c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_22be80:
    if (ctx->pc == 0x22BE80u) {
        ctx->pc = 0x22BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE7Cu;
        // 0x22be80: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE84u;
        goto label_22be84;
    }
    ctx->pc = 0x22BE7Cu;
    {
        const bool branch_taken_0x22be7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE7Cu;
        // 0x22be80: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be7c) {
            ctx->pc = 0x22BEACu;
            goto label_22beac;
        }
    }
    ctx->pc = 0x22BE84u;
label_22be84:
    // 0x22be84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22be88:
    // 0x22be88: 0xc0899ae  jal         func_2266B8
label_22be8c:
    if (ctx->pc == 0x22BE8Cu) {
        ctx->pc = 0x22BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE88u;
        // 0x22be8c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BE90u;
        goto label_22be90;
    }
    ctx->pc = 0x22BE88u;
    SET_GPR_U32(ctx, 31, 0x22BE90u);
    ctx->pc = 0x22BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE88u;
    // 0x22be8c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x22BE88u, 0x22BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE90u;
label_22be90:
    // 0x22be90: 0x273800b  movn        $s0, $s3, $s3
    ctx->pc = 0x22be90u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_22be94:
    // 0x22be94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22be94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22be98:
    // 0x22be98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22be98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22be9c:
    // 0x22be9c: 0xc040698  jal         func_101A60
label_22bea0:
    if (ctx->pc == 0x22BEA0u) {
        ctx->pc = 0x22BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE9Cu;
        // 0x22bea0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEA4u;
        goto label_22bea4;
    }
    ctx->pc = 0x22BE9Cu;
    SET_GPR_U32(ctx, 31, 0x22BEA4u);
    ctx->pc = 0x22BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE9Cu;
    // 0x22bea0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x22BE9Cu, 0x22BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEA4u;
label_22bea4:
    // 0x22bea4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_22bea8:
    if (ctx->pc == 0x22BEA8u) {
        ctx->pc = 0x22BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEA4u;
        // 0x22bea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEACu;
        goto label_22beac;
    }
    ctx->pc = 0x22BEA4u;
    {
        const bool branch_taken_0x22bea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bea4) {
            ctx->pc = 0x22BEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BEA4u;
            // 0x22bea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BEF0u;
            goto label_22bef0;
        }
    }
    ctx->pc = 0x22BEACu;
label_22beac:
    // 0x22beac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22beb0:
    // 0x22beb0: 0xc089974  jal         func_2265D0
label_22beb4:
    if (ctx->pc == 0x22BEB4u) {
        ctx->pc = 0x22BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEB0u;
        // 0x22beb4: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEB8u;
        goto label_22beb8;
    }
    ctx->pc = 0x22BEB0u;
    SET_GPR_U32(ctx, 31, 0x22BEB8u);
    ctx->pc = 0x22BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEB0u;
    // 0x22beb4: 0x3c050018  lui         $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22BEB0u, 0x22BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEB8u;
label_22beb8:
    // 0x22beb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22bebc:
    // 0x22bebc: 0xc08abd2  jal         func_22AF48
label_22bec0:
    if (ctx->pc == 0x22BEC0u) {
        ctx->pc = 0x22BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEBCu;
        // 0x22bec0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEC4u;
        goto label_22bec4;
    }
    ctx->pc = 0x22BEBCu;
    SET_GPR_U32(ctx, 31, 0x22BEC4u);
    ctx->pc = 0x22BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEBCu;
    // 0x22bec0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AF48u, 0x22BEBCu, 0x22BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEC4u;
label_22bec4:
    // 0x22bec4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x22bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22bec8:
    // 0x22bec8: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x22bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
label_22becc:
    // 0x22becc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22beccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_22bed0:
    // 0x22bed0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22bed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22bed4:
    // 0x22bed4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bed8:
    // 0x22bed8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x22bed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_22bedc:
    // 0x22bedc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x22bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_22bee0:
    // 0x22bee0: 0x40f809  jalr        $v0
label_22bee4:
    if (ctx->pc == 0x22BEE4u) {
        ctx->pc = 0x22BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEE0u;
        // 0x22bee4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEE8u;
        goto label_22bee8;
    }
    ctx->pc = 0x22BEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BEE8u);
        ctx->pc = 0x22BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEE0u;
        // 0x22bee4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BEE0u, 0x22BEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BEE8u;
label_22bee8:
    // 0x22bee8: 0x10000008  b           . + 4 + (0x8 << 2)
label_22beec:
    if (ctx->pc == 0x22BEECu) {
        ctx->pc = 0x22BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEE8u;
        // 0x22beec: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEF0u;
        goto label_22bef0;
    }
    ctx->pc = 0x22BEE8u;
    {
        const bool branch_taken_0x22bee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEE8u;
        // 0x22beec: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bee8) {
            ctx->pc = 0x22BF0Cu;
            goto label_22bf0c;
        }
    }
    ctx->pc = 0x22BEF0u;
label_22bef0:
    // 0x22bef0: 0xc08997c  jal         func_2265F0
label_22bef4:
    if (ctx->pc == 0x22BEF4u) {
        ctx->pc = 0x22BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEF0u;
        // 0x22bef4: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BEF8u;
        goto label_22bef8;
    }
    ctx->pc = 0x22BEF0u;
    SET_GPR_U32(ctx, 31, 0x22BEF8u);
    ctx->pc = 0x22BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BEF0u;
    // 0x22bef4: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22BEF0u, 0x22BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BEF8u;
label_22bef8:
    // 0x22bef8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22befc:
    if (ctx->pc == 0x22BEFCu) {
        ctx->pc = 0x22BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEF8u;
        // 0x22befc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF00u;
        goto label_22bf00;
    }
    ctx->pc = 0x22BEF8u;
    {
        const bool branch_taken_0x22bef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BEF8u;
        // 0x22befc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bef8) {
            ctx->pc = 0x22BF08u;
            goto label_22bf08;
        }
    }
    ctx->pc = 0x22BF00u;
label_22bf00:
    // 0x22bf00: 0xc08be78  jal         func_22F9E0
label_22bf04:
    if (ctx->pc == 0x22BF04u) {
        ctx->pc = 0x22BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF00u;
        // 0x22bf04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF08u;
        goto label_22bf08;
    }
    ctx->pc = 0x22BF00u;
    SET_GPR_U32(ctx, 31, 0x22BF08u);
    ctx->pc = 0x22BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF00u;
    // 0x22bf04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22BF00u, 0x22BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF08u;
label_22bf08:
    // 0x22bf08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bf0c:
    // 0x22bf0c: 0x3c100400  lui         $s0, 0x400
    ctx->pc = 0x22bf0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1024 << 16));
label_22bf10:
    // 0x22bf10: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x22bf10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_22bf14:
    // 0x22bf14: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x22bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_22bf18:
    // 0x22bf18: 0x40f809  jalr        $v0
label_22bf1c:
    if (ctx->pc == 0x22BF1Cu) {
        ctx->pc = 0x22BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF18u;
        // 0x22bf1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF20u;
        goto label_22bf20;
    }
    ctx->pc = 0x22BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BF20u);
        ctx->pc = 0x22BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF18u;
        // 0x22bf1c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BF18u, 0x22BF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BF20u;
label_22bf20:
    // 0x22bf20: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x22bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_22bf24:
    // 0x22bf24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_22bf28:
    if (ctx->pc == 0x22BF28u) {
        ctx->pc = 0x22BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF24u;
        // 0x22bf28: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF2Cu;
        goto label_22bf2c;
    }
    ctx->pc = 0x22BF24u;
    {
        const bool branch_taken_0x22bf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF24u;
        // 0x22bf28: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf24) {
            ctx->pc = 0x22BF38u;
            goto label_22bf38;
        }
    }
    ctx->pc = 0x22BF2Cu;
label_22bf2c:
    // 0x22bf2c: 0xc089a80  jal         func_226A00
label_22bf30:
    if (ctx->pc == 0x22BF30u) {
        ctx->pc = 0x22BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF2Cu;
        // 0x22bf30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF34u;
        goto label_22bf34;
    }
    ctx->pc = 0x22BF2Cu;
    SET_GPR_U32(ctx, 31, 0x22BF34u);
    ctx->pc = 0x22BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF2Cu;
    // 0x22bf30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A00u, 0x22BF2Cu, 0x22BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF34u;
label_22bf34:
    // 0x22bf34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22bf38:
    // 0x22bf38: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x22bf38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bf3c:
    // 0x22bf3c: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x22bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_22bf40:
    // 0x22bf40: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x22bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_22bf44:
    // 0x22bf44: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x22bf44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_22bf48:
    // 0x22bf48: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x22bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_22bf4c:
    // 0x22bf4c: 0x40f809  jalr        $v0
label_22bf50:
    if (ctx->pc == 0x22BF50u) {
        ctx->pc = 0x22BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF4Cu;
        // 0x22bf50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF54u;
        goto label_22bf54;
    }
    ctx->pc = 0x22BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BF54u);
        ctx->pc = 0x22BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF4Cu;
        // 0x22bf50: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BF4Cu, 0x22BF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BF54u;
label_22bf54:
    // 0x22bf54: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_22bf58:
    if (ctx->pc == 0x22BF58u) {
        ctx->pc = 0x22BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF54u;
        // 0x22bf58: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF5Cu;
        goto label_22bf5c;
    }
    ctx->pc = 0x22BF54u;
    {
        const bool branch_taken_0x22bf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf54) {
            ctx->pc = 0x22BF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BF54u;
            // 0x22bf58: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BF5Cu;
label_22bf5c:
    // 0x22bf5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bf60:
    // 0x22bf60: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x22bf60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_22bf64:
    // 0x22bf64: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x22bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_22bf68:
    // 0x22bf68: 0x40f809  jalr        $v0
label_22bf6c:
    if (ctx->pc == 0x22BF6Cu) {
        ctx->pc = 0x22BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF68u;
        // 0x22bf6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF70u;
        goto label_22bf70;
    }
    ctx->pc = 0x22BF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BF70u);
        ctx->pc = 0x22BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF68u;
        // 0x22bf6c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BF68u, 0x22BF70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BF70u;
label_22bf70:
    // 0x22bf70: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x22bf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_22bf74:
    // 0x22bf74: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22bf78:
    if (ctx->pc == 0x22BF78u) {
        ctx->pc = 0x22BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF74u;
        // 0x22bf78: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF7Cu;
        goto label_22bf7c;
    }
    ctx->pc = 0x22BF74u;
    {
        const bool branch_taken_0x22bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF74u;
        // 0x22bf78: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf74) {
            ctx->pc = 0x22BF94u;
            goto label_22bf94;
        }
    }
    ctx->pc = 0x22BF7Cu;
label_22bf7c:
    // 0x22bf7c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bf7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bf80:
    // 0x22bf80: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bf84:
    // 0x22bf84: 0x40f809  jalr        $v0
label_22bf88:
    if (ctx->pc == 0x22BF88u) {
        ctx->pc = 0x22BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF84u;
        // 0x22bf88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BF8Cu;
        goto label_22bf8c;
    }
    ctx->pc = 0x22BF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BF8Cu);
        ctx->pc = 0x22BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF84u;
        // 0x22bf88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BF84u, 0x22BF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BF8Cu;
label_22bf8c:
    // 0x22bf8c: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22bf8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22bf90:
    // 0x22bf90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22bf94:
    // 0x22bf94: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22bf94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22bf98:
    // 0x22bf98: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22bf9c:
    // 0x22bf9c: 0x40f809  jalr        $v0
label_22bfa0:
    if (ctx->pc == 0x22BFA0u) {
        ctx->pc = 0x22BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF9Cu;
        // 0x22bfa0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFA4u;
        goto label_22bfa4;
    }
    ctx->pc = 0x22BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22BFA4u);
        ctx->pc = 0x22BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF9Cu;
        // 0x22bfa0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BF9Cu, 0x22BFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22BFA4u;
label_22bfa4:
    // 0x22bfa4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x22bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22bfa8:
    // 0x22bfa8: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x22bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_22bfac:
    // 0x22bfac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x22bfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_22bfb0:
    // 0x22bfb0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x22bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_22bfb4:
    // 0x22bfb4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x22bfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22bfb8:
    // 0x22bfb8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x22bfb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_22bfbc:
    // 0x22bfbc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x22bfbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22bfc0:
    // 0x22bfc0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x22bfc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22bfc4:
    // 0x22bfc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22bfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22bfc8:
    // 0x22bfc8: 0x3e00008  jr          $ra
label_22bfcc:
    if (ctx->pc == 0x22BFCCu) {
        ctx->pc = 0x22BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFC8u;
        // 0x22bfcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22BFD0u;
        goto label_fallthrough_0x22bfc8;
    }
    ctx->pc = 0x22BFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFC8u;
        // 0x22bfcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22bfc8:
    ctx->pc = 0x22BFD0u;
}

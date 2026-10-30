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

// Function: sub_001959A8
// Address: 0x1959a8 - 0x195be0
void sub_001959A8_0x1959a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001959A8_0x1959a8");
#endif

    switch (ctx->pc) {
        case 0x1959a8u: goto label_1959a8;
        case 0x1959acu: goto label_1959ac;
        case 0x1959b0u: goto label_1959b0;
        case 0x1959b4u: goto label_1959b4;
        case 0x1959b8u: goto label_1959b8;
        case 0x1959bcu: goto label_1959bc;
        case 0x1959c0u: goto label_1959c0;
        case 0x1959c4u: goto label_1959c4;
        case 0x1959c8u: goto label_1959c8;
        case 0x1959ccu: goto label_1959cc;
        case 0x1959d0u: goto label_1959d0;
        case 0x1959d4u: goto label_1959d4;
        case 0x1959d8u: goto label_1959d8;
        case 0x1959dcu: goto label_1959dc;
        case 0x1959e0u: goto label_1959e0;
        case 0x1959e4u: goto label_1959e4;
        case 0x1959e8u: goto label_1959e8;
        case 0x1959ecu: goto label_1959ec;
        case 0x1959f0u: goto label_1959f0;
        case 0x1959f4u: goto label_1959f4;
        case 0x1959f8u: goto label_1959f8;
        case 0x1959fcu: goto label_1959fc;
        case 0x195a00u: goto label_195a00;
        case 0x195a04u: goto label_195a04;
        case 0x195a08u: goto label_195a08;
        case 0x195a0cu: goto label_195a0c;
        case 0x195a10u: goto label_195a10;
        case 0x195a14u: goto label_195a14;
        case 0x195a18u: goto label_195a18;
        case 0x195a1cu: goto label_195a1c;
        case 0x195a20u: goto label_195a20;
        case 0x195a24u: goto label_195a24;
        case 0x195a28u: goto label_195a28;
        case 0x195a2cu: goto label_195a2c;
        case 0x195a30u: goto label_195a30;
        case 0x195a34u: goto label_195a34;
        case 0x195a38u: goto label_195a38;
        case 0x195a3cu: goto label_195a3c;
        case 0x195a40u: goto label_195a40;
        case 0x195a44u: goto label_195a44;
        case 0x195a48u: goto label_195a48;
        case 0x195a4cu: goto label_195a4c;
        case 0x195a50u: goto label_195a50;
        case 0x195a54u: goto label_195a54;
        case 0x195a58u: goto label_195a58;
        case 0x195a5cu: goto label_195a5c;
        case 0x195a60u: goto label_195a60;
        case 0x195a64u: goto label_195a64;
        case 0x195a68u: goto label_195a68;
        case 0x195a6cu: goto label_195a6c;
        case 0x195a70u: goto label_195a70;
        case 0x195a74u: goto label_195a74;
        case 0x195a78u: goto label_195a78;
        case 0x195a7cu: goto label_195a7c;
        case 0x195a80u: goto label_195a80;
        case 0x195a84u: goto label_195a84;
        case 0x195a88u: goto label_195a88;
        case 0x195a8cu: goto label_195a8c;
        case 0x195a90u: goto label_195a90;
        case 0x195a94u: goto label_195a94;
        case 0x195a98u: goto label_195a98;
        case 0x195a9cu: goto label_195a9c;
        case 0x195aa0u: goto label_195aa0;
        case 0x195aa4u: goto label_195aa4;
        case 0x195aa8u: goto label_195aa8;
        case 0x195aacu: goto label_195aac;
        case 0x195ab0u: goto label_195ab0;
        case 0x195ab4u: goto label_195ab4;
        case 0x195ab8u: goto label_195ab8;
        case 0x195abcu: goto label_195abc;
        case 0x195ac0u: goto label_195ac0;
        case 0x195ac4u: goto label_195ac4;
        case 0x195ac8u: goto label_195ac8;
        case 0x195accu: goto label_195acc;
        case 0x195ad0u: goto label_195ad0;
        case 0x195ad4u: goto label_195ad4;
        case 0x195ad8u: goto label_195ad8;
        case 0x195adcu: goto label_195adc;
        case 0x195ae0u: goto label_195ae0;
        case 0x195ae4u: goto label_195ae4;
        case 0x195ae8u: goto label_195ae8;
        case 0x195aecu: goto label_195aec;
        case 0x195af0u: goto label_195af0;
        case 0x195af4u: goto label_195af4;
        case 0x195af8u: goto label_195af8;
        case 0x195afcu: goto label_195afc;
        case 0x195b00u: goto label_195b00;
        case 0x195b04u: goto label_195b04;
        case 0x195b08u: goto label_195b08;
        case 0x195b0cu: goto label_195b0c;
        case 0x195b10u: goto label_195b10;
        case 0x195b14u: goto label_195b14;
        case 0x195b18u: goto label_195b18;
        case 0x195b1cu: goto label_195b1c;
        case 0x195b20u: goto label_195b20;
        case 0x195b24u: goto label_195b24;
        case 0x195b28u: goto label_195b28;
        case 0x195b2cu: goto label_195b2c;
        case 0x195b30u: goto label_195b30;
        case 0x195b34u: goto label_195b34;
        case 0x195b38u: goto label_195b38;
        case 0x195b3cu: goto label_195b3c;
        case 0x195b40u: goto label_195b40;
        case 0x195b44u: goto label_195b44;
        case 0x195b48u: goto label_195b48;
        case 0x195b4cu: goto label_195b4c;
        case 0x195b50u: goto label_195b50;
        case 0x195b54u: goto label_195b54;
        case 0x195b58u: goto label_195b58;
        case 0x195b5cu: goto label_195b5c;
        case 0x195b60u: goto label_195b60;
        case 0x195b64u: goto label_195b64;
        case 0x195b68u: goto label_195b68;
        case 0x195b6cu: goto label_195b6c;
        case 0x195b70u: goto label_195b70;
        case 0x195b74u: goto label_195b74;
        case 0x195b78u: goto label_195b78;
        case 0x195b7cu: goto label_195b7c;
        case 0x195b80u: goto label_195b80;
        case 0x195b84u: goto label_195b84;
        case 0x195b88u: goto label_195b88;
        case 0x195b8cu: goto label_195b8c;
        case 0x195b90u: goto label_195b90;
        case 0x195b94u: goto label_195b94;
        case 0x195b98u: goto label_195b98;
        case 0x195b9cu: goto label_195b9c;
        case 0x195ba0u: goto label_195ba0;
        case 0x195ba4u: goto label_195ba4;
        case 0x195ba8u: goto label_195ba8;
        case 0x195bacu: goto label_195bac;
        case 0x195bb0u: goto label_195bb0;
        case 0x195bb4u: goto label_195bb4;
        case 0x195bb8u: goto label_195bb8;
        case 0x195bbcu: goto label_195bbc;
        case 0x195bc0u: goto label_195bc0;
        case 0x195bc4u: goto label_195bc4;
        case 0x195bc8u: goto label_195bc8;
        case 0x195bccu: goto label_195bcc;
        case 0x195bd0u: goto label_195bd0;
        case 0x195bd4u: goto label_195bd4;
        case 0x195bd8u: goto label_195bd8;
        case 0x195bdcu: goto label_195bdc;
        default: break;
    }

    ctx->pc = 0x1959a8u;

label_1959a8:
    // 0x1959a8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1959ac:
    // 0x1959ac: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1959acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_1959b0:
    // 0x1959b0: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1959b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_1959b4:
    // 0x1959b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1959b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1959b8:
    // 0x1959b8: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1959b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_1959bc:
    // 0x1959bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1959bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1959c0:
    // 0x1959c0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1959c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_1959c4:
    // 0x1959c4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1959c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1959c8:
    // 0x1959c8: 0x84660068  lh          $a2, 0x68($v1)
    ctx->pc = 0x1959c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1959cc:
    // 0x1959cc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1959ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1959d0:
    // 0x1959d0: 0x40f809  jalr        $v0
label_1959d4:
    if (ctx->pc == 0x1959D4u) {
        ctx->pc = 0x1959D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959D0u;
        // 0x1959d4: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959D8u;
        goto label_1959d8;
    }
    ctx->pc = 0x1959D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1959D8u);
        ctx->pc = 0x1959D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959D0u;
        // 0x1959d4: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1959D0u, 0x1959D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1959D8u;
label_1959d8:
    // 0x1959d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1959d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1959dc:
    // 0x1959dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1959dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1959e0:
    // 0x1959e0: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1959e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1959e4:
    // 0x1959e4: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1959e8:
    // 0x1959e8: 0x40f809  jalr        $v0
label_1959ec:
    if (ctx->pc == 0x1959ECu) {
        ctx->pc = 0x1959ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959E8u;
        // 0x1959ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959F0u;
        goto label_1959f0;
    }
    ctx->pc = 0x1959E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1959F0u);
        ctx->pc = 0x1959ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959E8u;
        // 0x1959ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1959E8u, 0x1959F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1959F0u;
label_1959f0:
    // 0x1959f0: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
label_1959f4:
    if (ctx->pc == 0x1959F4u) {
        ctx->pc = 0x1959F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959F0u;
        // 0x1959f4: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959F8u;
        goto label_1959f8;
    }
    ctx->pc = 0x1959F0u;
    {
        const bool branch_taken_0x1959f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1959f0) {
            ctx->pc = 0x1959F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1959F0u;
            // 0x1959f4: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195BC8u;
            goto label_195bc8;
        }
    }
    ctx->pc = 0x1959F8u;
label_1959f8:
    // 0x1959f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1959f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1959fc:
    // 0x1959fc: 0xc065f8a  jal         func_197E28
label_195a00:
    if (ctx->pc == 0x195A00u) {
        ctx->pc = 0x195A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959FCu;
        // 0x195a00: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A04u;
        goto label_195a04;
    }
    ctx->pc = 0x1959FCu;
    SET_GPR_U32(ctx, 31, 0x195A04u);
    ctx->pc = 0x195A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959FCu;
    // 0x195a00: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197E28u, 0x1959FCu, 0x195A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A04u;
label_195a04:
    // 0x195a04: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x195a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_195a08:
    // 0x195a08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_195a0c:
    // 0x195a0c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x195a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_195a10:
    // 0x195a10: 0x8c44ad18  lw          $a0, -0x52E8($v0)
    ctx->pc = 0x195a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946072)));
label_195a14:
    // 0x195a14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x195a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195a18:
    // 0x195a18: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x195a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_195a1c:
    // 0x195a1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x195a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_195a20:
    // 0x195a20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x195a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_195a24:
    // 0x195a24: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x195a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_195a28:
    // 0x195a28: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x195a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_195a2c:
    // 0x195a2c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x195a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_195a30:
    // 0x195a30: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_195a34:
    // 0x195a34: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x195a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_195a38:
    // 0x195a38: 0x46090201  sub.s       $f8, $f0, $f9
    ctx->pc = 0x195a38u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_195a3c:
    // 0x195a3c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x195a3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195a40:
    // 0x195a40: 0x0  nop
    ctx->pc = 0x195a40u;
    // NOP
label_195a44:
    // 0x195a44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_195a48:
    // 0x195a48: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x195a48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_195a4c:
    // 0x195a4c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x195a4cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195a50:
    // 0x195a50: 0x0  nop
    ctx->pc = 0x195a50u;
    // NOP
label_195a54:
    // 0x195a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_195a58:
    // 0x195a58: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x195a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_195a5c:
    // 0x195a5c: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x195a5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_195a60:
    // 0x195a60: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x195a60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_195a64:
    // 0x195a64: 0x0  nop
    ctx->pc = 0x195a64u;
    // NOP
label_195a68:
    // 0x195a68: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x195a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_195a6c:
    // 0x195a6c: 0x0  nop
    ctx->pc = 0x195a6cu;
    // NOP
label_195a70:
    // 0x195a70: 0x0  nop
    ctx->pc = 0x195a70u;
    // NOP
label_195a74:
    // 0x195a74: 0x46011143  div.s       $f5, $f2, $f1
    ctx->pc = 0x195a74u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_195a78:
    // 0x195a78: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x195a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_195a7c:
    // 0x195a7c: 0x0  nop
    ctx->pc = 0x195a7cu;
    // NOP
label_195a80:
    // 0x195a80: 0x0  nop
    ctx->pc = 0x195a80u;
    // NOP
label_195a84:
    // 0x195a84: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x195a84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_195a88:
    // 0x195a88: 0x84023  negu        $t0, $t0
    ctx->pc = 0x195a88u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_195a8c:
    // 0x195a8c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x195a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_195a90:
    // 0x195a90: 0x0  nop
    ctx->pc = 0x195a90u;
    // NOP
label_195a94:
    // 0x195a94: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x195a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_195a98:
    // 0x195a98: 0x73823  negu        $a3, $a3
    ctx->pc = 0x195a98u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_195a9c:
    // 0x195a9c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x195a9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_195aa0:
    // 0x195aa0: 0x0  nop
    ctx->pc = 0x195aa0u;
    // NOP
label_195aa4:
    // 0x195aa4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x195aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_195aa8:
    // 0x195aa8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x195aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_195aac:
    // 0x195aac: 0x0  nop
    ctx->pc = 0x195aacu;
    // NOP
label_195ab0:
    // 0x195ab0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x195ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_195ab4:
    // 0x195ab4: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x195ab4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_195ab8:
    // 0x195ab8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x195ab8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_195abc:
    // 0x195abc: 0x0  nop
    ctx->pc = 0x195abcu;
    // NOP
label_195ac0:
    // 0x195ac0: 0xe4c60020  swc1        $f6, 0x20($a2)
    ctx->pc = 0x195ac0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_195ac4:
    // 0x195ac4: 0xe4c40024  swc1        $f4, 0x24($a2)
    ctx->pc = 0x195ac4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_195ac8:
    // 0x195ac8: 0xe4c30028  swc1        $f3, 0x28($a2)
    ctx->pc = 0x195ac8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_195acc:
    // 0x195acc: 0xe4c7002c  swc1        $f7, 0x2C($a2)
    ctx->pc = 0x195accu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_195ad0:
    // 0x195ad0: 0xe4c80008  swc1        $f8, 0x8($a2)
    ctx->pc = 0x195ad0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_195ad4:
    // 0x195ad4: 0xe4c90018  swc1        $f9, 0x18($a2)
    ctx->pc = 0x195ad4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_195ad8:
    // 0x195ad8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x195ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_195adc:
    // 0x195adc: 0x521fff8  bgez        $t1, . + 4 + (-0x8 << 2)
label_195ae0:
    if (ctx->pc == 0x195AE0u) {
        ctx->pc = 0x195AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ADCu;
        // 0x195ae0: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195AE4u;
        goto label_195ae4;
    }
    ctx->pc = 0x195ADCu;
    {
        const bool branch_taken_0x195adc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x195AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ADCu;
        // 0x195ae0: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195adc) {
            ctx->pc = 0x195AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195ac0;
        }
    }
    ctx->pc = 0x195AE4u;
label_195ae4:
    // 0x195ae4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x195ae4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195ae8:
    // 0x195ae8: 0x0  nop
    ctx->pc = 0x195ae8u;
    // NOP
label_195aec:
    // 0x195aec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_195af0:
    // 0x195af0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x195af0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_195af4:
    // 0x195af4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x195af4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195af8:
    // 0x195af8: 0x0  nop
    ctx->pc = 0x195af8u;
    // NOP
label_195afc:
    // 0x195afc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_195b00:
    // 0x195b00: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x195b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_195b04:
    // 0x195b04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195b08:
    // 0x195b08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x195b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195b0c:
    // 0x195b0c: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x195b0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_195b10:
    // 0x195b10: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x195b10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_195b14:
    // 0x195b14: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x195b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_195b18:
    // 0x195b18: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x195b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_195b1c:
    // 0x195b1c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x195b1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_195b20:
    // 0x195b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195b24:
    // 0x195b24: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x195b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_195b28:
    // 0x195b28: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x195b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_195b2c:
    // 0x195b2c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x195b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_195b30:
    // 0x195b30: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x195b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_195b34:
    // 0x195b34: 0x40f809  jalr        $v0
label_195b38:
    if (ctx->pc == 0x195B38u) {
        ctx->pc = 0x195B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B34u;
        // 0x195b38: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B3Cu;
        goto label_195b3c;
    }
    ctx->pc = 0x195B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195B3Cu);
        ctx->pc = 0x195B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B34u;
        // 0x195b38: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B34u, 0x195B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195B3Cu;
label_195b3c:
    // 0x195b3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195b40:
    // 0x195b40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x195b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_195b44:
    // 0x195b44: 0x40f809  jalr        $v0
label_195b48:
    if (ctx->pc == 0x195B48u) {
        ctx->pc = 0x195B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B44u;
        // 0x195b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B4Cu;
        goto label_195b4c;
    }
    ctx->pc = 0x195B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195B4Cu);
        ctx->pc = 0x195B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B44u;
        // 0x195b48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B44u, 0x195B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195B4Cu;
label_195b4c:
    // 0x195b4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195b50:
    // 0x195b50: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x195b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_195b54:
    // 0x195b54: 0x40f809  jalr        $v0
label_195b58:
    if (ctx->pc == 0x195B58u) {
        ctx->pc = 0x195B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B54u;
        // 0x195b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B5Cu;
        goto label_195b5c;
    }
    ctx->pc = 0x195B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195B5Cu);
        ctx->pc = 0x195B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B54u;
        // 0x195b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B54u, 0x195B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195B5Cu;
label_195b5c:
    // 0x195b5c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195b60:
    // 0x195b60: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_195b64:
    // 0x195b64: 0x40f809  jalr        $v0
label_195b68:
    if (ctx->pc == 0x195B68u) {
        ctx->pc = 0x195B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B64u;
        // 0x195b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B6Cu;
        goto label_195b6c;
    }
    ctx->pc = 0x195B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195B6Cu);
        ctx->pc = 0x195B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B64u;
        // 0x195b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B64u, 0x195B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195B6Cu;
label_195b6c:
    // 0x195b6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195b70:
    // 0x195b70: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x195b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_195b74:
    // 0x195b74: 0x40f809  jalr        $v0
label_195b78:
    if (ctx->pc == 0x195B78u) {
        ctx->pc = 0x195B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B74u;
        // 0x195b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B7Cu;
        goto label_195b7c;
    }
    ctx->pc = 0x195B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195B7Cu);
        ctx->pc = 0x195B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B74u;
        // 0x195b78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B74u, 0x195B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195B7Cu;
label_195b7c:
    // 0x195b7c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x195b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_195b80:
    // 0x195b80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x195b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195b84:
    // 0x195b84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x195b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_195b88:
    // 0x195b88: 0x40f809  jalr        $v0
label_195b8c:
    if (ctx->pc == 0x195B8Cu) {
        ctx->pc = 0x195B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B88u;
        // 0x195b8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195B90u;
        goto label_195b90;
    }
    ctx->pc = 0x195B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195B90u);
        ctx->pc = 0x195B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B88u;
        // 0x195b8c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B88u, 0x195B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195B90u;
label_195b90:
    // 0x195b90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x195b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_195b94:
    // 0x195b94: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x195b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_195b98:
    // 0x195b98: 0x40f809  jalr        $v0
label_195b9c:
    if (ctx->pc == 0x195B9Cu) {
        ctx->pc = 0x195B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B98u;
        // 0x195b9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BA0u;
        goto label_195ba0;
    }
    ctx->pc = 0x195B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195BA0u);
        ctx->pc = 0x195B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B98u;
        // 0x195b9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B98u, 0x195BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195BA0u;
label_195ba0:
    // 0x195ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x195ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195ba4:
    // 0x195ba4: 0xc065fb0  jal         func_197EC0
label_195ba8:
    if (ctx->pc == 0x195BA8u) {
        ctx->pc = 0x195BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BA4u;
        // 0x195ba8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BACu;
        goto label_195bac;
    }
    ctx->pc = 0x195BA4u;
    SET_GPR_U32(ctx, 31, 0x195BACu);
    ctx->pc = 0x195BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195BA4u;
    // 0x195ba8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197EC0u, 0x195BA4u, 0x195BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BACu;
label_195bac:
    // 0x195bac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_195bb0:
    // 0x195bb0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x195bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_195bb4:
    // 0x195bb4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x195bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_195bb8:
    // 0x195bb8: 0x40f809  jalr        $v0
label_195bbc:
    if (ctx->pc == 0x195BBCu) {
        ctx->pc = 0x195BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BB8u;
        // 0x195bbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BC0u;
        goto label_195bc0;
    }
    ctx->pc = 0x195BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195BC0u);
        ctx->pc = 0x195BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BB8u;
        // 0x195bbc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195BB8u, 0x195BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195BC0u;
label_195bc0:
    // 0x195bc0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x195bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_195bc4:
    // 0x195bc4: 0x0  nop
    ctx->pc = 0x195bc4u;
    // NOP
label_195bc8:
    // 0x195bc8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x195bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_195bcc:
    // 0x195bcc: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x195bccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_195bd0:
    // 0x195bd0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x195bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_195bd4:
    // 0x195bd4: 0x3e00008  jr          $ra
label_195bd8:
    if (ctx->pc == 0x195BD8u) {
        ctx->pc = 0x195BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BD4u;
        // 0x195bd8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195BDCu;
        goto label_195bdc;
    }
    ctx->pc = 0x195BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195BD4u;
        // 0x195bd8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195BDCu;
label_195bdc:
    // 0x195bdc: 0x0  nop
    ctx->pc = 0x195bdcu;
    // NOP
    ctx->pc = 0x195be0u;
}

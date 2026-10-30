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

// Function: sub_0019C638
// Address: 0x19c638 - 0x19c740
void sub_0019C638_0x19c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C638_0x19c638");
#endif

    switch (ctx->pc) {
        case 0x19c638u: goto label_19c638;
        case 0x19c63cu: goto label_19c63c;
        case 0x19c640u: goto label_19c640;
        case 0x19c644u: goto label_19c644;
        case 0x19c648u: goto label_19c648;
        case 0x19c64cu: goto label_19c64c;
        case 0x19c650u: goto label_19c650;
        case 0x19c654u: goto label_19c654;
        case 0x19c658u: goto label_19c658;
        case 0x19c65cu: goto label_19c65c;
        case 0x19c660u: goto label_19c660;
        case 0x19c664u: goto label_19c664;
        case 0x19c668u: goto label_19c668;
        case 0x19c66cu: goto label_19c66c;
        case 0x19c670u: goto label_19c670;
        case 0x19c674u: goto label_19c674;
        case 0x19c678u: goto label_19c678;
        case 0x19c67cu: goto label_19c67c;
        case 0x19c680u: goto label_19c680;
        case 0x19c684u: goto label_19c684;
        case 0x19c688u: goto label_19c688;
        case 0x19c68cu: goto label_19c68c;
        case 0x19c690u: goto label_19c690;
        case 0x19c694u: goto label_19c694;
        case 0x19c698u: goto label_19c698;
        case 0x19c69cu: goto label_19c69c;
        case 0x19c6a0u: goto label_19c6a0;
        case 0x19c6a4u: goto label_19c6a4;
        case 0x19c6a8u: goto label_19c6a8;
        case 0x19c6acu: goto label_19c6ac;
        case 0x19c6b0u: goto label_19c6b0;
        case 0x19c6b4u: goto label_19c6b4;
        case 0x19c6b8u: goto label_19c6b8;
        case 0x19c6bcu: goto label_19c6bc;
        case 0x19c6c0u: goto label_19c6c0;
        case 0x19c6c4u: goto label_19c6c4;
        case 0x19c6c8u: goto label_19c6c8;
        case 0x19c6ccu: goto label_19c6cc;
        case 0x19c6d0u: goto label_19c6d0;
        case 0x19c6d4u: goto label_19c6d4;
        case 0x19c6d8u: goto label_19c6d8;
        case 0x19c6dcu: goto label_19c6dc;
        case 0x19c6e0u: goto label_19c6e0;
        case 0x19c6e4u: goto label_19c6e4;
        case 0x19c6e8u: goto label_19c6e8;
        case 0x19c6ecu: goto label_19c6ec;
        case 0x19c6f0u: goto label_19c6f0;
        case 0x19c6f4u: goto label_19c6f4;
        case 0x19c6f8u: goto label_19c6f8;
        case 0x19c6fcu: goto label_19c6fc;
        case 0x19c700u: goto label_19c700;
        case 0x19c704u: goto label_19c704;
        case 0x19c708u: goto label_19c708;
        case 0x19c70cu: goto label_19c70c;
        case 0x19c710u: goto label_19c710;
        case 0x19c714u: goto label_19c714;
        case 0x19c718u: goto label_19c718;
        case 0x19c71cu: goto label_19c71c;
        case 0x19c720u: goto label_19c720;
        case 0x19c724u: goto label_19c724;
        case 0x19c728u: goto label_19c728;
        case 0x19c72cu: goto label_19c72c;
        case 0x19c730u: goto label_19c730;
        case 0x19c734u: goto label_19c734;
        case 0x19c738u: goto label_19c738;
        case 0x19c73cu: goto label_19c73c;
        default: break;
    }

    ctx->pc = 0x19c638u;

label_19c638:
    // 0x19c638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19c63c:
    // 0x19c63c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_19c640:
    // 0x19c640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19c644:
    // 0x19c644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c648:
    // 0x19c648: 0x8e0232f0  lw          $v0, 0x32F0($s0)
    ctx->pc = 0x19c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13040)));
label_19c64c:
    // 0x19c64c: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_19c650:
    if (ctx->pc == 0x19C650u) {
        ctx->pc = 0x19C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C64Cu;
        // 0x19c650: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C654u;
        goto label_19c654;
    }
    ctx->pc = 0x19C64Cu;
    {
        const bool branch_taken_0x19c64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c64c) {
            ctx->pc = 0x19C650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C64Cu;
            // 0x19c650: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C730u;
            goto label_19c730;
        }
    }
    ctx->pc = 0x19C654u;
label_19c654:
    // 0x19c654: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x19c654u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19c658:
    // 0x19c658: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_19c65c:
    // 0x19c65c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x19c65cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_19c660:
    // 0x19c660: 0x7e0332e0  sq          $v1, 0x32E0($s0)
    ctx->pc = 0x19c660u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 13024), GPR_VEC(ctx, 3));
label_19c664:
    // 0x19c664: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x19c664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_19c668:
    // 0x19c668: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19c668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c66c:
    // 0x19c66c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x19c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c670:
    // 0x19c670: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x19c670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_19c674:
    // 0x19c674: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x19c674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_19c678:
    // 0x19c678: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x19c678u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_19c67c:
    // 0x19c67c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c680:
    // 0x19c680: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x19c680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_19c684:
    // 0x19c684: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x19c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c688:
    // 0x19c688: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19c68c:
    // 0x19c68c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19c68cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19c690:
    // 0x19c690: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x19c690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_19c694:
    // 0x19c694: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x19c694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_19c698:
    // 0x19c698: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x19c698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_19c69c:
    // 0x19c69c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x19c69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_19c6a0:
    // 0x19c6a0: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x19c6a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_19c6a4:
    // 0x19c6a4: 0xe60c0070  swc1        $f12, 0x70($s0)
    ctx->pc = 0x19c6a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_19c6a8:
    // 0x19c6a8: 0xae060074  sw          $a2, 0x74($s0)
    ctx->pc = 0x19c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 6));
label_19c6ac:
    // 0x19c6ac: 0xae070078  sw          $a3, 0x78($s0)
    ctx->pc = 0x19c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 7));
label_19c6b0:
    // 0x19c6b0: 0x8e02330c  lw          $v0, 0x330C($s0)
    ctx->pc = 0x19c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
label_19c6b4:
    // 0x19c6b4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x19c6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_19c6b8:
    // 0x19c6b8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x19c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_19c6bc:
    // 0x19c6bc: 0x60f809  jalr        $v1
label_19c6c0:
    if (ctx->pc == 0x19C6C0u) {
        ctx->pc = 0x19C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6BCu;
        // 0x19c6c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6C4u;
        goto label_19c6c4;
    }
    ctx->pc = 0x19C6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19C6C4u);
        ctx->pc = 0x19C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6BCu;
        // 0x19c6c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C6BCu, 0x19C6C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C6C4u;
label_19c6c4:
    // 0x19c6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c6c8:
    // 0x19c6c8: 0xae0032f4  sw          $zero, 0x32F4($s0)
    ctx->pc = 0x19c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13044), GPR_U32(ctx, 0));
label_19c6cc:
    // 0x19c6cc: 0xae0232f0  sw          $v0, 0x32F0($s0)
    ctx->pc = 0x19c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13040), GPR_U32(ctx, 2));
label_19c6d0:
    // 0x19c6d0: 0x8e03330c  lw          $v1, 0x330C($s0)
    ctx->pc = 0x19c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
label_19c6d4:
    // 0x19c6d4: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x19c6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_19c6d8:
    // 0x19c6d8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x19c6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_19c6dc:
    // 0x19c6dc: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x19c6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_19c6e0:
    // 0x19c6e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19c6e4:
    // 0x19c6e4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_19c6e8:
    // 0x19c6e8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_19c6ec:
    // 0x19c6ec: 0x40f809  jalr        $v0
label_19c6f0:
    if (ctx->pc == 0x19C6F0u) {
        ctx->pc = 0x19C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6ECu;
        // 0x19c6f0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6F4u;
        goto label_19c6f4;
    }
    ctx->pc = 0x19C6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C6F4u);
        ctx->pc = 0x19C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6ECu;
        // 0x19c6f0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C6ECu, 0x19C6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C6F4u;
label_19c6f4:
    // 0x19c6f4: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x19c6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
label_19c6f8:
    // 0x19c6f8: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x19c6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_19c6fc:
    // 0x19c6fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c700:
    // 0x19c700: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x19c700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
label_19c704:
    // 0x19c704: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x19c704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_19c708:
    // 0x19c708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19c708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19c70c:
    // 0x19c70c: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x19c70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
label_19c710:
    // 0x19c710: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19c710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19c714:
    // 0x19c714: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x19c714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
label_19c718:
    // 0x19c718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c71c:
    // 0x19c71c: 0xe6013300  swc1        $f1, 0x3300($s0)
    ctx->pc = 0x19c71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 13056), bits); }
label_19c720:
    // 0x19c720: 0xe6003304  swc1        $f0, 0x3304($s0)
    ctx->pc = 0x19c720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 13060), bits); }
label_19c724:
    // 0x19c724: 0xe6023308  swc1        $f2, 0x3308($s0)
    ctx->pc = 0x19c724u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 13064), bits); }
label_19c728:
    // 0x19c728: 0xe60332fc  swc1        $f3, 0x32FC($s0)
    ctx->pc = 0x19c728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 13052), bits); }
label_19c72c:
    // 0x19c72c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c730:
    // 0x19c730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c734:
    // 0x19c734: 0x3e00008  jr          $ra
label_19c738:
    if (ctx->pc == 0x19C738u) {
        ctx->pc = 0x19C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C734u;
        // 0x19c738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C73Cu;
        goto label_19c73c;
    }
    ctx->pc = 0x19C734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C734u;
        // 0x19c738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C73Cu;
label_19c73c:
    // 0x19c73c: 0x0  nop
    ctx->pc = 0x19c73cu;
    // NOP
    ctx->pc = 0x19c740u;
}

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

// Function: sub_002FB128
// Address: 0x2fb128 - 0x2fb278
void sub_002FB128_0x2fb128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB128_0x2fb128");
#endif

    switch (ctx->pc) {
        case 0x2fb168u: goto label_2fb168;
        case 0x2fb18cu: goto label_2fb18c;
        case 0x2fb19cu: goto label_2fb19c;
        case 0x2fb1c4u: goto label_2fb1c4;
        case 0x2fb1e0u: goto label_2fb1e0;
        case 0x2fb224u: goto label_2fb224;
        default: break;
    }

    ctx->pc = 0x2fb128u;

    // 0x2fb128: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fb128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fb12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb130: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2fb130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2fb134: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fb134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fb138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb13c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2fb13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2fb140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb144: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2fb144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fb148: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fb148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb14c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fb150: 0x10430041  beq         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2FB150u;
    {
        const bool branch_taken_0x2fb150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB150u;
        // 0x2fb154: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb150) {
            ctx->pc = 0x2FB258u;
            goto label_2fb258;
        }
    }
    ctx->pc = 0x2FB158u;
    // 0x2fb158: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2fb158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb15c: 0x8e3200cc  lw          $s2, 0xCC($s1)
    ctx->pc = 0x2fb15cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x2fb160: 0xc08a200  jal         func_228800
    ctx->pc = 0x2FB160u;
    SET_GPR_U32(ctx, 31, 0x2FB168u);
    ctx->pc = 0x2FB164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB160u;
    // 0x2fb164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2FB160u, 0x2FB168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB168u;
label_2fb168:
    // 0x2fb168: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2fb168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2fb16c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2fb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2fb170: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FB170u;
    {
        const bool branch_taken_0x2fb170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB170u;
        // 0x2fb174: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb170) {
            ctx->pc = 0x2FB1ACu;
            goto label_2fb1ac;
        }
    }
    ctx->pc = 0x2FB178u;
    // 0x2fb178: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2fb178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fb17c: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FB17Cu;
    {
        const bool branch_taken_0x2fb17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fb17c) {
            ctx->pc = 0x2FB180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB17Cu;
            // 0x2fb180: 0x86020018  lh          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB1C8u;
            goto label_2fb1c8;
        }
    }
    ctx->pc = 0x2FB184u;
    // 0x2fb184: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2FB184u;
    SET_GPR_U32(ctx, 31, 0x2FB18Cu);
    ctx->pc = 0x2FB188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB184u;
    // 0x2fb188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2FB184u, 0x2FB18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB18Cu;
label_2fb18c:
    // 0x2fb18c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FB18Cu;
    {
        const bool branch_taken_0x2fb18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb18c) {
            ctx->pc = 0x2FB190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB18Cu;
            // 0x2fb190: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB1B4u;
            goto label_2fb1b4;
        }
    }
    ctx->pc = 0x2FB194u;
    // 0x2fb194: 0xc08a200  jal         func_228800
    ctx->pc = 0x2FB194u;
    SET_GPR_U32(ctx, 31, 0x2FB19Cu);
    ctx->pc = 0x2FB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB194u;
    // 0x2fb198: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2FB194u, 0x2FB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB19Cu;
label_2fb19c:
    // 0x2fb19c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2fb19cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2fb1a0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2fb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2fb1a4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB1A4u;
    {
        const bool branch_taken_0x2fb1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fb1a4) {
            ctx->pc = 0x2FB1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB1A4u;
            // 0x2fb1a8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB1B4u;
            goto label_2fb1b4;
        }
    }
    ctx->pc = 0x2FB1ACu;
label_2fb1ac:
    // 0x2fb1ac: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2FB1ACu;
    {
        const bool branch_taken_0x2fb1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1ACu;
        // 0x2fb1b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1ac) {
            ctx->pc = 0x2FB258u;
            goto label_2fb258;
        }
    }
    ctx->pc = 0x2FB1B4u;
label_2fb1b4:
    // 0x2fb1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb1b8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2fb1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fb1bc: 0xc097c0a  jal         func_25F028
    ctx->pc = 0x2FB1BCu;
    SET_GPR_U32(ctx, 31, 0x2FB1C4u);
    ctx->pc = 0x2FB1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB1BCu;
    // 0x2fb1c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F028u, 0x2FB1BCu, 0x2FB1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB1C4u;
label_2fb1c4:
    // 0x2fb1c4: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x2fb1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_2fb1c8:
    // 0x2fb1c8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FB1C8u;
    {
        const bool branch_taken_0x2fb1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb1c8) {
            ctx->pc = 0x2FB1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB1C8u;
            // 0x2fb1cc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB228u;
            goto label_2fb228;
        }
    }
    ctx->pc = 0x2FB1D0u;
    // 0x2fb1d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb1d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fb1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fb1d8: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2FB1D8u;
    SET_GPR_U32(ctx, 31, 0x2FB1E0u);
    ctx->pc = 0x2FB1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB1D8u;
    // 0x2fb1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2FB1D8u, 0x2FB1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB1E0u;
label_2fb1e0:
    // 0x2fb1e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB1E0u;
    {
        const bool branch_taken_0x2fb1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb1e0) {
            ctx->pc = 0x2FB1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB1E0u;
            // 0x2fb1e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB200u;
            goto label_2fb200;
        }
    }
    ctx->pc = 0x2FB1E8u;
    // 0x2fb1e8: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x2fb1e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2fb1ec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2fb1ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2fb1f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB1F0u;
    {
        const bool branch_taken_0x2fb1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1F0u;
        // 0x2fb1f4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1f0) {
            ctx->pc = 0x2FB200u;
            goto label_2fb200;
        }
    }
    ctx->pc = 0x2FB1F8u;
    // 0x2fb1f8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2fb1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2fb1fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fb1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2fb200:
    // 0x2fb200: 0x86050018  lh          $a1, 0x18($s0)
    ctx->pc = 0x2fb200u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fb204: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2fb204u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2fb208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb20c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fb20cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2fb210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fb210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fb214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb218: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fb218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb21c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2FB21Cu;
    SET_GPR_U32(ctx, 31, 0x2FB224u);
    ctx->pc = 0x2FB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB21Cu;
    // 0x2fb220: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2FB21Cu, 0x2FB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB224u;
label_2fb224:
    // 0x2fb224: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2fb224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2fb228:
    // 0x2fb228: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB228u;
    {
        const bool branch_taken_0x2fb228 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2FB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB228u;
        // 0x2fb22c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb228) {
            ctx->pc = 0x2FB24Cu;
            goto label_2fb24c;
        }
    }
    ctx->pc = 0x2FB230u;
    // 0x2fb230: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB230u;
    {
        const bool branch_taken_0x2fb230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb230) {
            ctx->pc = 0x2FB234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB230u;
            // 0x2fb234: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB254u;
            goto label_2fb254;
        }
    }
    ctx->pc = 0x2FB238u;
    // 0x2fb238: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2fb238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fb23c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB23Cu;
    {
        const bool branch_taken_0x2fb23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB23Cu;
        // 0x2fb240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb23c) {
            ctx->pc = 0x2FB250u;
            goto label_2fb250;
        }
    }
    ctx->pc = 0x2FB244u;
    // 0x2fb244: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB244u;
    {
        const bool branch_taken_0x2fb244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB244u;
        // 0x2fb248: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb244) {
            ctx->pc = 0x2FB254u;
            goto label_2fb254;
        }
    }
    ctx->pc = 0x2FB24Cu;
label_2fb24c:
    // 0x2fb24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb250:
    // 0x2fb250: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2fb250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2fb254:
    // 0x2fb254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb258:
    // 0x2fb258: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2fb258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb25c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fb25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb260: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2fb260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb268: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2fb268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb26c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB26Cu;
        // 0x2fb270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB274u;
    // 0x2fb274: 0x0  nop
    ctx->pc = 0x2fb274u;
    // NOP
    ctx->pc = 0x2fb278u;
}

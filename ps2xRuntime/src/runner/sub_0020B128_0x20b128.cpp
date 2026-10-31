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

// Function: sub_0020B128
// Address: 0x20b128 - 0x20b208
void sub_0020B128_0x20b128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B128_0x20b128");
#endif

    switch (ctx->pc) {
        case 0x20b128u: goto label_20b128;
        case 0x20b12cu: goto label_20b12c;
        case 0x20b130u: goto label_20b130;
        case 0x20b134u: goto label_20b134;
        case 0x20b138u: goto label_20b138;
        case 0x20b13cu: goto label_20b13c;
        case 0x20b140u: goto label_20b140;
        case 0x20b144u: goto label_20b144;
        case 0x20b148u: goto label_20b148;
        case 0x20b14cu: goto label_20b14c;
        case 0x20b150u: goto label_20b150;
        case 0x20b154u: goto label_20b154;
        case 0x20b158u: goto label_20b158;
        case 0x20b15cu: goto label_20b15c;
        case 0x20b160u: goto label_20b160;
        case 0x20b164u: goto label_20b164;
        case 0x20b168u: goto label_20b168;
        case 0x20b16cu: goto label_20b16c;
        case 0x20b170u: goto label_20b170;
        case 0x20b174u: goto label_20b174;
        case 0x20b178u: goto label_20b178;
        case 0x20b17cu: goto label_20b17c;
        case 0x20b180u: goto label_20b180;
        case 0x20b184u: goto label_20b184;
        case 0x20b188u: goto label_20b188;
        case 0x20b18cu: goto label_20b18c;
        case 0x20b190u: goto label_20b190;
        case 0x20b194u: goto label_20b194;
        case 0x20b198u: goto label_20b198;
        case 0x20b19cu: goto label_20b19c;
        case 0x20b1a0u: goto label_20b1a0;
        case 0x20b1a4u: goto label_20b1a4;
        case 0x20b1a8u: goto label_20b1a8;
        case 0x20b1acu: goto label_20b1ac;
        case 0x20b1b0u: goto label_20b1b0;
        case 0x20b1b4u: goto label_20b1b4;
        case 0x20b1b8u: goto label_20b1b8;
        case 0x20b1bcu: goto label_20b1bc;
        case 0x20b1c0u: goto label_20b1c0;
        case 0x20b1c4u: goto label_20b1c4;
        case 0x20b1c8u: goto label_20b1c8;
        case 0x20b1ccu: goto label_20b1cc;
        case 0x20b1d0u: goto label_20b1d0;
        case 0x20b1d4u: goto label_20b1d4;
        case 0x20b1d8u: goto label_20b1d8;
        case 0x20b1dcu: goto label_20b1dc;
        case 0x20b1e0u: goto label_20b1e0;
        case 0x20b1e4u: goto label_20b1e4;
        case 0x20b1e8u: goto label_20b1e8;
        case 0x20b1ecu: goto label_20b1ec;
        case 0x20b1f0u: goto label_20b1f0;
        case 0x20b1f4u: goto label_20b1f4;
        case 0x20b1f8u: goto label_20b1f8;
        case 0x20b1fcu: goto label_20b1fc;
        case 0x20b200u: goto label_20b200;
        case 0x20b204u: goto label_20b204;
        default: break;
    }

    ctx->pc = 0x20b128u;

label_20b128:
    // 0x20b128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20b12c:
    // 0x20b12c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20b130:
    // 0x20b130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20b134:
    // 0x20b134: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20b134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20b138:
    // 0x20b138: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20b138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20b13c:
    // 0x20b13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b140:
    // 0x20b140: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20b140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20b144:
    // 0x20b144: 0x2442e580  addiu       $v0, $v0, -0x1A80
    ctx->pc = 0x20b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960512));
label_20b148:
    // 0x20b148: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20b148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20b14c:
    // 0x20b14c: 0x2463e5a8  addiu       $v1, $v1, -0x1A58
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960552));
label_20b150:
    // 0x20b150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b154:
    // 0x20b154: 0x24c6e5d8  addiu       $a2, $a2, -0x1A28
    ctx->pc = 0x20b154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960600));
label_20b158:
    // 0x20b158: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x20b158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_20b15c:
    // 0x20b15c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20b15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20b160:
    // 0x20b160: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x20b160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20b164:
    // 0x20b164: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x20b164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_20b168:
    // 0x20b168: 0xc082d7a  jal         func_20B5E8
label_20b16c:
    if (ctx->pc == 0x20B16Cu) {
        ctx->pc = 0x20B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B168u;
        // 0x20b16c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B170u;
        goto label_20b170;
    }
    ctx->pc = 0x20B168u;
    SET_GPR_U32(ctx, 31, 0x20B170u);
    ctx->pc = 0x20B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B168u;
    // 0x20b16c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B5E8u, 0x20B168u, 0x20B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B170u;
label_20b170:
    // 0x20b170: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20b170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20b174:
    // 0x20b174: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_20b178:
    // 0x20b178: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x20b178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_20b17c:
    // 0x20b17c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b180:
    // 0x20b180: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20b184:
    if (ctx->pc == 0x20B184u) {
        ctx->pc = 0x20B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B180u;
        // 0x20b184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B188u;
        goto label_20b188;
    }
    ctx->pc = 0x20B180u;
    {
        const bool branch_taken_0x20b180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B180u;
        // 0x20b184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b180) {
            ctx->pc = 0x20B1B0u;
            goto label_20b1b0;
        }
    }
    ctx->pc = 0x20B188u;
label_20b188:
    // 0x20b188: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b18c:
    // 0x20b18c: 0xc1376d6  jal         func_4DDB58
label_20b190:
    if (ctx->pc == 0x20B190u) {
        ctx->pc = 0x20B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B18Cu;
        // 0x20b190: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B194u;
        goto label_20b194;
    }
    ctx->pc = 0x20B18Cu;
    SET_GPR_U32(ctx, 31, 0x20B194u);
    ctx->pc = 0x20B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B18Cu;
    // 0x20b190: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x20B18Cu, 0x20B194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B194u;
label_20b194:
    // 0x20b194: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b198:
    // 0x20b198: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x20b198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_20b19c:
    // 0x20b19c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b1a0:
    // 0x20b1a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20b1a4:
    // 0x20b1a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b1a8:
    // 0x20b1a8: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x20b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_20b1ac:
    // 0x20b1ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20b1b0:
    // 0x20b1b0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x20b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20b1b4:
    // 0x20b1b4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_20b1b8:
    if (ctx->pc == 0x20B1B8u) {
        ctx->pc = 0x20B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1B4u;
        // 0x20b1b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1BCu;
        goto label_20b1bc;
    }
    ctx->pc = 0x20B1B4u;
    {
        const bool branch_taken_0x20b1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1B4u;
        // 0x20b1b8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1b4) {
            ctx->pc = 0x20B1E0u;
            goto label_20b1e0;
        }
    }
    ctx->pc = 0x20B1BCu;
label_20b1bc:
    // 0x20b1bc: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_20b1c0:
    // 0x20b1c0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x20b1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20b1c4:
    // 0x20b1c4: 0x24c69108  addiu       $a2, $a2, -0x6EF8
    ctx->pc = 0x20b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938888));
label_20b1c8:
    // 0x20b1c8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x20b1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20b1cc:
    // 0x20b1cc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20b1d0:
    // 0x20b1d0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x20b1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20b1d4:
    // 0x20b1d4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_20b1d8:
    // 0x20b1d8: 0x60f809  jalr        $v1
label_20b1dc:
    if (ctx->pc == 0x20B1DCu) {
        ctx->pc = 0x20B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1D8u;
        // 0x20b1dc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1E0u;
        goto label_20b1e0;
    }
    ctx->pc = 0x20B1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B1E0u);
        ctx->pc = 0x20B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1D8u;
        // 0x20b1dc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B1D8u, 0x20B1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B1E0u;
label_20b1e0:
    // 0x20b1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b1e4:
    // 0x20b1e4: 0xc06a39e  jal         func_1A8E78
label_20b1e8:
    if (ctx->pc == 0x20B1E8u) {
        ctx->pc = 0x20B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1E4u;
        // 0x20b1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1ECu;
        goto label_20b1ec;
    }
    ctx->pc = 0x20B1E4u;
    SET_GPR_U32(ctx, 31, 0x20B1ECu);
    ctx->pc = 0x20B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1E4u;
    // 0x20b1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x20B1E4u, 0x20B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1ECu;
label_20b1ec:
    // 0x20b1ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20b1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20b1f0:
    // 0x20b1f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20b1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b1f4:
    // 0x20b1f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20b1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b1f8:
    // 0x20b1f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b1fc:
    // 0x20b1fc: 0x3e00008  jr          $ra
label_20b200:
    if (ctx->pc == 0x20B200u) {
        ctx->pc = 0x20B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1FCu;
        // 0x20b200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B204u;
        goto label_20b204;
    }
    ctx->pc = 0x20B1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1FCu;
        // 0x20b200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B204u;
label_20b204:
    // 0x20b204: 0x0  nop
    ctx->pc = 0x20b204u;
    // NOP
    ctx->pc = 0x20b208u;
}

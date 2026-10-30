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

// Function: sub_002070F8
// Address: 0x2070f8 - 0x2071d8
void sub_002070F8_0x2070f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002070F8_0x2070f8");
#endif

    switch (ctx->pc) {
        case 0x2070f8u: goto label_2070f8;
        case 0x2070fcu: goto label_2070fc;
        case 0x207100u: goto label_207100;
        case 0x207104u: goto label_207104;
        case 0x207108u: goto label_207108;
        case 0x20710cu: goto label_20710c;
        case 0x207110u: goto label_207110;
        case 0x207114u: goto label_207114;
        case 0x207118u: goto label_207118;
        case 0x20711cu: goto label_20711c;
        case 0x207120u: goto label_207120;
        case 0x207124u: goto label_207124;
        case 0x207128u: goto label_207128;
        case 0x20712cu: goto label_20712c;
        case 0x207130u: goto label_207130;
        case 0x207134u: goto label_207134;
        case 0x207138u: goto label_207138;
        case 0x20713cu: goto label_20713c;
        case 0x207140u: goto label_207140;
        case 0x207144u: goto label_207144;
        case 0x207148u: goto label_207148;
        case 0x20714cu: goto label_20714c;
        case 0x207150u: goto label_207150;
        case 0x207154u: goto label_207154;
        case 0x207158u: goto label_207158;
        case 0x20715cu: goto label_20715c;
        case 0x207160u: goto label_207160;
        case 0x207164u: goto label_207164;
        case 0x207168u: goto label_207168;
        case 0x20716cu: goto label_20716c;
        case 0x207170u: goto label_207170;
        case 0x207174u: goto label_207174;
        case 0x207178u: goto label_207178;
        case 0x20717cu: goto label_20717c;
        case 0x207180u: goto label_207180;
        case 0x207184u: goto label_207184;
        case 0x207188u: goto label_207188;
        case 0x20718cu: goto label_20718c;
        case 0x207190u: goto label_207190;
        case 0x207194u: goto label_207194;
        case 0x207198u: goto label_207198;
        case 0x20719cu: goto label_20719c;
        case 0x2071a0u: goto label_2071a0;
        case 0x2071a4u: goto label_2071a4;
        case 0x2071a8u: goto label_2071a8;
        case 0x2071acu: goto label_2071ac;
        case 0x2071b0u: goto label_2071b0;
        case 0x2071b4u: goto label_2071b4;
        case 0x2071b8u: goto label_2071b8;
        case 0x2071bcu: goto label_2071bc;
        case 0x2071c0u: goto label_2071c0;
        case 0x2071c4u: goto label_2071c4;
        case 0x2071c8u: goto label_2071c8;
        case 0x2071ccu: goto label_2071cc;
        case 0x2071d0u: goto label_2071d0;
        case 0x2071d4u: goto label_2071d4;
        default: break;
    }

    ctx->pc = 0x2070f8u;

label_2070f8:
    // 0x2070f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2070f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2070fc:
    // 0x2070fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2070fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_207100:
    // 0x207100: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x207100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_207104:
    // 0x207104: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x207104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_207108:
    // 0x207108: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x207108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20710c:
    // 0x20710c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20710cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207110:
    // 0x207110: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x207110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_207114:
    // 0x207114: 0x2442df18  addiu       $v0, $v0, -0x20E8
    ctx->pc = 0x207114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958872));
label_207118:
    // 0x207118: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x207118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_20711c:
    // 0x20711c: 0x2463df40  addiu       $v1, $v1, -0x20C0
    ctx->pc = 0x20711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958912));
label_207120:
    // 0x207120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207124:
    // 0x207124: 0x24c6df70  addiu       $a2, $a2, -0x2090
    ctx->pc = 0x207124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958960));
label_207128:
    // 0x207128: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x207128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_20712c:
    // 0x20712c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20712cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207130:
    // 0x207130: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x207130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_207134:
    // 0x207134: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x207134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_207138:
    // 0x207138: 0xc081cfa  jal         func_2073E8
label_20713c:
    if (ctx->pc == 0x20713Cu) {
        ctx->pc = 0x20713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207138u;
        // 0x20713c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207140u;
        goto label_207140;
    }
    ctx->pc = 0x207138u;
    SET_GPR_U32(ctx, 31, 0x207140u);
    ctx->pc = 0x20713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207138u;
    // 0x20713c: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2073E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2073E8u, 0x207138u, 0x207140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207140u;
label_207140:
    // 0x207140: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x207140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_207144:
    // 0x207144: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x207144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_207148:
    // 0x207148: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x207148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_20714c:
    // 0x20714c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20714cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_207150:
    // 0x207150: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_207154:
    if (ctx->pc == 0x207154u) {
        ctx->pc = 0x207154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207150u;
        // 0x207154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207158u;
        goto label_207158;
    }
    ctx->pc = 0x207150u;
    {
        const bool branch_taken_0x207150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207150u;
        // 0x207154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207150) {
            ctx->pc = 0x207180u;
            goto label_207180;
        }
    }
    ctx->pc = 0x207158u;
label_207158:
    // 0x207158: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x207158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20715c:
    // 0x20715c: 0xc1376d6  jal         func_4DDB58
label_207160:
    if (ctx->pc == 0x207160u) {
        ctx->pc = 0x207160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20715Cu;
        // 0x207160: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207164u;
        goto label_207164;
    }
    ctx->pc = 0x20715Cu;
    SET_GPR_U32(ctx, 31, 0x207164u);
    ctx->pc = 0x207160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20715Cu;
    // 0x207160: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x20715Cu, 0x207164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207164u;
label_207164:
    // 0x207164: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x207164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_207168:
    // 0x207168: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x207168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_20716c:
    // 0x20716c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_207170:
    // 0x207170: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x207170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_207174:
    // 0x207174: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x207174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_207178:
    // 0x207178: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x207178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_20717c:
    // 0x20717c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20717cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_207180:
    // 0x207180: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x207180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_207184:
    // 0x207184: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_207188:
    if (ctx->pc == 0x207188u) {
        ctx->pc = 0x207188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207184u;
        // 0x207188: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20718Cu;
        goto label_20718c;
    }
    ctx->pc = 0x207184u;
    {
        const bool branch_taken_0x207184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x207188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207184u;
        // 0x207188: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207184) {
            ctx->pc = 0x2071B0u;
            goto label_2071b0;
        }
    }
    ctx->pc = 0x20718Cu;
label_20718c:
    // 0x20718c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x20718cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_207190:
    // 0x207190: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x207190u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_207194:
    // 0x207194: 0x24c689d8  addiu       $a2, $a2, -0x7628
    ctx->pc = 0x207194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937048));
label_207198:
    // 0x207198: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x207198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_20719c:
    // 0x20719c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2071a0:
    // 0x2071a0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2071a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2071a4:
    // 0x2071a4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2071a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2071a8:
    // 0x2071a8: 0x60f809  jalr        $v1
label_2071ac:
    if (ctx->pc == 0x2071ACu) {
        ctx->pc = 0x2071ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071A8u;
        // 0x2071ac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071B0u;
        goto label_2071b0;
    }
    ctx->pc = 0x2071A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2071B0u);
        ctx->pc = 0x2071ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071A8u;
        // 0x2071ac: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2071A8u, 0x2071B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2071B0u;
label_2071b0:
    // 0x2071b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2071b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2071b4:
    // 0x2071b4: 0xc06a39e  jal         func_1A8E78
label_2071b8:
    if (ctx->pc == 0x2071B8u) {
        ctx->pc = 0x2071B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071B4u;
        // 0x2071b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071BCu;
        goto label_2071bc;
    }
    ctx->pc = 0x2071B4u;
    SET_GPR_U32(ctx, 31, 0x2071BCu);
    ctx->pc = 0x2071B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2071B4u;
    // 0x2071b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x2071B4u, 0x2071BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071BCu;
label_2071bc:
    // 0x2071bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2071bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2071c0:
    // 0x2071c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2071c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2071c4:
    // 0x2071c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2071c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2071c8:
    // 0x2071c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2071c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2071cc:
    // 0x2071cc: 0x3e00008  jr          $ra
label_2071d0:
    if (ctx->pc == 0x2071D0u) {
        ctx->pc = 0x2071D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071CCu;
        // 0x2071d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2071D4u;
        goto label_2071d4;
    }
    ctx->pc = 0x2071CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2071D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071CCu;
        // 0x2071d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2071CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2071D4u;
label_2071d4:
    // 0x2071d4: 0x0  nop
    ctx->pc = 0x2071d4u;
    // NOP
    ctx->pc = 0x2071d8u;
}

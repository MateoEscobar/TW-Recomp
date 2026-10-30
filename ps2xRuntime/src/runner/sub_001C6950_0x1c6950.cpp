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

// Function: sub_001C6950
// Address: 0x1c6950 - 0x1c6a0c
void sub_001C6950_0x1c6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6950_0x1c6950");
#endif

    switch (ctx->pc) {
        case 0x1c6950u: goto label_1c6950;
        case 0x1c6954u: goto label_1c6954;
        case 0x1c6958u: goto label_1c6958;
        case 0x1c695cu: goto label_1c695c;
        case 0x1c6960u: goto label_1c6960;
        case 0x1c6964u: goto label_1c6964;
        case 0x1c6968u: goto label_1c6968;
        case 0x1c696cu: goto label_1c696c;
        case 0x1c6970u: goto label_1c6970;
        case 0x1c6974u: goto label_1c6974;
        case 0x1c6978u: goto label_1c6978;
        case 0x1c697cu: goto label_1c697c;
        case 0x1c6980u: goto label_1c6980;
        case 0x1c6984u: goto label_1c6984;
        case 0x1c6988u: goto label_1c6988;
        case 0x1c698cu: goto label_1c698c;
        case 0x1c6990u: goto label_1c6990;
        case 0x1c6994u: goto label_1c6994;
        case 0x1c6998u: goto label_1c6998;
        case 0x1c699cu: goto label_1c699c;
        case 0x1c69a0u: goto label_1c69a0;
        case 0x1c69a4u: goto label_1c69a4;
        case 0x1c69a8u: goto label_1c69a8;
        case 0x1c69acu: goto label_1c69ac;
        case 0x1c69b0u: goto label_1c69b0;
        case 0x1c69b4u: goto label_1c69b4;
        case 0x1c69b8u: goto label_1c69b8;
        case 0x1c69bcu: goto label_1c69bc;
        case 0x1c69c0u: goto label_1c69c0;
        case 0x1c69c4u: goto label_1c69c4;
        case 0x1c69c8u: goto label_1c69c8;
        case 0x1c69ccu: goto label_1c69cc;
        case 0x1c69d0u: goto label_1c69d0;
        case 0x1c69d4u: goto label_1c69d4;
        case 0x1c69d8u: goto label_1c69d8;
        case 0x1c69dcu: goto label_1c69dc;
        case 0x1c69e0u: goto label_1c69e0;
        case 0x1c69e4u: goto label_1c69e4;
        case 0x1c69e8u: goto label_1c69e8;
        case 0x1c69ecu: goto label_1c69ec;
        case 0x1c69f0u: goto label_1c69f0;
        case 0x1c69f4u: goto label_1c69f4;
        case 0x1c69f8u: goto label_1c69f8;
        case 0x1c69fcu: goto label_1c69fc;
        case 0x1c6a00u: goto label_1c6a00;
        case 0x1c6a04u: goto label_1c6a04;
        case 0x1c6a08u: goto label_1c6a08;
        default: break;
    }

    ctx->pc = 0x1c6950u;

label_1c6950:
    // 0x1c6950: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1c6950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1c6954:
    // 0x1c6954: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1c6954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1c6958:
    // 0x1c6958: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1c6958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_1c695c:
    // 0x1c695c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c695cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6960:
    // 0x1c6960: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1c6960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1c6964:
    // 0x1c6964: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1c6964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_1c6968:
    // 0x1c6968: 0xc071a3a  jal         func_1C68E8
label_1c696c:
    if (ctx->pc == 0x1C696Cu) {
        ctx->pc = 0x1C696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6968u;
        // 0x1c696c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6970u;
        goto label_1c6970;
    }
    ctx->pc = 0x1C6968u;
    SET_GPR_U32(ctx, 31, 0x1C6970u);
    ctx->pc = 0x1C696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6968u;
    // 0x1c696c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C68E8u, 0x1C6968u, 0x1C6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6970u;
label_1c6970:
    // 0x1c6970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6974:
    // 0x1c6974: 0x8e020420  lw          $v0, 0x420($s0)
    ctx->pc = 0x1c6974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1056)));
label_1c6978:
    // 0x1c6978: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_1c697c:
    if (ctx->pc == 0x1C697Cu) {
        ctx->pc = 0x1C697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6978u;
        // 0x1c697c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6980u;
        goto label_1c6980;
    }
    ctx->pc = 0x1C6978u;
    {
        const bool branch_taken_0x1c6978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6978u;
        // 0x1c697c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6978) {
            ctx->pc = 0x1C6994u;
            goto label_1c6994;
        }
    }
    ctx->pc = 0x1C6980u;
label_1c6980:
    // 0x1c6980: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1c6980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1c6984:
    // 0x1c6984: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1c6984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1c6988:
    // 0x1c6988: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c6988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c698c:
    // 0x1c698c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c698cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c6990:
    // 0x1c6990: 0xac60411c  sw          $zero, 0x411C($v1)
    ctx->pc = 0x1c6990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16668), GPR_U32(ctx, 0));
label_1c6994:
    // 0x1c6994: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
label_1c6998:
    if (ctx->pc == 0x1C6998u) {
        ctx->pc = 0x1C6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6994u;
        // 0x1c6998: 0xae110420  sw          $s1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C699Cu;
        goto label_1c699c;
    }
    ctx->pc = 0x1C6994u;
    {
        const bool branch_taken_0x1c6994 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1C6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6994u;
        // 0x1c6998: 0xae110420  sw          $s1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6994) {
            ctx->pc = 0x1C69BCu;
            goto label_1c69bc;
        }
    }
    ctx->pc = 0x1C699Cu;
label_1c699c:
    // 0x1c699c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c699cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c69a0:
    // 0x1c69a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c69a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c69a4:
    // 0x1c69a4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c69a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c69a8:
    // 0x1c69a8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c69ac:
    // 0x1c69ac: 0x60f809  jalr        $v1
label_1c69b0:
    if (ctx->pc == 0x1C69B0u) {
        ctx->pc = 0x1C69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69ACu;
        // 0x1c69b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69B4u;
        goto label_1c69b4;
    }
    ctx->pc = 0x1C69ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C69B4u);
        ctx->pc = 0x1C69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69ACu;
        // 0x1c69b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C69ACu, 0x1C69B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C69B4u;
label_1c69b4:
    // 0x1c69b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c69b8:
    if (ctx->pc == 0x1C69B8u) {
        ctx->pc = 0x1C69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69B4u;
        // 0x1c69b8: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69BCu;
        goto label_1c69bc;
    }
    ctx->pc = 0x1C69B4u;
    {
        const bool branch_taken_0x1c69b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69B4u;
        // 0x1c69b8: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69b4) {
            ctx->pc = 0x1C69DCu;
            goto label_1c69dc;
        }
    }
    ctx->pc = 0x1C69BCu;
label_1c69bc:
    // 0x1c69bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c69c0:
    // 0x1c69c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c69c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c69c4:
    // 0x1c69c4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c69c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c69c8:
    // 0x1c69c8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c69cc:
    // 0x1c69cc: 0x60f809  jalr        $v1
label_1c69d0:
    if (ctx->pc == 0x1C69D0u) {
        ctx->pc = 0x1C69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69CCu;
        // 0x1c69d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69D4u;
        goto label_1c69d4;
    }
    ctx->pc = 0x1C69CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C69D4u);
        ctx->pc = 0x1C69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69CCu;
        // 0x1c69d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C69CCu, 0x1C69D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C69D4u;
label_1c69d4:
    // 0x1c69d4: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c69d8:
    if (ctx->pc == 0x1C69D8u) {
        ctx->pc = 0x1C69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69D4u;
        // 0x1c69d8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69DCu;
        goto label_1c69dc;
    }
    ctx->pc = 0x1C69D4u;
    {
        const bool branch_taken_0x1c69d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69D4u;
        // 0x1c69d8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69d4) {
            ctx->pc = 0x1C6A08u;
            goto label_1c6a08;
        }
    }
    ctx->pc = 0x1C69DCu;
label_1c69dc:
    // 0x1c69dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c69dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c69e0:
    // 0x1c69e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c69e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c69e4:
    // 0x1c69e4: 0x24c65270  addiu       $a2, $a2, 0x5270
    ctx->pc = 0x1c69e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21104));
label_1c69e8:
    // 0x1c69e8: 0xc10ca04  jal         func_432810
label_1c69ec:
    if (ctx->pc == 0x1C69ECu) {
        ctx->pc = 0x1C69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69E8u;
        // 0x1c69ec: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69F0u;
        goto label_1c69f0;
    }
    ctx->pc = 0x1C69E8u;
    SET_GPR_U32(ctx, 31, 0x1C69F0u);
    ctx->pc = 0x1C69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69E8u;
    // 0x1c69ec: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1C69E8u, 0x1C69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69F0u;
label_1c69f0:
    // 0x1c69f0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c69f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1c69f4:
    // 0x1c69f4: 0xc073478  jal         func_1CD1E0
label_1c69f8:
    if (ctx->pc == 0x1C69F8u) {
        ctx->pc = 0x1C69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69F4u;
        // 0x1c69f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69FCu;
        goto label_1c69fc;
    }
    ctx->pc = 0x1C69F4u;
    SET_GPR_U32(ctx, 31, 0x1C69FCu);
    ctx->pc = 0x1C69F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69F4u;
    // 0x1c69f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1C69F4u, 0x1C69FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69FCu;
label_1c69fc:
    // 0x1c69fc: 0xc06dbd8  jal         func_1B6F60
label_1c6a00:
    if (ctx->pc == 0x1C6A00u) {
        ctx->pc = 0x1C6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69FCu;
        // 0x1c6a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A04u;
        goto label_1c6a04;
    }
    ctx->pc = 0x1C69FCu;
    SET_GPR_U32(ctx, 31, 0x1C6A04u);
    ctx->pc = 0x1C6A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69FCu;
    // 0x1c6a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F60u, 0x1C69FCu, 0x1C6A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A04u;
label_1c6a04:
    // 0x1c6a04: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1c6a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1c6a08:
    // 0x1c6a08: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1c6a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    ctx->pc = 0x1c6a0cu;
}

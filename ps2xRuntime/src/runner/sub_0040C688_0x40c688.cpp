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

// Function: sub_0040C688
// Address: 0x40c688 - 0x40c7f0
void sub_0040C688_0x40c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C688_0x40c688");
#endif

    switch (ctx->pc) {
        case 0x40c688u: goto label_40c688;
        case 0x40c68cu: goto label_40c68c;
        case 0x40c690u: goto label_40c690;
        case 0x40c694u: goto label_40c694;
        case 0x40c698u: goto label_40c698;
        case 0x40c69cu: goto label_40c69c;
        case 0x40c6a0u: goto label_40c6a0;
        case 0x40c6a4u: goto label_40c6a4;
        case 0x40c6a8u: goto label_40c6a8;
        case 0x40c6acu: goto label_40c6ac;
        case 0x40c6b0u: goto label_40c6b0;
        case 0x40c6b4u: goto label_40c6b4;
        case 0x40c6b8u: goto label_40c6b8;
        case 0x40c6bcu: goto label_40c6bc;
        case 0x40c6c0u: goto label_40c6c0;
        case 0x40c6c4u: goto label_40c6c4;
        case 0x40c6c8u: goto label_40c6c8;
        case 0x40c6ccu: goto label_40c6cc;
        case 0x40c6d0u: goto label_40c6d0;
        case 0x40c6d4u: goto label_40c6d4;
        case 0x40c6d8u: goto label_40c6d8;
        case 0x40c6dcu: goto label_40c6dc;
        case 0x40c6e0u: goto label_40c6e0;
        case 0x40c6e4u: goto label_40c6e4;
        case 0x40c6e8u: goto label_40c6e8;
        case 0x40c6ecu: goto label_40c6ec;
        case 0x40c6f0u: goto label_40c6f0;
        case 0x40c6f4u: goto label_40c6f4;
        case 0x40c6f8u: goto label_40c6f8;
        case 0x40c6fcu: goto label_40c6fc;
        case 0x40c700u: goto label_40c700;
        case 0x40c704u: goto label_40c704;
        case 0x40c708u: goto label_40c708;
        case 0x40c70cu: goto label_40c70c;
        case 0x40c710u: goto label_40c710;
        case 0x40c714u: goto label_40c714;
        case 0x40c718u: goto label_40c718;
        case 0x40c71cu: goto label_40c71c;
        case 0x40c720u: goto label_40c720;
        case 0x40c724u: goto label_40c724;
        case 0x40c728u: goto label_40c728;
        case 0x40c72cu: goto label_40c72c;
        case 0x40c730u: goto label_40c730;
        case 0x40c734u: goto label_40c734;
        case 0x40c738u: goto label_40c738;
        case 0x40c73cu: goto label_40c73c;
        case 0x40c740u: goto label_40c740;
        case 0x40c744u: goto label_40c744;
        case 0x40c748u: goto label_40c748;
        case 0x40c74cu: goto label_40c74c;
        case 0x40c750u: goto label_40c750;
        case 0x40c754u: goto label_40c754;
        case 0x40c758u: goto label_40c758;
        case 0x40c75cu: goto label_40c75c;
        case 0x40c760u: goto label_40c760;
        case 0x40c764u: goto label_40c764;
        case 0x40c768u: goto label_40c768;
        case 0x40c76cu: goto label_40c76c;
        case 0x40c770u: goto label_40c770;
        case 0x40c774u: goto label_40c774;
        case 0x40c778u: goto label_40c778;
        case 0x40c77cu: goto label_40c77c;
        case 0x40c780u: goto label_40c780;
        case 0x40c784u: goto label_40c784;
        case 0x40c788u: goto label_40c788;
        case 0x40c78cu: goto label_40c78c;
        case 0x40c790u: goto label_40c790;
        case 0x40c794u: goto label_40c794;
        case 0x40c798u: goto label_40c798;
        case 0x40c79cu: goto label_40c79c;
        case 0x40c7a0u: goto label_40c7a0;
        case 0x40c7a4u: goto label_40c7a4;
        case 0x40c7a8u: goto label_40c7a8;
        case 0x40c7acu: goto label_40c7ac;
        case 0x40c7b0u: goto label_40c7b0;
        case 0x40c7b4u: goto label_40c7b4;
        case 0x40c7b8u: goto label_40c7b8;
        case 0x40c7bcu: goto label_40c7bc;
        case 0x40c7c0u: goto label_40c7c0;
        case 0x40c7c4u: goto label_40c7c4;
        case 0x40c7c8u: goto label_40c7c8;
        case 0x40c7ccu: goto label_40c7cc;
        case 0x40c7d0u: goto label_40c7d0;
        case 0x40c7d4u: goto label_40c7d4;
        case 0x40c7d8u: goto label_40c7d8;
        case 0x40c7dcu: goto label_40c7dc;
        case 0x40c7e0u: goto label_40c7e0;
        case 0x40c7e4u: goto label_40c7e4;
        case 0x40c7e8u: goto label_40c7e8;
        case 0x40c7ecu: goto label_40c7ec;
        default: break;
    }

    ctx->pc = 0x40c688u;

label_40c688:
    // 0x40c688: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x40c688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_40c68c:
    // 0x40c68c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x40c68cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40c690:
    // 0x40c690: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40c690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40c694:
    // 0x40c694: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40c694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40c698:
    // 0x40c698: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x40c698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_40c69c:
    // 0x40c69c: 0x24c68638  addiu       $a2, $a2, -0x79C8
    ctx->pc = 0x40c69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936120));
label_40c6a0:
    // 0x40c6a0: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x40c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_40c6a4:
    // 0x40c6a4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x40c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_40c6a8:
    // 0x40c6a8: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x40c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_40c6ac:
    // 0x40c6ac: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x40c6acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_40c6b0:
    // 0x40c6b0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x40c6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_40c6b4:
    // 0x40c6b4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x40c6b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_40c6b8:
    // 0x40c6b8: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x40c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_40c6bc:
    // 0x40c6bc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x40c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_40c6c0:
    // 0x40c6c0: 0xc10ca04  jal         func_432810
label_40c6c4:
    if (ctx->pc == 0x40C6C4u) {
        ctx->pc = 0x40C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C6C0u;
        // 0x40c6c4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C6C8u;
        goto label_40c6c8;
    }
    ctx->pc = 0x40C6C0u;
    SET_GPR_U32(ctx, 31, 0x40C6C8u);
    ctx->pc = 0x40C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C6C0u;
    // 0x40c6c4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x40C6C0u, 0x40C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C6C8u;
label_40c6c8:
    // 0x40c6c8: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x40c6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_40c6cc:
    // 0x40c6cc: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x40c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_40c6d0:
    // 0x40c6d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40c6d4:
    // 0x40c6d4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x40c6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_40c6d8:
    // 0x40c6d8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x40c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_40c6dc:
    // 0x40c6dc: 0x60f809  jalr        $v1
label_40c6e0:
    if (ctx->pc == 0x40C6E0u) {
        ctx->pc = 0x40C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C6DCu;
        // 0x40c6e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C6E4u;
        goto label_40c6e4;
    }
    ctx->pc = 0x40C6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C6E4u);
        ctx->pc = 0x40C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C6DCu;
        // 0x40c6e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C6DCu, 0x40C6E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C6E4u;
label_40c6e4:
    // 0x40c6e4: 0x8e82b788  lw          $v0, -0x4878($s4)
    ctx->pc = 0x40c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948744)));
label_40c6e8:
    // 0x40c6e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40c6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40c6ec:
    // 0x40c6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40c6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40c6f0:
    // 0x40c6f0: 0x8c470090  lw          $a3, 0x90($v0)
    ctx->pc = 0x40c6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_40c6f4:
    // 0x40c6f4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x40c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40c6f8:
    // 0x40c6f8: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x40c6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_40c6fc:
    // 0x40c6fc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x40c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_40c700:
    // 0x40c700: 0x40f809  jalr        $v0
label_40c704:
    if (ctx->pc == 0x40C704u) {
        ctx->pc = 0x40C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C700u;
        // 0x40c704: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C708u;
        goto label_40c708;
    }
    ctx->pc = 0x40C700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40C708u);
        ctx->pc = 0x40C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C700u;
        // 0x40c704: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C700u, 0x40C708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C708u;
label_40c708:
    // 0x40c708: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40c708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c70c:
    // 0x40c70c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x40c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_40c710:
    // 0x40c710: 0x8c625340  lw          $v0, 0x5340($v1)
    ctx->pc = 0x40c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21312)));
label_40c714:
    // 0x40c714: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x40c714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_40c718:
    // 0x40c718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40c71c:
    // 0x40c71c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40c71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40c720:
    // 0x40c720: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x40c720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_40c724:
    // 0x40c724: 0xc055130  jal         func_1544C0
label_40c728:
    if (ctx->pc == 0x40C728u) {
        ctx->pc = 0x40C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C724u;
        // 0x40c728: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C72Cu;
        goto label_40c72c;
    }
    ctx->pc = 0x40C724u;
    SET_GPR_U32(ctx, 31, 0x40C72Cu);
    ctx->pc = 0x40C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C724u;
    // 0x40c728: 0x8c46003c  lw          $a2, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1544C0u, 0x40C724u, 0x40C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C72Cu;
label_40c72c:
    // 0x40c72c: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x40c72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_40c730:
    // 0x40c730: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x40c730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_40c734:
    // 0x40c734: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40c738:
    // 0x40c738: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40c738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40c73c:
    // 0x40c73c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40c740:
    // 0x40c740: 0x60f809  jalr        $v1
label_40c744:
    if (ctx->pc == 0x40C744u) {
        ctx->pc = 0x40C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C740u;
        // 0x40c744: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C748u;
        goto label_40c748;
    }
    ctx->pc = 0x40C740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C748u);
        ctx->pc = 0x40C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C740u;
        // 0x40c744: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C740u, 0x40C748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C748u;
label_40c748:
    // 0x40c748: 0xc051060  jal         func_144180
label_40c74c:
    if (ctx->pc == 0x40C74Cu) {
        ctx->pc = 0x40C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C748u;
        // 0x40c74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C750u;
        goto label_40c750;
    }
    ctx->pc = 0x40C748u;
    SET_GPR_U32(ctx, 31, 0x40C750u);
    ctx->pc = 0x40C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C748u;
    // 0x40c74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144180u, 0x40C748u, 0x40C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C750u;
label_40c750:
    // 0x40c750: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x40c750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_40c754:
    // 0x40c754: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x40c754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_40c758:
    // 0x40c758: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40c75c:
    // 0x40c75c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x40c75cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_40c760:
    // 0x40c760: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x40c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_40c764:
    // 0x40c764: 0x60f809  jalr        $v1
label_40c768:
    if (ctx->pc == 0x40C768u) {
        ctx->pc = 0x40C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C764u;
        // 0x40c768: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C76Cu;
        goto label_40c76c;
    }
    ctx->pc = 0x40C764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C76Cu);
        ctx->pc = 0x40C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C764u;
        // 0x40c768: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C764u, 0x40C76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C76Cu;
label_40c76c:
    // 0x40c76c: 0xc0551c6  jal         func_154718
label_40c770:
    if (ctx->pc == 0x40C770u) {
        ctx->pc = 0x40C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C76Cu;
        // 0x40c770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C774u;
        goto label_40c774;
    }
    ctx->pc = 0x40C76Cu;
    SET_GPR_U32(ctx, 31, 0x40C774u);
    ctx->pc = 0x40C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C76Cu;
    // 0x40c770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154718u, 0x40C76Cu, 0x40C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C774u;
label_40c774:
    // 0x40c774: 0x8e83b788  lw          $v1, -0x4878($s4)
    ctx->pc = 0x40c774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948744)));
label_40c778:
    // 0x40c778: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40c778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40c77c:
    // 0x40c77c: 0x8c660090  lw          $a2, 0x90($v1)
    ctx->pc = 0x40c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_40c780:
    // 0x40c780: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40c780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40c784:
    // 0x40c784: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x40c784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_40c788:
    // 0x40c788: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x40c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_40c78c:
    // 0x40c78c: 0x60f809  jalr        $v1
label_40c790:
    if (ctx->pc == 0x40C790u) {
        ctx->pc = 0x40C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C78Cu;
        // 0x40c790: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C794u;
        goto label_40c794;
    }
    ctx->pc = 0x40C78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C794u);
        ctx->pc = 0x40C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C78Cu;
        // 0x40c790: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C78Cu, 0x40C794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C794u;
label_40c794:
    // 0x40c794: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x40c794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_40c798:
    // 0x40c798: 0x8e05b9b8  lw          $a1, -0x4648($s0)
    ctx->pc = 0x40c798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949304)));
label_40c79c:
    // 0x40c79c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40c7a0:
    // 0x40c7a0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40c7a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40c7a4:
    // 0x40c7a4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40c7a8:
    // 0x40c7a8: 0x60f809  jalr        $v1
label_40c7ac:
    if (ctx->pc == 0x40C7ACu) {
        ctx->pc = 0x40C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7A8u;
        // 0x40c7ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C7B0u;
        goto label_40c7b0;
    }
    ctx->pc = 0x40C7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40C7B0u);
        ctx->pc = 0x40C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7A8u;
        // 0x40c7ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C7A8u, 0x40C7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C7B0u;
label_40c7b0:
    // 0x40c7b0: 0xc051028  jal         func_1440A0
label_40c7b4:
    if (ctx->pc == 0x40C7B4u) {
        ctx->pc = 0x40C7B8u;
        goto label_40c7b8;
    }
    ctx->pc = 0x40C7B0u;
    SET_GPR_U32(ctx, 31, 0x40C7B8u);
    ctx->pc = 0x1440A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440A0u, 0x40C7B0u, 0x40C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C7B8u;
label_40c7b8:
    // 0x40c7b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c7bc:
    // 0x40c7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40c7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40c7c0:
    // 0x40c7c0: 0xc055168  jal         func_1545A0
label_40c7c4:
    if (ctx->pc == 0x40C7C4u) {
        ctx->pc = 0x40C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7C0u;
        // 0x40c7c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C7C8u;
        goto label_40c7c8;
    }
    ctx->pc = 0x40C7C0u;
    SET_GPR_U32(ctx, 31, 0x40C7C8u);
    ctx->pc = 0x40C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C7C0u;
    // 0x40c7c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545A0u, 0x40C7C0u, 0x40C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C7C8u;
label_40c7c8:
    // 0x40c7c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40c7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c7cc:
    // 0x40c7cc: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x40c7ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_40c7d0:
    // 0x40c7d0: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x40c7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_40c7d4:
    // 0x40c7d4: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x40c7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_40c7d8:
    // 0x40c7d8: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x40c7d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_40c7dc:
    // 0x40c7dc: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x40c7dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_40c7e0:
    // 0x40c7e0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x40c7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_40c7e4:
    // 0x40c7e4: 0x3e00008  jr          $ra
label_40c7e8:
    if (ctx->pc == 0x40C7E8u) {
        ctx->pc = 0x40C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7E4u;
        // 0x40c7e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C7ECu;
        goto label_40c7ec;
    }
    ctx->pc = 0x40C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C7E4u;
        // 0x40c7e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C7ECu;
label_40c7ec:
    // 0x40c7ec: 0x0  nop
    ctx->pc = 0x40c7ecu;
    // NOP
    ctx->pc = 0x40c7f0u;
}

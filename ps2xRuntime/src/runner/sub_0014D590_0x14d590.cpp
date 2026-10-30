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

// Function: sub_0014D590
// Address: 0x14d590 - 0x14d718
void sub_0014D590_0x14d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D590_0x14d590");
#endif

    switch (ctx->pc) {
        case 0x14d5dcu: goto label_14d5dc;
        case 0x14d5ecu: goto label_14d5ec;
        case 0x14d600u: goto label_14d600;
        case 0x14d628u: goto label_14d628;
        case 0x14d638u: goto label_14d638;
        case 0x14d660u: goto label_14d660;
        case 0x14d674u: goto label_14d674;
        case 0x14d6a8u: goto label_14d6a8;
        case 0x14d6d8u: goto label_14d6d8;
        case 0x14d6e8u: goto label_14d6e8;
        case 0x14d6f0u: goto label_14d6f0;
        default: break;
    }

    ctx->pc = 0x14d590u;

    // 0x14d590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14d594: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14d594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14d598: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14d598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14d59c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x14d59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14d5a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14d5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5a8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x14d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14d5ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14d5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14d5b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14d5b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5b8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x14d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x14d5bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d5c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14d5c8: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x14d5c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14d5cc: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x14d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14d5d0: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x14d5d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d5d4: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14D5D4u;
    SET_GPR_U32(ctx, 31, 0x14D5DCu);
    ctx->pc = 0x14D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5D4u;
    // 0x14d5d8: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14D5D4u, 0x14D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5DCu;
label_14d5dc:
    // 0x14d5dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14d5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5e4: 0xc053b1a  jal         func_14EC68
    ctx->pc = 0x14D5E4u;
    SET_GPR_U32(ctx, 31, 0x14D5ECu);
    ctx->pc = 0x14D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5E4u;
    // 0x14d5e8: 0x8c650018  lw          $a1, 0x18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC68u, 0x14D5E4u, 0x14D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5ECu;
label_14d5ec:
    // 0x14d5ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d5f0: 0x1603000f  bne         $s0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14D5F0u;
    {
        const bool branch_taken_0x14d5f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d5f0) {
            ctx->pc = 0x14D630u;
            goto label_14d630;
        }
    }
    ctx->pc = 0x14D5F8u;
    // 0x14d5f8: 0xc05401e  jal         func_150078
    ctx->pc = 0x14D5F8u;
    SET_GPR_U32(ctx, 31, 0x14D600u);
    ctx->pc = 0x14D5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5F8u;
    // 0x14d5fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150078u, 0x14D5F8u, 0x14D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D600u;
label_14d600:
    // 0x14d600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d604: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x14d604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d608: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14d608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14d60c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d610: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14d610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14d614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14d618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d61c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14d61cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d620: 0xc05378a  jal         func_14DE28
    ctx->pc = 0x14D620u;
    SET_GPR_U32(ctx, 31, 0x14D628u);
    ctx->pc = 0x14D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D620u;
    // 0x14d624: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE28u, 0x14D620u, 0x14D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D628u;
label_14d628:
    // 0x14d628: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14D628u;
    {
        const bool branch_taken_0x14d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D628u;
        // 0x14d62c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d628) {
            ctx->pc = 0x14D664u;
            goto label_14d664;
        }
    }
    ctx->pc = 0x14D630u;
label_14d630:
    // 0x14d630: 0xc05401e  jal         func_150078
    ctx->pc = 0x14D630u;
    SET_GPR_U32(ctx, 31, 0x14D638u);
    ctx->pc = 0x14D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D630u;
    // 0x14d634: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150078u, 0x14D630u, 0x14D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D638u;
label_14d638:
    // 0x14d638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d63c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x14d63cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d640: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14d640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14d644: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d648: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14d648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d64c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14d64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d650: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14d650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d654: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x14d654u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d658: 0xc05378a  jal         func_14DE28
    ctx->pc = 0x14D658u;
    SET_GPR_U32(ctx, 31, 0x14D660u);
    ctx->pc = 0x14D65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D658u;
    // 0x14d65c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE28u, 0x14D658u, 0x14D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D660u;
label_14d660:
    // 0x14d660: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14d660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14d664:
    // 0x14d664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d66c: 0xc0540e0  jal         func_150380
    ctx->pc = 0x14D66Cu;
    SET_GPR_U32(ctx, 31, 0x14D674u);
    ctx->pc = 0x14D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D66Cu;
    // 0x14d670: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150380u, 0x14D66Cu, 0x14D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D674u;
label_14d674:
    // 0x14d674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d678: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14D678u;
    {
        const bool branch_taken_0x14d678 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D678u;
        // 0x14d67c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d678) {
            ctx->pc = 0x14D6B0u;
            goto label_14d6b0;
        }
    }
    ctx->pc = 0x14D680u;
    // 0x14d680: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d684: 0x8ea30848  lw          $v1, 0x848($s5)
    ctx->pc = 0x14d684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2120)));
    // 0x14d688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14d688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d68c: 0x8c4a0018  lw          $t2, 0x18($v0)
    ctx->pc = 0x14d68cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14d690: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14d690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d694: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14d698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d69c: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x14d69cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x14d6a0: 0xc054112  jal         func_150448
    ctx->pc = 0x14D6A0u;
    SET_GPR_U32(ctx, 31, 0x14D6A8u);
    ctx->pc = 0x14D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6A0u;
    // 0x14d6a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150448u, 0x14D6A0u, 0x14D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6A8u;
label_14d6a8:
    // 0x14d6a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14D6A8u;
    {
        const bool branch_taken_0x14d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6A8u;
        // 0x14d6ac: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6a8) {
            ctx->pc = 0x14D6DCu;
            goto label_14d6dc;
        }
    }
    ctx->pc = 0x14D6B0u;
label_14d6b0:
    // 0x14d6b0: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x14d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14d6b4: 0x8ea3084c  lw          $v1, 0x84C($s5)
    ctx->pc = 0x14d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2124)));
    // 0x14d6b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6bc: 0x8c4a0018  lw          $t2, 0x18($v0)
    ctx->pc = 0x14d6bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14d6c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14d6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d6c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14d6c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6cc: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x14d6ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x14d6d0: 0xc054112  jal         func_150448
    ctx->pc = 0x14D6D0u;
    SET_GPR_U32(ctx, 31, 0x14D6D8u);
    ctx->pc = 0x14D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6D0u;
    // 0x14d6d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150448u, 0x14D6D0u, 0x14D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6D8u;
label_14d6d8:
    // 0x14d6d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14d6dc:
    // 0x14d6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6e0: 0xc054198  jal         func_150660
    ctx->pc = 0x14D6E0u;
    SET_GPR_U32(ctx, 31, 0x14D6E8u);
    ctx->pc = 0x14D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6E0u;
    // 0x14d6e4: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150660u, 0x14D6E0u, 0x14D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6E8u;
label_14d6e8:
    // 0x14d6e8: 0xc0541f4  jal         func_1507D0
    ctx->pc = 0x14D6E8u;
    SET_GPR_U32(ctx, 31, 0x14D6F0u);
    ctx->pc = 0x14D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6E8u;
    // 0x14d6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1507D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507D0u, 0x14D6E8u, 0x14D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6F0u;
label_14d6f0:
    // 0x14d6f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14d6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14d6f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14d6f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14d6f8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14d6f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d6fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14d6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d700: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x14d700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d704: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14d704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d70c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D70Cu;
        // 0x14d710: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D714u;
    // 0x14d714: 0x0  nop
    ctx->pc = 0x14d714u;
    // NOP
    ctx->pc = 0x14d718u;
}

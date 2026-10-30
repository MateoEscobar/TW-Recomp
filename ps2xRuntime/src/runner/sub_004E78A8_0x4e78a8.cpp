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

// Function: sub_004E78A8
// Address: 0x4e78a8 - 0x4e7a00
void sub_004E78A8_0x4e78a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E78A8_0x4e78a8");
#endif

    switch (ctx->pc) {
        case 0x4e78d8u: goto label_4e78d8;
        case 0x4e7914u: goto label_4e7914;
        case 0x4e7968u: goto label_4e7968;
        case 0x4e7998u: goto label_4e7998;
        case 0x4e79d0u: goto label_4e79d0;
        default: break;
    }

    ctx->pc = 0x4e78a8u;

    // 0x4e78a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e78a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e78ac: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e78acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e78b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e78b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4e78b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e78b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e78b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4e78bc: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x4e78bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e78c0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x4e78c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e78c4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4E78C4u;
    {
        const bool branch_taken_0x4e78c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E78C4u;
        // 0x4e78c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e78c4) {
            ctx->pc = 0x4E78F4u;
            goto label_4e78f4;
        }
    }
    ctx->pc = 0x4E78CCu;
    // 0x4e78cc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e78d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4e78d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e78d4: 0x0  nop
    ctx->pc = 0x4e78d4u;
    // NOP
label_4e78d8:
    // 0x4e78d8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4e78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4e78dc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4e78dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4e78e0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4E78E0u;
    {
        const bool branch_taken_0x4e78e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e78e0) {
            ctx->pc = 0x4E78E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E78E0u;
            // 0x4e78e4: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E78ECu;
            goto label_4e78ec;
        }
    }
    ctx->pc = 0x4E78E8u;
    // 0x4e78e8: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x4e78e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_4e78ec:
    // 0x4e78ec: 0x54c0fffa  bnel        $a2, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4E78ECu;
    {
        const bool branch_taken_0x4e78ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e78ec) {
            ctx->pc = 0x4E78F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E78ECu;
            // 0x4e78f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E78D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e78d8;
        }
    }
    ctx->pc = 0x4E78F4u;
label_4e78f4:
    // 0x4e78f4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x4E78F4u;
    {
        const bool branch_taken_0x4e78f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E78F4u;
        // 0x4e78f8: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e78f4) {
            ctx->pc = 0x4E79B0u;
            goto label_4e79b0;
        }
    }
    ctx->pc = 0x4E78FCu;
    // 0x4e78fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4e7900: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4e7900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4e7904: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E7904u;
    {
        const bool branch_taken_0x4e7904 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x4E7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7904u;
        // 0x4e7908: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7904) {
            ctx->pc = 0x4E791Cu;
            goto label_4e791c;
        }
    }
    ctx->pc = 0x4E790Cu;
    // 0x4e790c: 0xc139d36  jal         func_4E74D8
    ctx->pc = 0x4E790Cu;
    SET_GPR_U32(ctx, 31, 0x4E7914u);
    ctx->pc = 0x4E7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E790Cu;
    // 0x4e7910: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E74D8u, 0x4E790Cu, 0x4E7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7914u;
label_4e7914:
    // 0x4e7914: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4E7914u;
    {
        const bool branch_taken_0x4e7914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7914u;
        // 0x4e7918: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7914) {
            ctx->pc = 0x4E79D4u;
            goto label_4e79d4;
        }
    }
    ctx->pc = 0x4E791Cu;
label_4e791c:
    // 0x4e791c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4e791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e7920: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E7920u;
    {
        const bool branch_taken_0x4e7920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7920u;
        // 0x4e7924: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7920) {
            ctx->pc = 0x4E7944u;
            goto label_4e7944;
        }
    }
    ctx->pc = 0x4E7928u;
    // 0x4e7928: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e7928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4e792c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4e7930: 0x54670005  bnel        $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4E7930u;
    {
        const bool branch_taken_0x4e7930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e7930) {
            ctx->pc = 0x4E7934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7930u;
            // 0x4e7934: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7948u;
            goto label_4e7948;
        }
    }
    ctx->pc = 0x4E7938u;
    // 0x4e7938: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x4e7938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4e793c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4E793Cu;
    {
        const bool branch_taken_0x4e793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E793Cu;
        // 0x4e7940: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e793c) {
            ctx->pc = 0x4E79B0u;
            goto label_4e79b0;
        }
    }
    ctx->pc = 0x4E7944u;
label_4e7944:
    // 0x4e7944: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e7944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4e7948:
    // 0x4e7948: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4e794c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E794Cu;
    {
        const bool branch_taken_0x4e794c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e794c) {
            ctx->pc = 0x4E7950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E794Cu;
            // 0x4e7950: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7988u;
            goto label_4e7988;
        }
    }
    ctx->pc = 0x4E7954u;
    // 0x4e7954: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e7954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7958: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e795c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x4E795Cu;
    {
        const bool branch_taken_0x4e795c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e795c) {
            ctx->pc = 0x4E7960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E795Cu;
            // 0x4e7960: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E79B0u;
            goto label_4e79b0;
        }
    }
    ctx->pc = 0x4E7964u;
    // 0x4e7964: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4e7964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e7968:
    // 0x4e7968: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e7968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4e796c: 0x0  nop
    ctx->pc = 0x4e796cu;
    // NOP
    // 0x4e7970: 0x0  nop
    ctx->pc = 0x4e7970u;
    // NOP
    // 0x4e7974: 0x0  nop
    ctx->pc = 0x4e7974u;
    // NOP
    // 0x4e7978: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E7978u;
    {
        const bool branch_taken_0x4e7978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e7978) {
            ctx->pc = 0x4E797Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E7978u;
            // 0x4e797c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E7968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7968;
        }
    }
    ctx->pc = 0x4E7980u;
    // 0x4e7980: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4E7980u;
    {
        const bool branch_taken_0x4e7980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7980u;
        // 0x4e7984: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7980) {
            ctx->pc = 0x4E79B0u;
            goto label_4e79b0;
        }
    }
    ctx->pc = 0x4E7988u;
label_4e7988:
    // 0x4e7988: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e7988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e798c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E798Cu;
    {
        const bool branch_taken_0x4e798c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E798Cu;
        // 0x4e7990: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e798c) {
            ctx->pc = 0x4E79B0u;
            goto label_4e79b0;
        }
    }
    ctx->pc = 0x4E7994u;
    // 0x4e7994: 0x0  nop
    ctx->pc = 0x4e7994u;
    // NOP
label_4e7998:
    // 0x4e7998: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4e7998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4e799c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4e799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4e79a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e79a4: 0x0  nop
    ctx->pc = 0x4e79a4u;
    // NOP
    // 0x4e79a8: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E79A8u;
    {
        const bool branch_taken_0x4e79a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E79A8u;
        // 0x4e79ac: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e79a8) {
            ctx->pc = 0x4E7998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e7998;
        }
    }
    ctx->pc = 0x4E79B0u;
label_4e79b0:
    // 0x4e79b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4e79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e79b4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4e79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e79b8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4e79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4e79bc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4e79bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4e79c0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E79C0u;
    {
        const bool branch_taken_0x4e79c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e79c0) {
            ctx->pc = 0x4E79C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E79C0u;
            // 0x4e79c4: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E79E4u;
            goto label_4e79e4;
        }
    }
    ctx->pc = 0x4E79C8u;
    // 0x4e79c8: 0xc139d36  jal         func_4E74D8
    ctx->pc = 0x4E79C8u;
    SET_GPR_U32(ctx, 31, 0x4E79D0u);
    ctx->pc = 0x4E79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E79C8u;
    // 0x4e79cc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E74D8u, 0x4E79C8u, 0x4E79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E79D0u;
label_4e79d0:
    // 0x4e79d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4e79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4e79d4:
    // 0x4e79d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4e79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4e79d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4e79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4e79dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4E79DCu;
    {
        const bool branch_taken_0x4e79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E79DCu;
        // 0x4e79e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e79dc) {
            ctx->pc = 0x4E79E8u;
            goto label_4e79e8;
        }
    }
    ctx->pc = 0x4E79E4u;
label_4e79e4:
    // 0x4e79e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4e79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4e79e8:
    // 0x4e79e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e79e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e79ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e79ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e79f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e79f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e79f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E79F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E79F4u;
        // 0x4e79f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E79F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E79FCu;
    // 0x4e79fc: 0x0  nop
    ctx->pc = 0x4e79fcu;
    // NOP
    ctx->pc = 0x4e7a00u;
}

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

// Function: sub_003298D0
// Address: 0x3298d0 - 0x32996c
void sub_003298D0_0x3298d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003298D0_0x3298d0");
#endif

    switch (ctx->pc) {
        case 0x329930u: goto label_329930;
        case 0x329944u: goto label_329944;
        default: break;
    }

    ctx->pc = 0x3298d0u;

    // 0x3298d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3298d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3298d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3298d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3298d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3298d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3298dc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x3298dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3298e0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3298E0u;
    {
        const bool branch_taken_0x3298e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298E0u;
        // 0x3298e4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298e0) {
            ctx->pc = 0x32996Cu;
            return;
        }
    }
    ctx->pc = 0x3298E8u;
    // 0x3298e8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3298e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3298ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3298ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3298f0: 0x244253f0  addiu       $v0, $v0, 0x53F0
    ctx->pc = 0x3298f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21488));
    // 0x3298f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3298f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3298f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3298f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3298fc: 0x800008  jr          $a0
    ctx->pc = 0x3298FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x329904u: goto label_329904;
            case 0x329920u: goto label_329920;
            case 0x329938u: goto label_329938;
            case 0x32994Cu: goto label_32994c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3298FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x329904u;
label_329904:
    // 0x329904: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x329904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x329908: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x329908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x32990c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x32990Cu;
    {
        const bool branch_taken_0x32990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32990Cu;
        // 0x329910: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32990c) {
            ctx->pc = 0x329970u;
            return;
        }
    }
    ctx->pc = 0x329914u;
    // 0x329914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329918: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x329918u;
    {
        const bool branch_taken_0x329918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329918u;
        // 0x32991c: 0xa4a2000a  sh          $v0, 0xA($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329918) {
            ctx->pc = 0x329970u;
            return;
        }
    }
    ctx->pc = 0x329920u;
label_329920:
    // 0x329920: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x329920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x329924: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x329924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329928: 0xc0ca5f4  jal         func_3297D0
    ctx->pc = 0x329928u;
    SET_GPR_U32(ctx, 31, 0x329930u);
    ctx->pc = 0x32992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329928u;
    // 0x32992c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3297D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297D0u, 0x329928u, 0x329930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329930u;
label_329930:
    // 0x329930: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x329930u;
    {
        const bool branch_taken_0x329930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329930u;
        // 0x329934: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329930) {
            ctx->pc = 0x329970u;
            return;
        }
    }
    ctx->pc = 0x329938u;
label_329938:
    // 0x329938: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x329938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32993c: 0xc0ca5f4  jal         func_3297D0
    ctx->pc = 0x32993Cu;
    SET_GPR_U32(ctx, 31, 0x329944u);
    ctx->pc = 0x329940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32993Cu;
    // 0x329940: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3297D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297D0u, 0x32993Cu, 0x329944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329944u;
label_329944:
    // 0x329944: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x329944u;
    {
        const bool branch_taken_0x329944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329944u;
        // 0x329948: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329944) {
            ctx->pc = 0x329970u;
            return;
        }
    }
    ctx->pc = 0x32994Cu;
label_32994c:
    // 0x32994c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x32994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x329950: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x329950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x329954: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329954u;
    {
        const bool branch_taken_0x329954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x329958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329954u;
        // 0x329958: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329954) {
            ctx->pc = 0x329970u;
            return;
        }
    }
    ctx->pc = 0x32995Cu;
    // 0x32995c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x32995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x329960: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x329960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x329964: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x329964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x329968: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x329968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x32996cu;
}

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

// Function: sub_004444D8
// Address: 0x4444d8 - 0x444538
void sub_004444D8_0x4444d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004444D8_0x4444d8");
#endif

    switch (ctx->pc) {
        case 0x4444d8u: goto label_4444d8;
        case 0x4444dcu: goto label_4444dc;
        case 0x4444e0u: goto label_4444e0;
        case 0x4444e4u: goto label_4444e4;
        case 0x4444e8u: goto label_4444e8;
        case 0x4444ecu: goto label_4444ec;
        case 0x4444f0u: goto label_4444f0;
        case 0x4444f4u: goto label_4444f4;
        case 0x4444f8u: goto label_4444f8;
        case 0x4444fcu: goto label_4444fc;
        case 0x444500u: goto label_444500;
        case 0x444504u: goto label_444504;
        case 0x444508u: goto label_444508;
        case 0x44450cu: goto label_44450c;
        case 0x444510u: goto label_444510;
        case 0x444514u: goto label_444514;
        case 0x444518u: goto label_444518;
        case 0x44451cu: goto label_44451c;
        case 0x444520u: goto label_444520;
        case 0x444524u: goto label_444524;
        case 0x444528u: goto label_444528;
        case 0x44452cu: goto label_44452c;
        case 0x444530u: goto label_444530;
        case 0x444534u: goto label_444534;
        default: break;
    }

    ctx->pc = 0x4444d8u;

label_4444d8:
    // 0x4444d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4444d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4444dc:
    // 0x4444dc: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x4444dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
label_4444e0:
    // 0x4444e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4444e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4444e4:
    // 0x4444e4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4444e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4444e8:
    // 0x4444e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4444e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4444ec:
    // 0x4444ec: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x4444ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_4444f0:
    // 0x4444f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4444f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4444f4:
    // 0x4444f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4444f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4444f8:
    // 0x4444f8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x4444f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4444fc:
    // 0x4444fc: 0x40f809  jalr        $v0
label_444500:
    if (ctx->pc == 0x444500u) {
        ctx->pc = 0x444500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4444FCu;
        // 0x444500: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x444504u;
        goto label_444504;
    }
    ctx->pc = 0x4444FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x444504u);
        ctx->pc = 0x444500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4444FCu;
        // 0x444500: 0x34640001  ori         $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4444FCu, 0x444504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x444504u;
label_444504:
    // 0x444504: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_444508:
    if (ctx->pc == 0x444508u) {
        ctx->pc = 0x444508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444504u;
        // 0x444508: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44450Cu;
        goto label_44450c;
    }
    ctx->pc = 0x444504u;
    {
        const bool branch_taken_0x444504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x444508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444504u;
        // 0x444508: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444504) {
            ctx->pc = 0x444528u;
            goto label_444528;
        }
    }
    ctx->pc = 0x44450Cu;
label_44450c:
    // 0x44450c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x44450cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_444510:
    // 0x444510: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x444510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_444514:
    // 0x444514: 0x8c645f80  lw          $a0, 0x5F80($v1)
    ctx->pc = 0x444514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24448)));
label_444518:
    // 0x444518: 0xac705f80  sw          $s0, 0x5F80($v1)
    ctx->pc = 0x444518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24448), GPR_U32(ctx, 16));
label_44451c:
    // 0x44451c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x44451cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_444520:
    // 0x444520: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x444520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_444524:
    // 0x444524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x444524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_444528:
    // 0x444528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44452c:
    // 0x44452c: 0x3e00008  jr          $ra
label_444530:
    if (ctx->pc == 0x444530u) {
        ctx->pc = 0x444530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44452Cu;
        // 0x444530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x444534u;
        goto label_444534;
    }
    ctx->pc = 0x44452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44452Cu;
        // 0x444530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444534u;
label_444534:
    // 0x444534: 0x0  nop
    ctx->pc = 0x444534u;
    // NOP
    ctx->pc = 0x444538u;
}

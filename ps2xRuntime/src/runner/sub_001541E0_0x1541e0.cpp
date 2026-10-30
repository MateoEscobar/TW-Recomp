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

// Function: sub_001541E0
// Address: 0x1541e0 - 0x154268
void sub_001541E0_0x1541e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001541E0_0x1541e0");
#endif

    switch (ctx->pc) {
        case 0x1541e0u: goto label_1541e0;
        case 0x1541e4u: goto label_1541e4;
        case 0x1541e8u: goto label_1541e8;
        case 0x1541ecu: goto label_1541ec;
        case 0x1541f0u: goto label_1541f0;
        case 0x1541f4u: goto label_1541f4;
        case 0x1541f8u: goto label_1541f8;
        case 0x1541fcu: goto label_1541fc;
        case 0x154200u: goto label_154200;
        case 0x154204u: goto label_154204;
        case 0x154208u: goto label_154208;
        case 0x15420cu: goto label_15420c;
        case 0x154210u: goto label_154210;
        case 0x154214u: goto label_154214;
        case 0x154218u: goto label_154218;
        case 0x15421cu: goto label_15421c;
        case 0x154220u: goto label_154220;
        case 0x154224u: goto label_154224;
        case 0x154228u: goto label_154228;
        case 0x15422cu: goto label_15422c;
        case 0x154230u: goto label_154230;
        case 0x154234u: goto label_154234;
        case 0x154238u: goto label_154238;
        case 0x15423cu: goto label_15423c;
        case 0x154240u: goto label_154240;
        case 0x154244u: goto label_154244;
        case 0x154248u: goto label_154248;
        case 0x15424cu: goto label_15424c;
        case 0x154250u: goto label_154250;
        case 0x154254u: goto label_154254;
        case 0x154258u: goto label_154258;
        case 0x15425cu: goto label_15425c;
        case 0x154260u: goto label_154260;
        case 0x154264u: goto label_154264;
        default: break;
    }

    ctx->pc = 0x1541e0u;

label_1541e0:
    // 0x1541e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1541e4:
    // 0x1541e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1541e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1541e8:
    // 0x1541e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1541e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1541ec:
    // 0x1541ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1541f0:
    // 0x1541f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1541f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1541f4:
    // 0x1541f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1541f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1541f8:
    // 0x1541f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1541f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1541fc:
    // 0x1541fc: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1541fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_154200:
    // 0x154200: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x154200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
label_154204:
    // 0x154204: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x154204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_154208:
    // 0x154208: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x154208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_15420c:
    // 0x15420c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_154210:
    // 0x154210: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x154210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_154214:
    // 0x154214: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x154214u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_154218:
    // 0x154218: 0x24a5dc00  addiu       $a1, $a1, -0x2400
    ctx->pc = 0x154218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958080));
label_15421c:
    // 0x15421c: 0x2508dc10  addiu       $t0, $t0, -0x23F0
    ctx->pc = 0x15421cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958096));
label_154220:
    // 0x154220: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x154220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_154224:
    // 0x154224: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x154224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_154228:
    // 0x154228: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x154228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_15422c:
    // 0x15422c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15422cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154230:
    // 0x154230: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x154230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_154234:
    // 0x154234: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x154234u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154238:
    // 0x154238: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x154238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_15423c:
    // 0x15423c: 0x40f809  jalr        $v0
label_154240:
    if (ctx->pc == 0x154240u) {
        ctx->pc = 0x154240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15423Cu;
        // 0x154240: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154244u;
        goto label_154244;
    }
    ctx->pc = 0x15423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154244u);
        ctx->pc = 0x154240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15423Cu;
        // 0x154240: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15423Cu, 0x154244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154244u;
label_154244:
    // 0x154244: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x154244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_154248:
    // 0x154248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15424c:
    // 0x15424c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x15424cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_154250:
    // 0x154250: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x154250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_154254:
    // 0x154254: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x154254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154258:
    // 0x154258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15425c:
    // 0x15425c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15425cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154260:
    // 0x154260: 0x3e00008  jr          $ra
label_154264:
    if (ctx->pc == 0x154264u) {
        ctx->pc = 0x154264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154260u;
        // 0x154264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154268u;
        goto label_fallthrough_0x154260;
    }
    ctx->pc = 0x154260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154260u;
        // 0x154264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154260:
    ctx->pc = 0x154268u;
}

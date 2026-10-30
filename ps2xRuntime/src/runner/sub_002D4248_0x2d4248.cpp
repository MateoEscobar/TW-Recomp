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

// Function: sub_002D4248
// Address: 0x2d4248 - 0x2d42c0
void sub_002D4248_0x2d4248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4248_0x2d4248");
#endif

    switch (ctx->pc) {
        case 0x2d4298u: goto label_2d4298;
        default: break;
    }

    ctx->pc = 0x2d4248u;

    // 0x2d4248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d424c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d4250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4258: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d425c: 0x9203002d  lbu         $v1, 0x2D($s0)
    ctx->pc = 0x2d425cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2d4260: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4260u;
    {
        const bool branch_taken_0x2d4260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4260u;
        // 0x2d4264: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4260) {
            ctx->pc = 0x2D4278u;
            goto label_2d4278;
        }
    }
    ctx->pc = 0x2D4268u;
    // 0x2d4268: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2d4268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2d426c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2d426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2d4270: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d4270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d4274: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2d4274u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2d4278:
    // 0x2d4278: 0x9202002e  lbu         $v0, 0x2E($s0)
    ctx->pc = 0x2d4278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2d427c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D427Cu;
    {
        const bool branch_taken_0x2d427c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D427Cu;
        // 0x2d4280: 0x2403f7ff  addiu       $v1, $zero, -0x801 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d427c) {
            ctx->pc = 0x2D4290u;
            goto label_2d4290;
        }
    }
    ctx->pc = 0x2D4284u;
    // 0x2d4284: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2d4284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2d4288: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d4288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d428c: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2d428cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2d4290:
    // 0x2d4290: 0xc087612  jal         func_21D848
    ctx->pc = 0x2D4290u;
    SET_GPR_U32(ctx, 31, 0x2D4298u);
    ctx->pc = 0x2D4294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4290u;
    // 0x2d4294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2D4290u, 0x2D4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4298u;
label_2d4298:
    // 0x2d4298: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d429c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d42a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d42a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d42a4: 0xa044011e  sb          $a0, 0x11E($v0)
    ctx->pc = 0x2d42a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d42a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d42a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d42ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d42acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d42b0: 0xa064011f  sb          $a0, 0x11F($v1)
    ctx->pc = 0x2d42b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 287), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d42b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D42B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42B4u;
        // 0x2d42b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D42B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D42BCu;
    // 0x2d42bc: 0x0  nop
    ctx->pc = 0x2d42bcu;
    // NOP
    ctx->pc = 0x2d42c0u;
}

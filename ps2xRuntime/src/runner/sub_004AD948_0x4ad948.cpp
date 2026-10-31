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

// Function: sub_004AD948
// Address: 0x4ad948 - 0x4ad9a0
void sub_004AD948_0x4ad948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD948_0x4ad948");
#endif

    switch (ctx->pc) {
        case 0x4ad948u: goto label_4ad948;
        case 0x4ad94cu: goto label_4ad94c;
        case 0x4ad950u: goto label_4ad950;
        case 0x4ad954u: goto label_4ad954;
        case 0x4ad958u: goto label_4ad958;
        case 0x4ad95cu: goto label_4ad95c;
        case 0x4ad960u: goto label_4ad960;
        case 0x4ad964u: goto label_4ad964;
        case 0x4ad968u: goto label_4ad968;
        case 0x4ad96cu: goto label_4ad96c;
        case 0x4ad970u: goto label_4ad970;
        case 0x4ad974u: goto label_4ad974;
        case 0x4ad978u: goto label_4ad978;
        case 0x4ad97cu: goto label_4ad97c;
        case 0x4ad980u: goto label_4ad980;
        case 0x4ad984u: goto label_4ad984;
        case 0x4ad988u: goto label_4ad988;
        case 0x4ad98cu: goto label_4ad98c;
        case 0x4ad990u: goto label_4ad990;
        case 0x4ad994u: goto label_4ad994;
        case 0x4ad998u: goto label_4ad998;
        case 0x4ad99cu: goto label_4ad99c;
        default: break;
    }

    ctx->pc = 0x4ad948u;

label_4ad948:
    // 0x4ad948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ad94c:
    // 0x4ad94c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4ad950:
    // 0x4ad950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ad954:
    // 0x4ad954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ad958:
    // 0x4ad958: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ad958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ad95c:
    // 0x4ad95c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4ad95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ad960:
    // 0x4ad960: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x4ad960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_4ad964:
    // 0x4ad964: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4ad964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4ad968:
    // 0x4ad968: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4ad968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4ad96c:
    // 0x4ad96c: 0x40f809  jalr        $v0
label_4ad970:
    if (ctx->pc == 0x4AD970u) {
        ctx->pc = 0x4AD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD96Cu;
        // 0x4ad970: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD974u;
        goto label_4ad974;
    }
    ctx->pc = 0x4AD96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AD974u);
        ctx->pc = 0x4AD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD96Cu;
        // 0x4ad970: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD96Cu, 0x4AD974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AD974u;
label_4ad974:
    // 0x4ad974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4ad978:
    if (ctx->pc == 0x4AD978u) {
        ctx->pc = 0x4AD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD974u;
        // 0x4ad978: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD97Cu;
        goto label_4ad97c;
    }
    ctx->pc = 0x4AD974u;
    {
        const bool branch_taken_0x4ad974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD974u;
        // 0x4ad978: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad974) {
            ctx->pc = 0x4AD990u;
            goto label_4ad990;
        }
    }
    ctx->pc = 0x4AD97Cu;
label_4ad97c:
    // 0x4ad97c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ad980:
    // 0x4ad980: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
label_4ad984:
    // 0x4ad984: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ad984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4ad988:
    // 0x4ad988: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ad988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ad98c:
    // 0x4ad98c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad990:
    // 0x4ad990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ad990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ad994:
    // 0x4ad994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ad998:
    // 0x4ad998: 0x3e00008  jr          $ra
label_4ad99c:
    if (ctx->pc == 0x4AD99Cu) {
        ctx->pc = 0x4AD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD998u;
        // 0x4ad99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD9A0u;
        goto label_fallthrough_0x4ad998;
    }
    ctx->pc = 0x4AD998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD998u;
        // 0x4ad99c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ad998:
    ctx->pc = 0x4AD9A0u;
}

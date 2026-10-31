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

// Function: sub_001D1108
// Address: 0x1d1108 - 0x1d1178
void sub_001D1108_0x1d1108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1108_0x1d1108");
#endif

    switch (ctx->pc) {
        case 0x1d1108u: goto label_1d1108;
        case 0x1d110cu: goto label_1d110c;
        case 0x1d1110u: goto label_1d1110;
        case 0x1d1114u: goto label_1d1114;
        case 0x1d1118u: goto label_1d1118;
        case 0x1d111cu: goto label_1d111c;
        case 0x1d1120u: goto label_1d1120;
        case 0x1d1124u: goto label_1d1124;
        case 0x1d1128u: goto label_1d1128;
        case 0x1d112cu: goto label_1d112c;
        case 0x1d1130u: goto label_1d1130;
        case 0x1d1134u: goto label_1d1134;
        case 0x1d1138u: goto label_1d1138;
        case 0x1d113cu: goto label_1d113c;
        case 0x1d1140u: goto label_1d1140;
        case 0x1d1144u: goto label_1d1144;
        case 0x1d1148u: goto label_1d1148;
        case 0x1d114cu: goto label_1d114c;
        case 0x1d1150u: goto label_1d1150;
        case 0x1d1154u: goto label_1d1154;
        case 0x1d1158u: goto label_1d1158;
        case 0x1d115cu: goto label_1d115c;
        case 0x1d1160u: goto label_1d1160;
        case 0x1d1164u: goto label_1d1164;
        case 0x1d1168u: goto label_1d1168;
        case 0x1d116cu: goto label_1d116c;
        case 0x1d1170u: goto label_1d1170;
        case 0x1d1174u: goto label_1d1174;
        default: break;
    }

    ctx->pc = 0x1d1108u;

label_1d1108:
    // 0x1d1108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d110c:
    // 0x1d110c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d110cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d1110:
    // 0x1d1110: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d1110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d1114:
    // 0x1d1114: 0x24900450  addiu       $s0, $a0, 0x450
    ctx->pc = 0x1d1114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1104));
label_1d1118:
    // 0x1d1118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d111c:
    // 0x1d111c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d111cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1120:
    // 0x1d1120: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d1120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d1124:
    // 0x1d1124: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d1124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1128:
    // 0x1d1128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d112c:
    // 0x1d112c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d112cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d1130:
    // 0x1d1130: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d1130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1134:
    // 0x1d1134: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d1134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1138:
    // 0x1d1138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d113c:
    // 0x1d113c: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1d113cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1d1140:
    // 0x1d1140: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1d1144:
    // 0x1d1144: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d1144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1d1148:
    // 0x1d1148: 0x40f809  jalr        $v0
label_1d114c:
    if (ctx->pc == 0x1D114Cu) {
        ctx->pc = 0x1D114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1148u;
        // 0x1d114c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1150u;
        goto label_1d1150;
    }
    ctx->pc = 0x1D1148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1150u);
        ctx->pc = 0x1D114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1148u;
        // 0x1d114c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1148u, 0x1D1150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1150u;
label_1d1150:
    // 0x1d1150: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1d1150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d1154:
    // 0x1d1154: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1d1158:
    if (ctx->pc == 0x1D1158u) {
        ctx->pc = 0x1D1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1154u;
        // 0x1d1158: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D115Cu;
        goto label_1d115c;
    }
    ctx->pc = 0x1D1154u;
    {
        const bool branch_taken_0x1d1154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1154u;
        // 0x1d1158: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1154) {
            ctx->pc = 0x1D1130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1130;
        }
    }
    ctx->pc = 0x1D115Cu;
label_1d115c:
    // 0x1d115c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d115cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1160:
    // 0x1d1160: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d1160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1164:
    // 0x1d1164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1168:
    // 0x1d1168: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d1168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d116c:
    // 0x1d116c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d116cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1170:
    // 0x1d1170: 0x3e00008  jr          $ra
label_1d1174:
    if (ctx->pc == 0x1D1174u) {
        ctx->pc = 0x1D1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1170u;
        // 0x1d1174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1178u;
        goto label_fallthrough_0x1d1170;
    }
    ctx->pc = 0x1D1170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1170u;
        // 0x1d1174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d1170:
    ctx->pc = 0x1D1178u;
}

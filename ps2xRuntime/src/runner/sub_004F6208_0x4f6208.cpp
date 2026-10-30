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

// Function: sub_004F6208
// Address: 0x4f6208 - 0x4f6250
void sub_004F6208_0x4f6208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6208_0x4f6208");
#endif

    switch (ctx->pc) {
        case 0x4f6208u: goto label_4f6208;
        case 0x4f620cu: goto label_4f620c;
        case 0x4f6210u: goto label_4f6210;
        case 0x4f6214u: goto label_4f6214;
        case 0x4f6218u: goto label_4f6218;
        case 0x4f621cu: goto label_4f621c;
        case 0x4f6220u: goto label_4f6220;
        case 0x4f6224u: goto label_4f6224;
        case 0x4f6228u: goto label_4f6228;
        case 0x4f622cu: goto label_4f622c;
        case 0x4f6230u: goto label_4f6230;
        case 0x4f6234u: goto label_4f6234;
        case 0x4f6238u: goto label_4f6238;
        case 0x4f623cu: goto label_4f623c;
        case 0x4f6240u: goto label_4f6240;
        case 0x4f6244u: goto label_4f6244;
        case 0x4f6248u: goto label_4f6248;
        case 0x4f624cu: goto label_4f624c;
        default: break;
    }

    ctx->pc = 0x4f6208u;

label_4f6208:
    // 0x4f6208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f6208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f620c:
    // 0x4f620c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4f620cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f6210:
    // 0x4f6210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f6210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f6214:
    // 0x4f6214: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4f6218:
    if (ctx->pc == 0x4F6218u) {
        ctx->pc = 0x4F6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6214u;
        // 0x4f6218: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F621Cu;
        goto label_4f621c;
    }
    ctx->pc = 0x4F6214u;
    {
        const bool branch_taken_0x4f6214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6214u;
        // 0x4f6218: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6214) {
            ctx->pc = 0x4F6240u;
            goto label_4f6240;
        }
    }
    ctx->pc = 0x4F621Cu;
label_4f621c:
    // 0x4f621c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f6220:
    // 0x4f6220: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4f6220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f6224:
    // 0x4f6224: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f6224u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f6228:
    // 0x4f6228: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4f6228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f622c:
    // 0x4f622c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f622cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f6230:
    // 0x4f6230: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f6230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f6234:
    // 0x4f6234: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f6234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f6238:
    // 0x4f6238: 0x60f809  jalr        $v1
label_4f623c:
    if (ctx->pc == 0x4F623Cu) {
        ctx->pc = 0x4F623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6238u;
        // 0x4f623c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6240u;
        goto label_4f6240;
    }
    ctx->pc = 0x4F6238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F6240u);
        ctx->pc = 0x4F623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6238u;
        // 0x4f623c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6238u, 0x4F6240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F6240u;
label_4f6240:
    // 0x4f6240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f6240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f6244:
    // 0x4f6244: 0x3e00008  jr          $ra
label_4f6248:
    if (ctx->pc == 0x4F6248u) {
        ctx->pc = 0x4F6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6244u;
        // 0x4f6248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F624Cu;
        goto label_4f624c;
    }
    ctx->pc = 0x4F6244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6244u;
        // 0x4f6248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F624Cu;
label_4f624c:
    // 0x4f624c: 0x0  nop
    ctx->pc = 0x4f624cu;
    // NOP
    ctx->pc = 0x4f6250u;
}

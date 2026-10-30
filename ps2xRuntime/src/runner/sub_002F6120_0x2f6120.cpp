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

// Function: sub_002F6120
// Address: 0x2f6120 - 0x2f6180
void sub_002F6120_0x2f6120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6120_0x2f6120");
#endif

    switch (ctx->pc) {
        case 0x2f6120u: goto label_2f6120;
        case 0x2f6124u: goto label_2f6124;
        case 0x2f6128u: goto label_2f6128;
        case 0x2f612cu: goto label_2f612c;
        case 0x2f6130u: goto label_2f6130;
        case 0x2f6134u: goto label_2f6134;
        case 0x2f6138u: goto label_2f6138;
        case 0x2f613cu: goto label_2f613c;
        case 0x2f6140u: goto label_2f6140;
        case 0x2f6144u: goto label_2f6144;
        case 0x2f6148u: goto label_2f6148;
        case 0x2f614cu: goto label_2f614c;
        case 0x2f6150u: goto label_2f6150;
        case 0x2f6154u: goto label_2f6154;
        case 0x2f6158u: goto label_2f6158;
        case 0x2f615cu: goto label_2f615c;
        case 0x2f6160u: goto label_2f6160;
        case 0x2f6164u: goto label_2f6164;
        case 0x2f6168u: goto label_2f6168;
        case 0x2f616cu: goto label_2f616c;
        case 0x2f6170u: goto label_2f6170;
        case 0x2f6174u: goto label_2f6174;
        case 0x2f6178u: goto label_2f6178;
        case 0x2f617cu: goto label_2f617c;
        default: break;
    }

    ctx->pc = 0x2f6120u;

label_2f6120:
    // 0x2f6120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f6124:
    // 0x2f6124: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f6124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f6128:
    // 0x2f6128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f612c:
    // 0x2f612c: 0x24421250  addiu       $v0, $v0, 0x1250
    ctx->pc = 0x2f612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4688));
label_2f6130:
    // 0x2f6130: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2f6130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2f6134:
    // 0x2f6134: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2f6134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2f6138:
    // 0x2f6138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f613c:
    // 0x2f613c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2f613cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6140:
    // 0x2f6140: 0xaca20208  sw          $v0, 0x208($a1)
    ctx->pc = 0x2f6140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 520), GPR_U32(ctx, 2));
label_2f6144:
    // 0x2f6144: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f6144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6148:
    // 0x2f6148: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2f6148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2f614c:
    // 0x2f614c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6150:
    // 0x2f6150: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2f6150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2f6154:
    // 0x2f6154: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f6154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f6158:
    // 0x2f6158: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f6158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2f615c:
    // 0x2f615c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2f615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f6160:
    // 0x2f6160: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x2f6160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2f6164:
    // 0x2f6164: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2f6164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2f6168:
    // 0x2f6168: 0xa0f809  jalr        $a1
label_2f616c:
    if (ctx->pc == 0x2F616Cu) {
        ctx->pc = 0x2F616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6168u;
        // 0x2f616c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6170u;
        goto label_2f6170;
    }
    ctx->pc = 0x2F6168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F6170u);
        ctx->pc = 0x2F616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6168u;
        // 0x2f616c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6168u, 0x2F6170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6170u;
label_2f6170:
    // 0x2f6170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6174:
    // 0x2f6174: 0x3e00008  jr          $ra
label_2f6178:
    if (ctx->pc == 0x2F6178u) {
        ctx->pc = 0x2F6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6174u;
        // 0x2f6178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F617Cu;
        goto label_2f617c;
    }
    ctx->pc = 0x2F6174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6174u;
        // 0x2f6178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F617Cu;
label_2f617c:
    // 0x2f617c: 0x0  nop
    ctx->pc = 0x2f617cu;
    // NOP
    ctx->pc = 0x2f6180u;
}

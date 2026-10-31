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

// Function: sub_0047BA70
// Address: 0x47ba70 - 0x47ba9c
void sub_0047BA70_0x47ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BA70_0x47ba70");
#endif

    switch (ctx->pc) {
        case 0x47ba70u: goto label_47ba70;
        case 0x47ba74u: goto label_47ba74;
        case 0x47ba78u: goto label_47ba78;
        case 0x47ba7cu: goto label_47ba7c;
        case 0x47ba80u: goto label_47ba80;
        case 0x47ba84u: goto label_47ba84;
        case 0x47ba88u: goto label_47ba88;
        case 0x47ba8cu: goto label_47ba8c;
        case 0x47ba90u: goto label_47ba90;
        case 0x47ba94u: goto label_47ba94;
        case 0x47ba98u: goto label_47ba98;
        default: break;
    }

    ctx->pc = 0x47ba70u;

label_47ba70:
    // 0x47ba70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x47ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47ba74:
    // 0x47ba74: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x47ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_47ba78:
    // 0x47ba78: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x47ba78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_47ba7c:
    // 0x47ba7c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_47ba80:
    if (ctx->pc == 0x47BA80u) {
        ctx->pc = 0x47BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BA7Cu;
        // 0x47ba80: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47BA84u;
        goto label_47ba84;
    }
    ctx->pc = 0x47BA7Cu;
    {
        const bool branch_taken_0x47ba7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BA7Cu;
        // 0x47ba80: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ba7c) {
            ctx->pc = 0x47BAACu;
            return;
        }
    }
    ctx->pc = 0x47BA84u;
label_47ba84:
    // 0x47ba84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x47ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_47ba88:
    // 0x47ba88: 0x2442ef20  addiu       $v0, $v0, -0x10E0
    ctx->pc = 0x47ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962976));
label_47ba8c:
    // 0x47ba8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47ba90:
    // 0x47ba90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47ba94:
    // 0x47ba94: 0x800008  jr          $a0
label_47ba98:
    if (ctx->pc == 0x47BA98u) {
        ctx->pc = 0x47BA9Cu;
        goto label_fallthrough_0x47ba94;
    }
    ctx->pc = 0x47BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BA94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x47ba94:
    ctx->pc = 0x47BA9Cu;
}

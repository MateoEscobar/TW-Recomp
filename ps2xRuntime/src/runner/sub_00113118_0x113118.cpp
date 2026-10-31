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

// Function: sub_00113118
// Address: 0x113118 - 0x113188
void sub_00113118_0x113118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113118_0x113118");
#endif

    switch (ctx->pc) {
        case 0x113118u: goto label_113118;
        case 0x11311cu: goto label_11311c;
        case 0x113120u: goto label_113120;
        case 0x113124u: goto label_113124;
        case 0x113128u: goto label_113128;
        case 0x11312cu: goto label_11312c;
        case 0x113130u: goto label_113130;
        case 0x113134u: goto label_113134;
        case 0x113138u: goto label_113138;
        case 0x11313cu: goto label_11313c;
        case 0x113140u: goto label_113140;
        case 0x113144u: goto label_113144;
        case 0x113148u: goto label_113148;
        case 0x11314cu: goto label_11314c;
        case 0x113150u: goto label_113150;
        case 0x113154u: goto label_113154;
        case 0x113158u: goto label_113158;
        case 0x11315cu: goto label_11315c;
        case 0x113160u: goto label_113160;
        case 0x113164u: goto label_113164;
        case 0x113168u: goto label_113168;
        case 0x11316cu: goto label_11316c;
        case 0x113170u: goto label_113170;
        case 0x113174u: goto label_113174;
        case 0x113178u: goto label_113178;
        case 0x11317cu: goto label_11317c;
        case 0x113180u: goto label_113180;
        case 0x113184u: goto label_113184;
        default: break;
    }

    ctx->pc = 0x113118u;

label_113118:
    // 0x113118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11311c:
    // 0x11311c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11311cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113120:
    // 0x113120: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x113120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_113124:
    // 0x113124: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x113124u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_113128:
    // 0x113128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11312c:
    // 0x11312c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11312cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_113130:
    // 0x113130: 0x8e06bce4  lw          $a2, -0x431C($s0)
    ctx->pc = 0x113130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950116)));
label_113134:
    // 0x113134: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x113134u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_113138:
    // 0x113138: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x113138u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_11313c:
    // 0x11313c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_113140:
    // 0x113140: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x113140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_113144:
    // 0x113144: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x113144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_113148:
    // 0x113148: 0x60f809  jalr        $v1
label_11314c:
    if (ctx->pc == 0x11314Cu) {
        ctx->pc = 0x11314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113148u;
        // 0x11314c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113150u;
        goto label_113150;
    }
    ctx->pc = 0x113148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113150u);
        ctx->pc = 0x11314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113148u;
        // 0x11314c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113148u, 0x113150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113150u;
label_113150:
    // 0x113150: 0x8e06bce4  lw          $a2, -0x431C($s0)
    ctx->pc = 0x113150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950116)));
label_113154:
    // 0x113154: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113154u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_113158:
    // 0x113158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11315c:
    // 0x11315c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11315cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_113160:
    // 0x113160: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x113160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_113164:
    // 0x113164: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x113164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_113168:
    // 0x113168: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x113168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_11316c:
    // 0x11316c: 0x60f809  jalr        $v1
label_113170:
    if (ctx->pc == 0x113170u) {
        ctx->pc = 0x113170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11316Cu;
        // 0x113170: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113174u;
        goto label_113174;
    }
    ctx->pc = 0x11316Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113174u);
        ctx->pc = 0x113170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11316Cu;
        // 0x113170: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11316Cu, 0x113174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113174u;
label_113174:
    // 0x113174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x113174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_113178:
    // 0x113178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11317c:
    // 0x11317c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x11317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_113180:
    // 0x113180: 0x3e00008  jr          $ra
label_113184:
    if (ctx->pc == 0x113184u) {
        ctx->pc = 0x113184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113180u;
        // 0x113184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113188u;
        goto label_fallthrough_0x113180;
    }
    ctx->pc = 0x113180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113180u;
        // 0x113184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x113180:
    ctx->pc = 0x113188u;
}

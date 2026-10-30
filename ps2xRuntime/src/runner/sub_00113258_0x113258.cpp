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

// Function: sub_00113258
// Address: 0x113258 - 0x113340
void sub_00113258_0x113258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113258_0x113258");
#endif

    switch (ctx->pc) {
        case 0x113288u: goto label_113288;
        case 0x113290u: goto label_113290;
        case 0x1132acu: goto label_1132ac;
        case 0x1132bcu: goto label_1132bc;
        case 0x11330cu: goto label_11330c;
        default: break;
    }

    ctx->pc = 0x113258u;

    // 0x113258: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11325c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x113260: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x113260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x113264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x113264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113268: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x113268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11326c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113270: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x113270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x113274: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x113274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x113278: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x113278u;
    {
        const bool branch_taken_0x113278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113278u;
        // 0x11327c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113278) {
            ctx->pc = 0x113320u;
            goto label_113320;
        }
    }
    ctx->pc = 0x113280u;
    // 0x113280: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x113280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x113284: 0x0  nop
    ctx->pc = 0x113284u;
    // NOP
label_113288:
    // 0x113288: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x113288u;
    SET_GPR_U32(ctx, 31, 0x113290u);
    ctx->pc = 0x11328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113288u;
    // 0x11328c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x113288u, 0x113290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113290u;
label_113290:
    // 0x113290: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x113290u;
    {
        const bool branch_taken_0x113290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113290) {
            ctx->pc = 0x113294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113290u;
            // 0x113294: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113318u;
            goto label_113318;
        }
    }
    ctx->pc = 0x113298u;
    // 0x113298: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x113298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x11329c: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x11329Cu;
    {
        const bool branch_taken_0x11329c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11329c) {
            ctx->pc = 0x1132A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11329Cu;
            // 0x1132a0: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113318u;
            goto label_113318;
        }
    }
    ctx->pc = 0x1132A4u;
    // 0x1132a4: 0xc043ca8  jal         func_10F2A0
    ctx->pc = 0x1132A4u;
    SET_GPR_U32(ctx, 31, 0x1132ACu);
    ctx->pc = 0x1132A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132A4u;
    // 0x1132a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x1132A4u, 0x1132ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132ACu;
label_1132ac:
    // 0x1132ac: 0x5053001a  beql        $v0, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1132ACu;
    {
        const bool branch_taken_0x1132ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1132ac) {
            ctx->pc = 0x1132B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132ACu;
            // 0x1132b0: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113318u;
            goto label_113318;
        }
    }
    ctx->pc = 0x1132B4u;
    // 0x1132b4: 0xc043c9e  jal         func_10F278
    ctx->pc = 0x1132B4u;
    SET_GPR_U32(ctx, 31, 0x1132BCu);
    ctx->pc = 0x1132B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132B4u;
    // 0x1132b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F278u, 0x1132B4u, 0x1132BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132BCu;
label_1132bc:
    // 0x1132bc: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1132bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1132c0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1132C0u;
    {
        const bool branch_taken_0x1132c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132c0) {
            ctx->pc = 0x1132C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132C0u;
            // 0x1132c4: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113318u;
            goto label_113318;
        }
    }
    ctx->pc = 0x1132C8u;
    // 0x1132c8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x1132c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1132cc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1132ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1132d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1132d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1132d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1132d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1132d8: 0x0  nop
    ctx->pc = 0x1132d8u;
    // NOP
    // 0x1132dc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1132dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1132e0: 0x0  nop
    ctx->pc = 0x1132e0u;
    // NOP
    // 0x1132e4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1132E4u;
    {
        const bool branch_taken_0x1132e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1132E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132E4u;
        // 0x1132e8: 0xc601005c  lwc1        $f1, 0x5C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132e4) {
            ctx->pc = 0x113314u;
            goto label_113314;
        }
    }
    ctx->pc = 0x1132ECu;
    // 0x1132ec: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1132ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1132f0: 0x0  nop
    ctx->pc = 0x1132f0u;
    // NOP
    // 0x1132f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1132F4u;
    {
        const bool branch_taken_0x1132f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1132F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132F4u;
        // 0x1132f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132f4) {
            ctx->pc = 0x113314u;
            goto label_113314;
        }
    }
    ctx->pc = 0x1132FCu;
    // 0x1132fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1132fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113300: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x113300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x113304: 0xc044b18  jal         func_112C60
    ctx->pc = 0x113304u;
    SET_GPR_U32(ctx, 31, 0x11330Cu);
    ctx->pc = 0x113308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113304u;
    // 0x113308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112C60u, 0x113304u, 0x11330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11330Cu;
label_11330c:
    // 0x11330c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11330Cu;
    {
        const bool branch_taken_0x11330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11330c) {
            ctx->pc = 0x113318u;
            goto label_113318;
        }
    }
    ctx->pc = 0x113314u;
label_113314:
    // 0x113314: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x113314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_113318:
    // 0x113318: 0x1600ffdb  bnez        $s0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x113318u;
    {
        const bool branch_taken_0x113318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113318u;
        // 0x11331c: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113318) {
            ctx->pc = 0x113288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113288;
        }
    }
    ctx->pc = 0x113320u;
label_113320:
    // 0x113320: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x113320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113324: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x113324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11332c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11332cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113334: 0x3e00008  jr          $ra
    ctx->pc = 0x113334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113334u;
        // 0x113338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11333Cu;
    // 0x11333c: 0x0  nop
    ctx->pc = 0x11333cu;
    // NOP
    ctx->pc = 0x113340u;
}

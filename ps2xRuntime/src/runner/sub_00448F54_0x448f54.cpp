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

// Function: sub_00448F54
// Address: 0x448f54 - 0x448ff8
void sub_00448F54_0x448f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448F54_0x448f54");
#endif

    switch (ctx->pc) {
        case 0x448f70u: goto label_448f70;
        default: break;
    }

    ctx->pc = 0x448f54u;

    // 0x448f54: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x448f54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x448f58: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x448f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x448f5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x448f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x448f60: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x448f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x448f64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x448f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x448f68: 0x8112a3a  j           func_44A8E8
    ctx->pc = 0x448F68u;
    ctx->pc = 0x448F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448F68u;
    // 0x448f6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A8E8u, 0x448F68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x448F70u;
label_448f70:
    // 0x448f70: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x448f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
    // 0x448f74: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x448F74u;
    {
        const bool branch_taken_0x448f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x448F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F74u;
        // 0x448f78: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448f74) {
            ctx->pc = 0x448FB4u;
            goto label_448fb4;
        }
    }
    ctx->pc = 0x448F7Cu;
    // 0x448f7c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x448f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x448f80: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x448f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
    // 0x448f84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x448f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x448f88: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x448f88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x448f8c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x448f8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x448f90: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x448f90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x448f94: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x448f94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x448f98: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x448f98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x448f9c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x448f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x448fa0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x448fa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x448fa4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x448fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x448fa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x448fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x448fac: 0x8112a3a  j           func_44A8E8
    ctx->pc = 0x448FACu;
    ctx->pc = 0x448FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448FACu;
    // 0x448fb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A8E8u, 0x448FACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x448FB4u;
label_448fb4:
    // 0x448fb4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x448fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x448fb8: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x448fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
    // 0x448fbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x448fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x448fc0: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x448fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
    // 0x448fc4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x448fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x448fc8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x448fc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x448fcc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x448fccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x448fd0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x448fd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x448fd4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x448fd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x448fd8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x448fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x448fdc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x448fdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x448fe0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x448fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x448fe4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x448fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x448fe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x448fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x448fec: 0x81129fe  j           func_44A7F8
    ctx->pc = 0x448FECu;
    ctx->pc = 0x448FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448FECu;
    // 0x448ff0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A7F8u, 0x448FECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x448FF4u;
    // 0x448ff4: 0x0  nop
    ctx->pc = 0x448ff4u;
    // NOP
    ctx->pc = 0x448ff8u;
}

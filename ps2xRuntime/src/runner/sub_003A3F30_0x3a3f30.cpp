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

// Function: sub_003A3F30
// Address: 0x3a3f30 - 0x3a3ff8
void sub_003A3F30_0x3a3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3F30_0x3a3f30");
#endif

    switch (ctx->pc) {
        case 0x3a3f30u: goto label_3a3f30;
        case 0x3a3f34u: goto label_3a3f34;
        case 0x3a3f38u: goto label_3a3f38;
        case 0x3a3f3cu: goto label_3a3f3c;
        case 0x3a3f40u: goto label_3a3f40;
        case 0x3a3f44u: goto label_3a3f44;
        case 0x3a3f48u: goto label_3a3f48;
        case 0x3a3f4cu: goto label_3a3f4c;
        case 0x3a3f50u: goto label_3a3f50;
        case 0x3a3f54u: goto label_3a3f54;
        case 0x3a3f58u: goto label_3a3f58;
        case 0x3a3f5cu: goto label_3a3f5c;
        case 0x3a3f60u: goto label_3a3f60;
        case 0x3a3f64u: goto label_3a3f64;
        case 0x3a3f68u: goto label_3a3f68;
        case 0x3a3f6cu: goto label_3a3f6c;
        case 0x3a3f70u: goto label_3a3f70;
        case 0x3a3f74u: goto label_3a3f74;
        case 0x3a3f78u: goto label_3a3f78;
        case 0x3a3f7cu: goto label_3a3f7c;
        case 0x3a3f80u: goto label_3a3f80;
        case 0x3a3f84u: goto label_3a3f84;
        case 0x3a3f88u: goto label_3a3f88;
        case 0x3a3f8cu: goto label_3a3f8c;
        case 0x3a3f90u: goto label_3a3f90;
        case 0x3a3f94u: goto label_3a3f94;
        case 0x3a3f98u: goto label_3a3f98;
        case 0x3a3f9cu: goto label_3a3f9c;
        case 0x3a3fa0u: goto label_3a3fa0;
        case 0x3a3fa4u: goto label_3a3fa4;
        case 0x3a3fa8u: goto label_3a3fa8;
        case 0x3a3facu: goto label_3a3fac;
        case 0x3a3fb0u: goto label_3a3fb0;
        case 0x3a3fb4u: goto label_3a3fb4;
        case 0x3a3fb8u: goto label_3a3fb8;
        case 0x3a3fbcu: goto label_3a3fbc;
        case 0x3a3fc0u: goto label_3a3fc0;
        case 0x3a3fc4u: goto label_3a3fc4;
        case 0x3a3fc8u: goto label_3a3fc8;
        case 0x3a3fccu: goto label_3a3fcc;
        case 0x3a3fd0u: goto label_3a3fd0;
        case 0x3a3fd4u: goto label_3a3fd4;
        case 0x3a3fd8u: goto label_3a3fd8;
        case 0x3a3fdcu: goto label_3a3fdc;
        case 0x3a3fe0u: goto label_3a3fe0;
        case 0x3a3fe4u: goto label_3a3fe4;
        case 0x3a3fe8u: goto label_3a3fe8;
        case 0x3a3fecu: goto label_3a3fec;
        case 0x3a3ff0u: goto label_3a3ff0;
        case 0x3a3ff4u: goto label_3a3ff4;
        default: break;
    }

    ctx->pc = 0x3a3f30u;

label_3a3f30:
    // 0x3a3f30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3a3f34:
    // 0x3a3f34: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3a3f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3a3f38:
    // 0x3a3f38: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3a3f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3a3f3c:
    // 0x3a3f3c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3a3f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f40:
    // 0x3a3f40: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3a3f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3a3f44:
    // 0x3a3f44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a3f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f48:
    // 0x3a3f48: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3a3f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3a3f4c:
    // 0x3a3f4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a3f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f50:
    // 0x3a3f50: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_3a3f54:
    if (ctx->pc == 0x3A3F54u) {
        ctx->pc = 0x3A3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F50u;
        // 0x3a3f54: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F58u;
        goto label_3a3f58;
    }
    ctx->pc = 0x3A3F50u;
    {
        const bool branch_taken_0x3a3f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F50u;
        // 0x3a3f54: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f50) {
            ctx->pc = 0x3A3FBCu;
            goto label_3a3fbc;
        }
    }
    ctx->pc = 0x3A3F58u;
label_3a3f58:
    // 0x3a3f58: 0xc08a61a  jal         func_229868
label_3a3f5c:
    if (ctx->pc == 0x3A3F5Cu) {
        ctx->pc = 0x3A3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F58u;
        // 0x3a3f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F60u;
        goto label_3a3f60;
    }
    ctx->pc = 0x3A3F58u;
    SET_GPR_U32(ctx, 31, 0x3A3F60u);
    ctx->pc = 0x3A3F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3F58u;
    // 0x3a3f5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3A3F58u, 0x3A3F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3F60u;
label_3a3f60:
    // 0x3a3f60: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3a3f64:
    if (ctx->pc == 0x3A3F64u) {
        ctx->pc = 0x3A3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F60u;
        // 0x3a3f64: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F68u;
        goto label_3a3f68;
    }
    ctx->pc = 0x3A3F60u;
    {
        const bool branch_taken_0x3a3f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F60u;
        // 0x3a3f64: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f60) {
            ctx->pc = 0x3A3FC0u;
            goto label_3a3fc0;
        }
    }
    ctx->pc = 0x3A3F68u;
label_3a3f68:
    // 0x3a3f68: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x3a3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_3a3f6c:
    // 0x3a3f6c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3a3f70:
    if (ctx->pc == 0x3A3F70u) {
        ctx->pc = 0x3A3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F6Cu;
        // 0x3a3f70: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F74u;
        goto label_3a3f74;
    }
    ctx->pc = 0x3A3F6Cu;
    {
        const bool branch_taken_0x3a3f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F6Cu;
        // 0x3a3f70: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3f6c) {
            ctx->pc = 0x3A3FC0u;
            goto label_3a3fc0;
        }
    }
    ctx->pc = 0x3A3F74u;
label_3a3f74:
    // 0x3a3f74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a3f78:
    // 0x3a3f78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a3f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f7c:
    // 0x3a3f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a3f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f80:
    // 0x3a3f80: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x3a3f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_3a3f84:
    // 0x3a3f84: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3a3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_3a3f88:
    // 0x3a3f88: 0x40f809  jalr        $v0
label_3a3f8c:
    if (ctx->pc == 0x3A3F8Cu) {
        ctx->pc = 0x3A3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F88u;
        // 0x3a3f8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3F90u;
        goto label_3a3f90;
    }
    ctx->pc = 0x3A3F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A3F90u);
        ctx->pc = 0x3A3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3F88u;
        // 0x3a3f8c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3F88u, 0x3A3F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3F90u;
label_3a3f90:
    // 0x3a3f90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a3f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a3f94:
    // 0x3a3f94: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3a3f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a3f98:
    // 0x3a3f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3f9c:
    // 0x3a3f9c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x3a3f9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_3a3fa0:
    // 0x3a3fa0: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x3a3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_3a3fa4:
    // 0x3a3fa4: 0x40f809  jalr        $v0
label_3a3fa8:
    if (ctx->pc == 0x3A3FA8u) {
        ctx->pc = 0x3A3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FA4u;
        // 0x3a3fa8: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FACu;
        goto label_3a3fac;
    }
    ctx->pc = 0x3A3FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A3FACu);
        ctx->pc = 0x3A3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FA4u;
        // 0x3a3fa8: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3FA4u, 0x3A3FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3FACu;
label_3a3fac:
    // 0x3a3fac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a3facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3fb0:
    // 0x3a3fb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a3fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3fb4:
    // 0x3a3fb4: 0xc0cd66c  jal         func_3359B0
label_3a3fb8:
    if (ctx->pc == 0x3A3FB8u) {
        ctx->pc = 0x3A3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FB4u;
        // 0x3a3fb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FBCu;
        goto label_3a3fbc;
    }
    ctx->pc = 0x3A3FB4u;
    SET_GPR_U32(ctx, 31, 0x3A3FBCu);
    ctx->pc = 0x3A3FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3FB4u;
    // 0x3a3fb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3359B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3359B0u, 0x3A3FB4u, 0x3A3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3FBCu;
label_3a3fbc:
    // 0x3a3fbc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a3fbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3fc0:
    // 0x3a3fc0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a3fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a3fc4:
    // 0x3a3fc4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3a3fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a3fc8:
    // 0x3a3fc8: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x3a3fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
label_3a3fcc:
    // 0x3a3fcc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3a3fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a3fd0:
    // 0x3a3fd0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3a3fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a3fd4:
    // 0x3a3fd4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3a3fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a3fd8:
    // 0x3a3fd8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a3fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a3fdc:
    // 0x3a3fdc: 0x3e00008  jr          $ra
label_3a3fe0:
    if (ctx->pc == 0x3A3FE0u) {
        ctx->pc = 0x3A3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FDCu;
        // 0x3a3fe0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FE4u;
        goto label_3a3fe4;
    }
    ctx->pc = 0x3A3FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FDCu;
        // 0x3a3fe0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3FE4u;
label_3a3fe4:
    // 0x3a3fe4: 0x0  nop
    ctx->pc = 0x3a3fe4u;
    // NOP
label_3a3fe8:
    // 0x3a3fe8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3a3fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3a3fec:
    // 0x3a3fec: 0x0  nop
    ctx->pc = 0x3a3fecu;
    // NOP
label_3a3ff0:
    // 0x3a3ff0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a3ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a3ff4:
    // 0x3a3ff4: 0x0  nop
    ctx->pc = 0x3a3ff4u;
    // NOP
    ctx->pc = 0x3a3ff8u;
}

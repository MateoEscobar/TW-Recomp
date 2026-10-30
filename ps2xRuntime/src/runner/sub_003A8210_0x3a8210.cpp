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

// Function: sub_003A8210
// Address: 0x3a8210 - 0x3a8340
void sub_003A8210_0x3a8210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8210_0x3a8210");
#endif

    switch (ctx->pc) {
        case 0x3a8298u: goto label_3a8298;
        case 0x3a82c8u: goto label_3a82c8;
        case 0x3a82d4u: goto label_3a82d4;
        case 0x3a82e0u: goto label_3a82e0;
        case 0x3a82ecu: goto label_3a82ec;
        case 0x3a82f8u: goto label_3a82f8;
        case 0x3a8304u: goto label_3a8304;
        case 0x3a8310u: goto label_3a8310;
        default: break;
    }

    ctx->pc = 0x3a8210u;

    // 0x3a8210: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3a8210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3a8214: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x3a8214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3a8218: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3a8218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3a821c: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x3a821cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8220: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3a8220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3a8224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a8224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8228: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3a8228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3a822c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3a822cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a8230: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3a8230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3a8234: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3a8234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a8238: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3a8238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3a823c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3a823cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3a8240: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3a8240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3a8244: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x3a8244u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a8248: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3a8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3a824c: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x3a824cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a8250: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a8250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a8254: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x3a8254u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a8258: 0x79240000  lq          $a0, 0x0($t1)
    ctx->pc = 0x3a8258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3a825c: 0x78ac0000  lq          $t4, 0x0($a1)
    ctx->pc = 0x3a825cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a8260: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x3a8260u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a8264: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x3a8264u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a8268: 0x79070000  lq          $a3, 0x0($t0)
    ctx->pc = 0x3a8268u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a826c: 0x79620000  lq          $v0, 0x0($t3)
    ctx->pc = 0x3a826cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3a8270: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x3a8270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x3a8274: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x3a8274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x3a8278: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x3a8278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a827c: 0x7fac0000  sq          $t4, 0x0($sp)
    ctx->pc = 0x3a827cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 12));
    // 0x3a8280: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a8280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8284: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x3a8284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
    // 0x3a8288: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x3a8288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    // 0x3a828c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3a828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3a8290: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3a8294: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a8294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3a8298:
    // 0x3a8298: 0x0  nop
    ctx->pc = 0x3a8298u;
    // NOP
    // 0x3a829c: 0x0  nop
    ctx->pc = 0x3a829cu;
    // NOP
    // 0x3a82a0: 0x0  nop
    ctx->pc = 0x3a82a0u;
    // NOP
    // 0x3a82a4: 0x0  nop
    ctx->pc = 0x3a82a4u;
    // NOP
    // 0x3a82a8: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A82A8u;
    {
        const bool branch_taken_0x3a82a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x3A82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82A8u;
        // 0x3a82ac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82a8) {
            ctx->pc = 0x3A8298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8298;
        }
    }
    ctx->pc = 0x3A82B0u;
    // 0x3a82b0: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x3a82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3a82b4: 0xae100404  sw          $s0, 0x404($s0)
    ctx->pc = 0x3a82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 16));
    // 0x3a82b8: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x3a82b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82bc: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x3a82bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x3a82c0: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A82C0u;
    SET_GPR_U32(ctx, 31, 0x3A82C8u);
    ctx->pc = 0x3A82C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A82C0u;
    // 0x3a82c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A82C0u, 0x3A82C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A82C8u;
label_3a82c8:
    // 0x3a82c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a82c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82cc: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A82CCu;
    SET_GPR_U32(ctx, 31, 0x3A82D4u);
    ctx->pc = 0x3A82D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A82CCu;
    // 0x3a82d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A82CCu, 0x3A82D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A82D4u;
label_3a82d4:
    // 0x3a82d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a82d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82d8: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A82D8u;
    SET_GPR_U32(ctx, 31, 0x3A82E0u);
    ctx->pc = 0x3A82DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A82D8u;
    // 0x3a82dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A82D8u, 0x3A82E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A82E0u;
label_3a82e0:
    // 0x3a82e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a82e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82e4: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A82E4u;
    SET_GPR_U32(ctx, 31, 0x3A82ECu);
    ctx->pc = 0x3A82E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A82E4u;
    // 0x3a82e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A82E4u, 0x3A82ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A82ECu;
label_3a82ec:
    // 0x3a82ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a82ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82f0: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A82F0u;
    SET_GPR_U32(ctx, 31, 0x3A82F8u);
    ctx->pc = 0x3A82F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A82F0u;
    // 0x3a82f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A82F0u, 0x3A82F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A82F8u;
label_3a82f8:
    // 0x3a82f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3a82f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82fc: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A82FCu;
    SET_GPR_U32(ctx, 31, 0x3A8304u);
    ctx->pc = 0x3A8300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A82FCu;
    // 0x3a8300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A82FCu, 0x3A8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8304u;
label_3a8304:
    // 0x3a8304: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3a8304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8308: 0xc0ea152  jal         func_3A8548
    ctx->pc = 0x3A8308u;
    SET_GPR_U32(ctx, 31, 0x3A8310u);
    ctx->pc = 0x3A830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8308u;
    // 0x3a830c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8548u, 0x3A8308u, 0x3A8310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8310u;
label_3a8310:
    // 0x3a8310: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a8310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8314: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3a8314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a8318: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3a8318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a831c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3a831cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a8320: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3a8320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a8324: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3a8324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a8328: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3a8328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a832c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3a832cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a8330: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a8330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a8334: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8334u;
        // 0x3a8338: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A833Cu;
    // 0x3a833c: 0x0  nop
    ctx->pc = 0x3a833cu;
    // NOP
    ctx->pc = 0x3a8340u;
}

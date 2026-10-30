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

// Function: sub_002A31F0
// Address: 0x2a31f0 - 0x2a3320
void sub_002A31F0_0x2a31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A31F0_0x2a31f0");
#endif

    switch (ctx->pc) {
        case 0x2a3264u: goto label_2a3264;
        case 0x2a326cu: goto label_2a326c;
        case 0x2a3280u: goto label_2a3280;
        case 0x2a328cu: goto label_2a328c;
        case 0x2a329cu: goto label_2a329c;
        case 0x2a32dcu: goto label_2a32dc;
        case 0x2a32e8u: goto label_2a32e8;
        default: break;
    }

    ctx->pc = 0x2a31f0u;

    // 0x2a31f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a31f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2a31f4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a31f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a31f8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2a31f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2a31fc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a31fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a3200: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2a3200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2a3204: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a3204u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2a3208: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2a3208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2a320c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2a320cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2a3210: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a3210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2a3214: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x2a3214u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a3218: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2a3218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2a321c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2a321cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3220: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2a3220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2a3224: 0x6b403  sra         $s6, $a2, 16
    ctx->pc = 0x2a3224u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a3228: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2a3228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2a322c: 0x7bc03  sra         $s7, $a3, 16
    ctx->pc = 0x2a322cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2a3230: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2a3230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2a3234: 0x8f403  sra         $fp, $t0, 16
    ctx->pc = 0x2a3234u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2a3238: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2a3238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a323c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2a323cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2a3240: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a3240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a3244: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a3244u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a3248: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2a3248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2a324c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3250: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2a3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2a3254: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2a3254u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a325c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2A325Cu;
    SET_GPR_U32(ctx, 31, 0x2A3264u);
    ctx->pc = 0x2A3260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A325Cu;
    // 0x2a3260: 0x160982d  daddu       $s3, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A325Cu, 0x2A3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3264u;
label_2a3264:
    // 0x2a3264: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2A3264u;
    SET_GPR_U32(ctx, 31, 0x2A326Cu);
    ctx->pc = 0x2A3268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3264u;
    // 0x2a3268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2A3264u, 0x2A326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A326Cu;
label_2a326c:
    // 0x2a326c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a326cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3270: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A3270u;
    {
        const bool branch_taken_0x2a3270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3270) {
            ctx->pc = 0x2A3274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3270u;
            // 0x2a3274: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A32ECu;
            goto label_2a32ec;
        }
    }
    ctx->pc = 0x2A3278u;
    // 0x2a3278: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A3278u;
    SET_GPR_U32(ctx, 31, 0x2A3280u);
    ctx->pc = 0x2A327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3278u;
    // 0x2a327c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A3278u, 0x2A3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3280u;
label_2a3280:
    // 0x2a3280: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a3280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3284: 0xc08bfb4  jal         func_22FED0
    ctx->pc = 0x2A3284u;
    SET_GPR_U32(ctx, 31, 0x2A328Cu);
    ctx->pc = 0x2A3288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3284u;
    // 0x2a3288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A3284u, 0x2A328Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A328Cu;
label_2a328c:
    // 0x2a328c: 0xa2320265  sb          $s2, 0x265($s1)
    ctx->pc = 0x2a328cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 613), (uint8_t)GPR_U32(ctx, 18));
    // 0x2a3290: 0xae20021c  sw          $zero, 0x21C($s1)
    ctx->pc = 0x2a3290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
    // 0x2a3294: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A3294u;
    SET_GPR_U32(ctx, 31, 0x2A329Cu);
    ctx->pc = 0x2A3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3294u;
    // 0x2a3298: 0xae200220  sw          $zero, 0x220($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A3294u, 0x2A329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A329Cu;
label_2a329c:
    // 0x2a329c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a329cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32a0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A32A0u;
    {
        const bool branch_taken_0x2a32a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A32A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32A0u;
        // 0x2a32a4: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32a0) {
            ctx->pc = 0x2A32DCu;
            goto label_2a32dc;
        }
    }
    ctx->pc = 0x2A32A8u;
    // 0x2a32a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2a32a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32ac: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2a32acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x2a32b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a32b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a32b4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2a32b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2a32b8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2a32b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2a32bc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2a32bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32c0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2a32c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32c4: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2a32c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32c8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2a32c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a32ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a32d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32d4: 0xc0a8cc8  jal         func_2A3320
    ctx->pc = 0x2A32D4u;
    SET_GPR_U32(ctx, 31, 0x2A32DCu);
    ctx->pc = 0x2A32D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A32D4u;
    // 0x2a32d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x2A32D4u, 0x2A32DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32DCu;
label_2a32dc:
    // 0x2a32dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a32dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32e0: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A32E0u;
    SET_GPR_U32(ctx, 31, 0x2A32E8u);
    ctx->pc = 0x2A32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A32E0u;
    // 0x2a32e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A32E0u, 0x2A32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32E8u;
label_2a32e8:
    // 0x2a32e8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2a32e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a32ec:
    // 0x2a32ec: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2a32ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a32f0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2a32f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a32f4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2a32f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a32f8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2a32f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a32fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a32fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3300: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2a3300u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3304: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2a3304u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3308: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2a3308u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a330c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3310: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2a3310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a3314: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2a3314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a3318: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3318u;
        // 0x2a331c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3320u;
}

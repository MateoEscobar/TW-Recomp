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

// Function: sub_001A3458
// Address: 0x1a3458 - 0x1a3660
void sub_001A3458_0x1a3458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3458_0x1a3458");
#endif

    switch (ctx->pc) {
        case 0x1a3458u: goto label_1a3458;
        case 0x1a345cu: goto label_1a345c;
        case 0x1a3460u: goto label_1a3460;
        case 0x1a3464u: goto label_1a3464;
        case 0x1a3468u: goto label_1a3468;
        case 0x1a346cu: goto label_1a346c;
        case 0x1a3470u: goto label_1a3470;
        case 0x1a3474u: goto label_1a3474;
        case 0x1a3478u: goto label_1a3478;
        case 0x1a347cu: goto label_1a347c;
        case 0x1a3480u: goto label_1a3480;
        case 0x1a3484u: goto label_1a3484;
        case 0x1a3488u: goto label_1a3488;
        case 0x1a348cu: goto label_1a348c;
        case 0x1a3490u: goto label_1a3490;
        case 0x1a3494u: goto label_1a3494;
        case 0x1a3498u: goto label_1a3498;
        case 0x1a349cu: goto label_1a349c;
        case 0x1a34a0u: goto label_1a34a0;
        case 0x1a34a4u: goto label_1a34a4;
        case 0x1a34a8u: goto label_1a34a8;
        case 0x1a34acu: goto label_1a34ac;
        case 0x1a34b0u: goto label_1a34b0;
        case 0x1a34b4u: goto label_1a34b4;
        case 0x1a34b8u: goto label_1a34b8;
        case 0x1a34bcu: goto label_1a34bc;
        case 0x1a34c0u: goto label_1a34c0;
        case 0x1a34c4u: goto label_1a34c4;
        case 0x1a34c8u: goto label_1a34c8;
        case 0x1a34ccu: goto label_1a34cc;
        case 0x1a34d0u: goto label_1a34d0;
        case 0x1a34d4u: goto label_1a34d4;
        case 0x1a34d8u: goto label_1a34d8;
        case 0x1a34dcu: goto label_1a34dc;
        case 0x1a34e0u: goto label_1a34e0;
        case 0x1a34e4u: goto label_1a34e4;
        case 0x1a34e8u: goto label_1a34e8;
        case 0x1a34ecu: goto label_1a34ec;
        case 0x1a34f0u: goto label_1a34f0;
        case 0x1a34f4u: goto label_1a34f4;
        case 0x1a34f8u: goto label_1a34f8;
        case 0x1a34fcu: goto label_1a34fc;
        case 0x1a3500u: goto label_1a3500;
        case 0x1a3504u: goto label_1a3504;
        case 0x1a3508u: goto label_1a3508;
        case 0x1a350cu: goto label_1a350c;
        case 0x1a3510u: goto label_1a3510;
        case 0x1a3514u: goto label_1a3514;
        case 0x1a3518u: goto label_1a3518;
        case 0x1a351cu: goto label_1a351c;
        case 0x1a3520u: goto label_1a3520;
        case 0x1a3524u: goto label_1a3524;
        case 0x1a3528u: goto label_1a3528;
        case 0x1a352cu: goto label_1a352c;
        case 0x1a3530u: goto label_1a3530;
        case 0x1a3534u: goto label_1a3534;
        case 0x1a3538u: goto label_1a3538;
        case 0x1a353cu: goto label_1a353c;
        case 0x1a3540u: goto label_1a3540;
        case 0x1a3544u: goto label_1a3544;
        case 0x1a3548u: goto label_1a3548;
        case 0x1a354cu: goto label_1a354c;
        case 0x1a3550u: goto label_1a3550;
        case 0x1a3554u: goto label_1a3554;
        case 0x1a3558u: goto label_1a3558;
        case 0x1a355cu: goto label_1a355c;
        case 0x1a3560u: goto label_1a3560;
        case 0x1a3564u: goto label_1a3564;
        case 0x1a3568u: goto label_1a3568;
        case 0x1a356cu: goto label_1a356c;
        case 0x1a3570u: goto label_1a3570;
        case 0x1a3574u: goto label_1a3574;
        case 0x1a3578u: goto label_1a3578;
        case 0x1a357cu: goto label_1a357c;
        case 0x1a3580u: goto label_1a3580;
        case 0x1a3584u: goto label_1a3584;
        case 0x1a3588u: goto label_1a3588;
        case 0x1a358cu: goto label_1a358c;
        case 0x1a3590u: goto label_1a3590;
        case 0x1a3594u: goto label_1a3594;
        case 0x1a3598u: goto label_1a3598;
        case 0x1a359cu: goto label_1a359c;
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35a4u: goto label_1a35a4;
        case 0x1a35a8u: goto label_1a35a8;
        case 0x1a35acu: goto label_1a35ac;
        case 0x1a35b0u: goto label_1a35b0;
        case 0x1a35b4u: goto label_1a35b4;
        case 0x1a35b8u: goto label_1a35b8;
        case 0x1a35bcu: goto label_1a35bc;
        case 0x1a35c0u: goto label_1a35c0;
        case 0x1a35c4u: goto label_1a35c4;
        case 0x1a35c8u: goto label_1a35c8;
        case 0x1a35ccu: goto label_1a35cc;
        case 0x1a35d0u: goto label_1a35d0;
        case 0x1a35d4u: goto label_1a35d4;
        case 0x1a35d8u: goto label_1a35d8;
        case 0x1a35dcu: goto label_1a35dc;
        case 0x1a35e0u: goto label_1a35e0;
        case 0x1a35e4u: goto label_1a35e4;
        case 0x1a35e8u: goto label_1a35e8;
        case 0x1a35ecu: goto label_1a35ec;
        case 0x1a35f0u: goto label_1a35f0;
        case 0x1a35f4u: goto label_1a35f4;
        case 0x1a35f8u: goto label_1a35f8;
        case 0x1a35fcu: goto label_1a35fc;
        case 0x1a3600u: goto label_1a3600;
        case 0x1a3604u: goto label_1a3604;
        case 0x1a3608u: goto label_1a3608;
        case 0x1a360cu: goto label_1a360c;
        case 0x1a3610u: goto label_1a3610;
        case 0x1a3614u: goto label_1a3614;
        case 0x1a3618u: goto label_1a3618;
        case 0x1a361cu: goto label_1a361c;
        case 0x1a3620u: goto label_1a3620;
        case 0x1a3624u: goto label_1a3624;
        case 0x1a3628u: goto label_1a3628;
        case 0x1a362cu: goto label_1a362c;
        case 0x1a3630u: goto label_1a3630;
        case 0x1a3634u: goto label_1a3634;
        case 0x1a3638u: goto label_1a3638;
        case 0x1a363cu: goto label_1a363c;
        case 0x1a3640u: goto label_1a3640;
        case 0x1a3644u: goto label_1a3644;
        case 0x1a3648u: goto label_1a3648;
        case 0x1a364cu: goto label_1a364c;
        case 0x1a3650u: goto label_1a3650;
        case 0x1a3654u: goto label_1a3654;
        case 0x1a3658u: goto label_1a3658;
        case 0x1a365cu: goto label_1a365c;
        default: break;
    }

    ctx->pc = 0x1a3458u;

label_1a3458:
    // 0x1a3458: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a3458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a345c:
    // 0x1a345c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1a3460:
    // 0x1a3460: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a3460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1a3464:
    // 0x1a3464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3468:
    // 0x1a3468: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a3468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1a346c:
    // 0x1a346c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a3470:
    // 0x1a3470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a3474:
    // 0x1a3474: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1a3474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1a3478:
    // 0x1a3478: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a3478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a347c:
    // 0x1a347c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1a347cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1a3480:
    // 0x1a3480: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1a3480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1a3484:
    // 0x1a3484: 0x40f809  jalr        $v0
label_1a3488:
    if (ctx->pc == 0x1A3488u) {
        ctx->pc = 0x1A3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3484u;
        // 0x1a3488: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A348Cu;
        goto label_1a348c;
    }
    ctx->pc = 0x1A3484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A348Cu);
        ctx->pc = 0x1A3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3484u;
        // 0x1a3488: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3484u, 0x1A348Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A348Cu;
label_1a348c:
    // 0x1a348c: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_1a3490:
    if (ctx->pc == 0x1A3490u) {
        ctx->pc = 0x1A3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A348Cu;
        // 0x1a3490: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3494u;
        goto label_1a3494;
    }
    ctx->pc = 0x1A348Cu;
    {
        const bool branch_taken_0x1a348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A348Cu;
        // 0x1a3490: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a348c) {
            ctx->pc = 0x1A3644u;
            goto label_1a3644;
        }
    }
    ctx->pc = 0x1A3494u;
label_1a3494:
    // 0x1a3494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3498:
    // 0x1a3498: 0xc068a70  jal         func_1A29C0
label_1a349c:
    if (ctx->pc == 0x1A349Cu) {
        ctx->pc = 0x1A349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3498u;
        // 0x1a349c: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34A0u;
        goto label_1a34a0;
    }
    ctx->pc = 0x1A3498u;
    SET_GPR_U32(ctx, 31, 0x1A34A0u);
    ctx->pc = 0x1A349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3498u;
    // 0x1a349c: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A29C0u, 0x1A3498u, 0x1A34A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34A0u;
label_1a34a0:
    // 0x1a34a0: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1a34a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_1a34a4:
    // 0x1a34a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a34a8:
    // 0x1a34a8: 0x2453d050  addiu       $s3, $v0, -0x2FB0
    ctx->pc = 0x1a34a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955088));
label_1a34ac:
    // 0x1a34ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a34acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a34b0:
    // 0x1a34b0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1a34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a34b4:
    // 0x1a34b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a34b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a34b8:
    // 0x1a34b8: 0xc61400a0  lwc1        $f20, 0xA0($s0)
    ctx->pc = 0x1a34b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a34bc:
    // 0x1a34bc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a34c0:
    // 0x1a34c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1a34c4:
    // 0x1a34c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a34c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1a34c8:
    // 0x1a34c8: 0xc068848  jal         func_1A2120
label_1a34cc:
    if (ctx->pc == 0x1A34CCu) {
        ctx->pc = 0x1A34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34C8u;
        // 0x1a34cc: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34D0u;
        goto label_1a34d0;
    }
    ctx->pc = 0x1A34C8u;
    SET_GPR_U32(ctx, 31, 0x1A34D0u);
    ctx->pc = 0x1A34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A34C8u;
    // 0x1a34cc: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A34C8u, 0x1A34D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34D0u;
label_1a34d0:
    // 0x1a34d0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1a34d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a34d4:
    // 0x1a34d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a34d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a34d8:
    // 0x1a34d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a34d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a34dc:
    // 0x1a34dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a34dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a34e0:
    // 0x1a34e0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1a34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1a34e4:
    // 0x1a34e4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1a34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1a34e8:
    // 0x1a34e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1a34e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a34ec:
    // 0x1a34ec: 0xc068818  jal         func_1A2060
label_1a34f0:
    if (ctx->pc == 0x1A34F0u) {
        ctx->pc = 0x1A34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34ECu;
        // 0x1a34f0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A34F4u;
        goto label_1a34f4;
    }
    ctx->pc = 0x1A34ECu;
    SET_GPR_U32(ctx, 31, 0x1A34F4u);
    ctx->pc = 0x1A34F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A34ECu;
    // 0x1a34f0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1A34ECu, 0x1A34F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34F4u;
label_1a34f4:
    // 0x1a34f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a34f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a34f8:
    // 0x1a34f8: 0xc06887a  jal         func_1A21E8
label_1a34fc:
    if (ctx->pc == 0x1A34FCu) {
        ctx->pc = 0x1A34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34F8u;
        // 0x1a34fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3500u;
        goto label_1a3500;
    }
    ctx->pc = 0x1A34F8u;
    SET_GPR_U32(ctx, 31, 0x1A3500u);
    ctx->pc = 0x1A34FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A34F8u;
    // 0x1a34fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21E8u, 0x1A34F8u, 0x1A3500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3500u;
label_1a3500:
    // 0x1a3500: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1a3500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a3504:
    // 0x1a3504: 0x24050171  addiu       $a1, $zero, 0x171
    ctx->pc = 0x1a3504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
label_1a3508:
    // 0x1a3508: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1a3508u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1a350c:
    // 0x1a350c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a350cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a3510:
    // 0x1a3510: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1a3510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1a3514:
    // 0x1a3514: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x1a3514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a3518:
    // 0x1a3518: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1a3518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_1a351c:
    // 0x1a351c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1a351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1a3520:
    // 0x1a3520: 0x7e420160  sq          $v0, 0x160($s2)
    ctx->pc = 0x1a3520u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 352), GPR_VEC(ctx, 2));
label_1a3524:
    // 0x1a3524: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1a3524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3528:
    // 0x1a3528: 0xe6400150  swc1        $f0, 0x150($s2)
    ctx->pc = 0x1a3528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 336), bits); }
label_1a352c:
    // 0x1a352c: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1a352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3530:
    // 0x1a3530: 0xe6410154  swc1        $f1, 0x154($s2)
    ctx->pc = 0x1a3530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
label_1a3534:
    // 0x1a3534: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x1a3534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3538:
    // 0x1a3538: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a3538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a353c:
    // 0x1a353c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a353cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a3540:
    // 0x1a3540: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1a3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1a3544:
    // 0x1a3544: 0x1445002b  bne         $v0, $a1, . + 4 + (0x2B << 2)
label_1a3548:
    if (ctx->pc == 0x1A3548u) {
        ctx->pc = 0x1A3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3544u;
        // 0x1a3548: 0x265001c0  addiu       $s0, $s2, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A354Cu;
        goto label_1a354c;
    }
    ctx->pc = 0x1A3544u;
    {
        const bool branch_taken_0x1a3544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3544u;
        // 0x1a3548: 0x265001c0  addiu       $s0, $s2, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3544) {
            ctx->pc = 0x1A35F4u;
            goto label_1a35f4;
        }
    }
    ctx->pc = 0x1A354Cu;
label_1a354c:
    // 0x1a354c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a354cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a3550:
    // 0x1a3550: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a3550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a3554:
    // 0x1a3554: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1a3554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a3558:
    // 0x1a3558: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1a3558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a355c:
    // 0x1a355c: 0xb242030f  sdl         $v0, 0x30F($s2)
    ctx->pc = 0x1a355cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3560:
    // 0x1a3560: 0xb6420308  sdr         $v0, 0x308($s2)
    ctx->pc = 0x1a3560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 776); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3564:
    // 0x1a3564: 0xb2430317  sdl         $v1, 0x317($s2)
    ctx->pc = 0x1a3564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 791); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3568:
    // 0x1a3568: 0xb6430310  sdr         $v1, 0x310($s2)
    ctx->pc = 0x1a3568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 784); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a356c:
    // 0x1a356c: 0x26500290  addiu       $s0, $s2, 0x290
    ctx->pc = 0x1a356cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
label_1a3570:
    // 0x1a3570: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3574:
    // 0x1a3574: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3578:
    // 0x1a3578: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1a3578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a357c:
    // 0x1a357c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3580:
    // 0x1a3580: 0x26510360  addiu       $s1, $s2, 0x360
    ctx->pc = 0x1a3580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
label_1a3584:
    // 0x1a3584: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1a3584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1a3588:
    // 0x1a3588: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a3588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a358c:
    // 0x1a358c: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x1a358cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
label_1a3590:
    // 0x1a3590: 0xc073464  jal         func_1CD190
label_1a3594:
    if (ctx->pc == 0x1A3594u) {
        ctx->pc = 0x1A3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3590u;
        // 0x1a3594: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3598u;
        goto label_1a3598;
    }
    ctx->pc = 0x1A3590u;
    SET_GPR_U32(ctx, 31, 0x1A3598u);
    ctx->pc = 0x1A3594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3590u;
    // 0x1a3594: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1A3590u, 0x1A3598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3598u;
label_1a3598:
    // 0x1a3598: 0xc0734a0  jal         func_1CD280
label_1a359c:
    if (ctx->pc == 0x1A359Cu) {
        ctx->pc = 0x1A359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3598u;
        // 0x1a359c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35A0u;
        goto label_1a35a0;
    }
    ctx->pc = 0x1A3598u;
    SET_GPR_U32(ctx, 31, 0x1A35A0u);
    ctx->pc = 0x1A359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3598u;
    // 0x1a359c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1A3598u, 0x1A35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35A0u;
label_1a35a0:
    // 0x1a35a0: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a35a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a35a4:
    // 0x1a35a4: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a35a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a35a8:
    // 0x1a35a8: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1a35a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a35ac:
    // 0x1a35ac: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1a35acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a35b0:
    // 0x1a35b0: 0xb24203df  sdl         $v0, 0x3DF($s2)
    ctx->pc = 0x1a35b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 991); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a35b4:
    // 0x1a35b4: 0xb64203d8  sdr         $v0, 0x3D8($s2)
    ctx->pc = 0x1a35b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 984); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a35b8:
    // 0x1a35b8: 0xb24303e7  sdl         $v1, 0x3E7($s2)
    ctx->pc = 0x1a35b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a35bc:
    // 0x1a35bc: 0xb64303e0  sdr         $v1, 0x3E0($s2)
    ctx->pc = 0x1a35bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 992); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a35c0:
    // 0x1a35c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a35c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a35c4:
    // 0x1a35c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a35c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a35c8:
    // 0x1a35c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a35c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a35cc:
    // 0x1a35cc: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1a35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a35d0:
    // 0x1a35d0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1a35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1a35d4:
    // 0x1a35d4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a35d8:
    // 0x1a35d8: 0x78430060  lq          $v1, 0x60($v0)
    ctx->pc = 0x1a35d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 96)));
label_1a35dc:
    // 0x1a35dc: 0xc073464  jal         func_1CD190
label_1a35e0:
    if (ctx->pc == 0x1A35E0u) {
        ctx->pc = 0x1A35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35DCu;
        // 0x1a35e0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35E4u;
        goto label_1a35e4;
    }
    ctx->pc = 0x1A35DCu;
    SET_GPR_U32(ctx, 31, 0x1A35E4u);
    ctx->pc = 0x1A35E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35DCu;
    // 0x1a35e0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1A35DCu, 0x1A35E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35E4u;
label_1a35e4:
    // 0x1a35e4: 0xc0734a0  jal         func_1CD280
label_1a35e8:
    if (ctx->pc == 0x1A35E8u) {
        ctx->pc = 0x1A35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35E4u;
        // 0x1a35e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35ECu;
        goto label_1a35ec;
    }
    ctx->pc = 0x1A35E4u;
    SET_GPR_U32(ctx, 31, 0x1A35ECu);
    ctx->pc = 0x1A35E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35E4u;
    // 0x1a35e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1A35E4u, 0x1A35ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35ECu;
label_1a35ec:
    // 0x1a35ec: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a35f0:
    if (ctx->pc == 0x1A35F0u) {
        ctx->pc = 0x1A35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35ECu;
        // 0x1a35f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35F4u;
        goto label_1a35f4;
    }
    ctx->pc = 0x1A35ECu;
    {
        const bool branch_taken_0x1a35ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35ECu;
        // 0x1a35f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35ec) {
            ctx->pc = 0x1A3644u;
            goto label_1a3644;
        }
    }
    ctx->pc = 0x1A35F4u;
label_1a35f4:
    // 0x1a35f4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a35f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a35f8:
    // 0x1a35f8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a35f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a35fc:
    // 0x1a35fc: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x1a35fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a3600:
    // 0x1a3600: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x1a3600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a3604:
    // 0x1a3604: 0xb242023f  sdl         $v0, 0x23F($s2)
    ctx->pc = 0x1a3604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3608:
    // 0x1a3608: 0xb6420238  sdr         $v0, 0x238($s2)
    ctx->pc = 0x1a3608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a360c:
    // 0x1a360c: 0xb2430247  sdl         $v1, 0x247($s2)
    ctx->pc = 0x1a360cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3610:
    // 0x1a3610: 0xb6430240  sdr         $v1, 0x240($s2)
    ctx->pc = 0x1a3610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a3614:
    // 0x1a3614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3618:
    // 0x1a3618: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a361c:
    // 0x1a361c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x1a361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a3620:
    // 0x1a3620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3624:
    // 0x1a3624: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1a3624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1a3628:
    // 0x1a3628: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1a3628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_1a362c:
    // 0x1a362c: 0x78620040  lq          $v0, 0x40($v1)
    ctx->pc = 0x1a362cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
label_1a3630:
    // 0x1a3630: 0xc073464  jal         func_1CD190
label_1a3634:
    if (ctx->pc == 0x1A3634u) {
        ctx->pc = 0x1A3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3630u;
        // 0x1a3634: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3638u;
        goto label_1a3638;
    }
    ctx->pc = 0x1A3630u;
    SET_GPR_U32(ctx, 31, 0x1A3638u);
    ctx->pc = 0x1A3634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3630u;
    // 0x1a3634: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1A3630u, 0x1A3638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3638u;
label_1a3638:
    // 0x1a3638: 0xc0734a0  jal         func_1CD280
label_1a363c:
    if (ctx->pc == 0x1A363Cu) {
        ctx->pc = 0x1A363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3638u;
        // 0x1a363c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3640u;
        goto label_1a3640;
    }
    ctx->pc = 0x1A3638u;
    SET_GPR_U32(ctx, 31, 0x1A3640u);
    ctx->pc = 0x1A363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3638u;
    // 0x1a363c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1A3638u, 0x1A3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3640u;
label_1a3640:
    // 0x1a3640: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a3640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a3644:
    // 0x1a3644: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a3644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3648:
    // 0x1a3648: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a3648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a364c:
    // 0x1a364c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a364cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3650:
    // 0x1a3650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3654:
    // 0x1a3654: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1a3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3658:
    // 0x1a3658: 0x3e00008  jr          $ra
label_1a365c:
    if (ctx->pc == 0x1A365Cu) {
        ctx->pc = 0x1A365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3658u;
        // 0x1a365c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3660u;
        goto label_fallthrough_0x1a3658;
    }
    ctx->pc = 0x1A3658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3658u;
        // 0x1a365c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3658:
    ctx->pc = 0x1A3660u;
}

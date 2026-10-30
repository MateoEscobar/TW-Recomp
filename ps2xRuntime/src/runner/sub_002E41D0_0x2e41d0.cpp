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

// Function: sub_002E41D0
// Address: 0x2e41d0 - 0x2e4388
void sub_002E41D0_0x2e41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E41D0_0x2e41d0");
#endif

    switch (ctx->pc) {
        case 0x2e4204u: goto label_2e4204;
        case 0x2e421cu: goto label_2e421c;
        case 0x2e4240u: goto label_2e4240;
        case 0x2e424cu: goto label_2e424c;
        case 0x2e4274u: goto label_2e4274;
        case 0x2e42acu: goto label_2e42ac;
        case 0x2e42e4u: goto label_2e42e4;
        case 0x2e42fcu: goto label_2e42fc;
        case 0x2e4308u: goto label_2e4308;
        case 0x2e430cu: goto label_2e430c;
        case 0x2e4320u: goto label_2e4320;
        case 0x2e4328u: goto label_2e4328;
        case 0x2e435cu: goto label_2e435c;
        default: break;
    }

    ctx->pc = 0x2e41d0u;

    // 0x2e41d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e41d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e41d4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e41d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e41d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e41dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e41dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e41e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e41e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41e4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e41e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e41e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e41e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e41ec: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e41ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2e41f0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2e41f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2e41f4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2e41f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2e41f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e41f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e41fc: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x2E41FCu;
    SET_GPR_U32(ctx, 31, 0x2E4204u);
    ctx->pc = 0x2E4200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E41FCu;
    // 0x2e4200: 0x86240020  lh          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x2E41FCu, 0x2E4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4204u;
label_2e4204:
    // 0x2e4204: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e4204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4208: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e4208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e420c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4210: 0x26760048  addiu       $s6, $s3, 0x48
    ctx->pc = 0x2e4210u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x2e4214: 0xc05959e  jal         func_165678
    ctx->pc = 0x2E4214u;
    SET_GPR_U32(ctx, 31, 0x2E421Cu);
    ctx->pc = 0x2E4218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4214u;
    // 0x2e4218: 0x8c570000  lw          $s7, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E4214u, 0x2E421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E421Cu;
label_2e421c:
    // 0x2e421c: 0x26f40090  addiu       $s4, $s7, 0x90
    ctx->pc = 0x2e421cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x2e4220: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e4220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2e4224: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x2e4224u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2e4228: 0x24724b00  addiu       $s2, $v1, 0x4B00
    ctx->pc = 0x2e4228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2e422c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4230: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e4230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4234: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e4234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e4238: 0xc13b782  jal         func_4EDE08
    ctx->pc = 0x2E4238u;
    SET_GPR_U32(ctx, 31, 0x2E4240u);
    ctx->pc = 0x2E423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4238u;
    // 0x2e423c: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDE08u, 0x2E4238u, 0x2E4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4240u;
label_2e4240:
    // 0x2e4240: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e4240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e4244: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2E4244u;
    SET_GPR_U32(ctx, 31, 0x2E424Cu);
    ctx->pc = 0x2E4248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4244u;
    // 0x2e4248: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E4244u, 0x2E424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E424Cu;
label_2e424c:
    // 0x2e424c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e424cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4250: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E4250u;
    {
        const bool branch_taken_0x2e4250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4250u;
        // 0x2e4254: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4250) {
            ctx->pc = 0x2E42B8u;
            goto label_2e42b8;
        }
    }
    ctx->pc = 0x2E4258u;
    // 0x2e4258: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x2e4258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2e425c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2e425cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2e4260: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e4260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e4264: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e4264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e4268: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2e4268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2e426c: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2E426Cu;
    SET_GPR_U32(ctx, 31, 0x2E4274u);
    ctx->pc = 0x2E4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E426Cu;
    // 0x2e4270: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2E426Cu, 0x2E4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4274u;
label_2e4274:
    // 0x2e4274: 0x3c0141b4  lui         $at, 0x41B4
    ctx->pc = 0x2e4274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16820 << 16));
    // 0x2e4278: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2e4278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x2e427c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e427cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e4280: 0x0  nop
    ctx->pc = 0x2e4280u;
    // NOP
    // 0x2e4284: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e4284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4288: 0x0  nop
    ctx->pc = 0x2e4288u;
    // NOP
    // 0x2e428c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E428Cu;
    {
        const bool branch_taken_0x2e428c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E428Cu;
        // 0x2e4290: 0x26e40284  addiu       $a0, $s7, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e428c) {
            ctx->pc = 0x2E42B4u;
            goto label_2e42b4;
        }
    }
    ctx->pc = 0x2E4294u;
    // 0x2e4294: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4298: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e4298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e429c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e429cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42a0: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x2e42a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x2e42a4: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2E42A4u;
    SET_GPR_U32(ctx, 31, 0x2E42ACu);
    ctx->pc = 0x2E42A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42A4u;
    // 0x2e42a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2E42A4u, 0x2E42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42ACu;
label_2e42ac:
    // 0x2e42ac: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2E42ACu;
    {
        const bool branch_taken_0x2e42ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42ACu;
        // 0x2e42b0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42ac) {
            ctx->pc = 0x2E4360u;
            goto label_2e4360;
        }
    }
    ctx->pc = 0x2E42B4u;
label_2e42b4:
    // 0x2e42b4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e42b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2e42b8:
    // 0x2e42b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e42b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e42bc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E42BCu;
    {
        const bool branch_taken_0x2e42bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e42bc) {
            ctx->pc = 0x2E42C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E42BCu;
            // 0x2e42c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E42C4u;
            goto label_2e42c4;
        }
    }
    ctx->pc = 0x2E42C4u;
label_2e42c4:
    // 0x2e42c4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2e42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2e42c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e42c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e42cc: 0x2010  mfhi        $a0
    ctx->pc = 0x2e42ccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2e42d0: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E42D0u;
    {
        const bool branch_taken_0x2e42d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42D0u;
        // 0x2e42d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42d0) {
            ctx->pc = 0x2E4360u;
            goto label_2e4360;
        }
    }
    ctx->pc = 0x2E42D8u;
    // 0x2e42d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e42d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42dc: 0xc059856  jal         func_166158
    ctx->pc = 0x2E42DCu;
    SET_GPR_U32(ctx, 31, 0x2E42E4u);
    ctx->pc = 0x2E42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42DCu;
    // 0x2e42e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x2E42DCu, 0x2E42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42E4u;
label_2e42e4:
    // 0x2e42e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e42e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42e8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2e42ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e42ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42f0: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x2e42f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    // 0x2e42f4: 0xc0cd526  jal         func_335498
    ctx->pc = 0x2E42F4u;
    SET_GPR_U32(ctx, 31, 0x2E42FCu);
    ctx->pc = 0x2E42F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42F4u;
    // 0x2e42f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2E42F4u, 0x2E42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42FCu;
label_2e42fc:
    // 0x2e42fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E42FCu;
    {
        const bool branch_taken_0x2e42fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42FCu;
        // 0x2e4300: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42fc) {
            ctx->pc = 0x2E430Cu;
            goto label_2e430c;
        }
    }
    ctx->pc = 0x2E4304u;
    // 0x2e4304: 0x0  nop
    ctx->pc = 0x2e4304u;
    // NOP
label_2e4308:
    // 0x2e4308: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e4308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e430c:
    // 0x2e430c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2e430cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e4310: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E4310u;
    {
        const bool branch_taken_0x2e4310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4310u;
        // 0x2e4314: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4310) {
            ctx->pc = 0x2E433Cu;
            goto label_2e433c;
        }
    }
    ctx->pc = 0x2E4318u;
    // 0x2e4318: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2E4318u;
    SET_GPR_U32(ctx, 31, 0x2E4320u);
    ctx->pc = 0x2E431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4318u;
    // 0x2e431c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2E4318u, 0x2E4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4320u;
label_2e4320:
    // 0x2e4320: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2E4320u;
    SET_GPR_U32(ctx, 31, 0x2E4328u);
    ctx->pc = 0x2E4324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4320u;
    // 0x2e4324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E4320u, 0x2E4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4328u;
label_2e4328:
    // 0x2e4328: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E4328u;
    {
        const bool branch_taken_0x2e4328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4328) {
            ctx->pc = 0x2E432Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4328u;
            // 0x2e432c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E430Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e430c;
        }
    }
    ctx->pc = 0x2E4330u;
    // 0x2e4330: 0x1632fff5  bne         $s1, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E4330u;
    {
        const bool branch_taken_0x2e4330 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4330u;
        // 0x2e4334: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4330) {
            ctx->pc = 0x2E4308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4308;
        }
    }
    ctx->pc = 0x2E4338u;
    // 0x2e4338: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e4338u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e433c:
    // 0x2e433c: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E433Cu;
    {
        const bool branch_taken_0x2e433c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E433Cu;
        // 0x2e4340: 0x26e40284  addiu       $a0, $s7, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e433c) {
            ctx->pc = 0x2E435Cu;
            goto label_2e435c;
        }
    }
    ctx->pc = 0x2E4344u;
    // 0x2e4344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4348: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e4348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e434c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e434cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4350: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x2e4350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2e4354: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x2E4354u;
    SET_GPR_U32(ctx, 31, 0x2E435Cu);
    ctx->pc = 0x2E4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4354u;
    // 0x2e4358: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2E4354u, 0x2E435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E435Cu;
label_2e435c:
    // 0x2e435c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e435cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e4360:
    // 0x2e4360: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e4360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e4364: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e4364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e4368: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e4368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e436c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e436cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4370: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e4370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4374: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2e4374u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4378: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2e4378u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e437c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e437cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4380: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4380u;
        // 0x2e4384: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4388u;
}

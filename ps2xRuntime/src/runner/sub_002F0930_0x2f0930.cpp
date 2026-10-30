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

// Function: sub_002F0930
// Address: 0x2f0930 - 0x2f0a50
void sub_002F0930_0x2f0930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0930_0x2f0930");
#endif

    switch (ctx->pc) {
        case 0x2f09c4u: goto label_2f09c4;
        case 0x2f09f0u: goto label_2f09f0;
        case 0x2f0a10u: goto label_2f0a10;
        default: break;
    }

    ctx->pc = 0x2f0930u;

    // 0x2f0930: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f0930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f0934: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f0934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f0938: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f0938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2f093c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f093cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0940: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2f0940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2f0944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0948: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2f0948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2f094c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f094cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0950: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x2f0950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f0954: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F0954u;
    {
        const bool branch_taken_0x2f0954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0954u;
        // 0x2f0958: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0954) {
            ctx->pc = 0x2F0A34u;
            goto label_2f0a34;
        }
    }
    ctx->pc = 0x2F095Cu;
    // 0x2f095c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2f095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2f0960: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2f0960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2f0964: 0x24427b80  addiu       $v0, $v0, 0x7B80
    ctx->pc = 0x2f0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31616));
    // 0x2f0968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f0968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f096c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f096cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f0970: 0x800008  jr          $a0
    ctx->pc = 0x2F0970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F0978u: goto label_2f0978;
            case 0x2F0984u: goto label_2f0984;
            case 0x2F0990u: goto label_2f0990;
            case 0x2F099Cu: goto label_2f099c;
            case 0x2F09A8u: goto label_2f09a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0970u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F0978u;
label_2f0978:
    // 0x2f0978: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f0978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f097c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F097Cu;
    {
        const bool branch_taken_0x2f097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F097Cu;
        // 0x2f0980: 0x24510f28  addiu       $s1, $v0, 0xF28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f097c) {
            ctx->pc = 0x2F09B0u;
            goto label_2f09b0;
        }
    }
    ctx->pc = 0x2F0984u;
label_2f0984:
    // 0x2f0984: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f0984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f0988: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0988u;
    {
        const bool branch_taken_0x2f0988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0988u;
        // 0x2f098c: 0x24510f40  addiu       $s1, $v0, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0988) {
            ctx->pc = 0x2F09B0u;
            goto label_2f09b0;
        }
    }
    ctx->pc = 0x2F0990u;
label_2f0990:
    // 0x2f0990: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f0990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f0994: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0994u;
    {
        const bool branch_taken_0x2f0994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0994u;
        // 0x2f0998: 0x24510f50  addiu       $s1, $v0, 0xF50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0994) {
            ctx->pc = 0x2F09B0u;
            goto label_2f09b0;
        }
    }
    ctx->pc = 0x2F099Cu;
label_2f099c:
    // 0x2f099c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f09a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F09A0u;
    {
        const bool branch_taken_0x2f09a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09A0u;
        // 0x2f09a4: 0x24510f60  addiu       $s1, $v0, 0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09a0) {
            ctx->pc = 0x2F09B0u;
            goto label_2f09b0;
        }
    }
    ctx->pc = 0x2F09A8u;
label_2f09a8:
    // 0x2f09a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2f09ac: 0x24510f70  addiu       $s1, $v0, 0xF70
    ctx->pc = 0x2f09acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
label_2f09b0:
    // 0x2f09b0: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F09B0u;
    {
        const bool branch_taken_0x2f09b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09B0u;
        // 0x2f09b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f09b0) {
            ctx->pc = 0x2F0A34u;
            goto label_2f0a34;
        }
    }
    ctx->pc = 0x2F09B8u;
    // 0x2f09b8: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2f09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
    // 0x2f09bc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2F09BCu;
    SET_GPR_U32(ctx, 31, 0x2F09C4u);
    ctx->pc = 0x2F09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F09BCu;
    // 0x2f09c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2F09BCu, 0x2F09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F09C4u;
label_2f09c4:
    // 0x2f09c4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F09C4u;
    {
        const bool branch_taken_0x2f09c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f09c4) {
            ctx->pc = 0x2F09C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F09C4u;
            // 0x2f09c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0A38u;
            goto label_2f0a38;
        }
    }
    ctx->pc = 0x2F09CCu;
    // 0x2f09cc: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x2f09ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x2f09d0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2f09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2f09d4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2f09d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2f09d8: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x2f09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    // 0x2f09dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f09dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f09e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f09e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2f09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2f09e8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x2F09E8u;
    SET_GPR_U32(ctx, 31, 0x2F09F0u);
    ctx->pc = 0x2F09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F09E8u;
    // 0x2f09ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2F09E8u, 0x2F09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F09F0u;
label_2f09f0:
    // 0x2f09f0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f09f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f09f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f09f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f09f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f09f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f09fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f09fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f0a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0a08: 0xc0879a6  jal         func_21E698
    ctx->pc = 0x2F0A08u;
    SET_GPR_U32(ctx, 31, 0x2F0A10u);
    ctx->pc = 0x2F0A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A08u;
    // 0x2f0a0c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E698u, 0x2F0A08u, 0x2F0A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0A10u;
label_2f0a10:
    // 0x2f0a10: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2f0a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f0a14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0a18: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2f0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f0a1c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2f0a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f0a20: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2f0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2f0a24: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2f0a24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2f0a28: 0x306301fc  andi        $v1, $v1, 0x1FC
    ctx->pc = 0x2f0a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)508);
    // 0x2f0a2c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2f0a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f0a30: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2f0a30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_2f0a34:
    // 0x2f0a34: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f0a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f0a38:
    // 0x2f0a38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2f0a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0a3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f0a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0a40: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2f0a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0a48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A48u;
        // 0x2f0a4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0A50u;
}

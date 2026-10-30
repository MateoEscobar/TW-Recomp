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

// Function: sub_002678C8
// Address: 0x2678c8 - 0x267a00
void sub_002678C8_0x2678c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002678C8_0x2678c8");
#endif

    switch (ctx->pc) {
        case 0x2678c8u: goto label_2678c8;
        case 0x2678ccu: goto label_2678cc;
        case 0x2678d0u: goto label_2678d0;
        case 0x2678d4u: goto label_2678d4;
        case 0x2678d8u: goto label_2678d8;
        case 0x2678dcu: goto label_2678dc;
        case 0x2678e0u: goto label_2678e0;
        case 0x2678e4u: goto label_2678e4;
        case 0x2678e8u: goto label_2678e8;
        case 0x2678ecu: goto label_2678ec;
        case 0x2678f0u: goto label_2678f0;
        case 0x2678f4u: goto label_2678f4;
        case 0x2678f8u: goto label_2678f8;
        case 0x2678fcu: goto label_2678fc;
        case 0x267900u: goto label_267900;
        case 0x267904u: goto label_267904;
        case 0x267908u: goto label_267908;
        case 0x26790cu: goto label_26790c;
        case 0x267910u: goto label_267910;
        case 0x267914u: goto label_267914;
        case 0x267918u: goto label_267918;
        case 0x26791cu: goto label_26791c;
        case 0x267920u: goto label_267920;
        case 0x267924u: goto label_267924;
        case 0x267928u: goto label_267928;
        case 0x26792cu: goto label_26792c;
        case 0x267930u: goto label_267930;
        case 0x267934u: goto label_267934;
        case 0x267938u: goto label_267938;
        case 0x26793cu: goto label_26793c;
        case 0x267940u: goto label_267940;
        case 0x267944u: goto label_267944;
        case 0x267948u: goto label_267948;
        case 0x26794cu: goto label_26794c;
        case 0x267950u: goto label_267950;
        case 0x267954u: goto label_267954;
        case 0x267958u: goto label_267958;
        case 0x26795cu: goto label_26795c;
        case 0x267960u: goto label_267960;
        case 0x267964u: goto label_267964;
        case 0x267968u: goto label_267968;
        case 0x26796cu: goto label_26796c;
        case 0x267970u: goto label_267970;
        case 0x267974u: goto label_267974;
        case 0x267978u: goto label_267978;
        case 0x26797cu: goto label_26797c;
        case 0x267980u: goto label_267980;
        case 0x267984u: goto label_267984;
        case 0x267988u: goto label_267988;
        case 0x26798cu: goto label_26798c;
        case 0x267990u: goto label_267990;
        case 0x267994u: goto label_267994;
        case 0x267998u: goto label_267998;
        case 0x26799cu: goto label_26799c;
        case 0x2679a0u: goto label_2679a0;
        case 0x2679a4u: goto label_2679a4;
        case 0x2679a8u: goto label_2679a8;
        case 0x2679acu: goto label_2679ac;
        case 0x2679b0u: goto label_2679b0;
        case 0x2679b4u: goto label_2679b4;
        case 0x2679b8u: goto label_2679b8;
        case 0x2679bcu: goto label_2679bc;
        case 0x2679c0u: goto label_2679c0;
        case 0x2679c4u: goto label_2679c4;
        case 0x2679c8u: goto label_2679c8;
        case 0x2679ccu: goto label_2679cc;
        case 0x2679d0u: goto label_2679d0;
        case 0x2679d4u: goto label_2679d4;
        case 0x2679d8u: goto label_2679d8;
        case 0x2679dcu: goto label_2679dc;
        case 0x2679e0u: goto label_2679e0;
        case 0x2679e4u: goto label_2679e4;
        case 0x2679e8u: goto label_2679e8;
        case 0x2679ecu: goto label_2679ec;
        case 0x2679f0u: goto label_2679f0;
        case 0x2679f4u: goto label_2679f4;
        case 0x2679f8u: goto label_2679f8;
        case 0x2679fcu: goto label_2679fc;
        default: break;
    }

    ctx->pc = 0x2678c8u;

label_2678c8:
    // 0x2678c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2678c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2678cc:
    // 0x2678cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2678ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2678d0:
    // 0x2678d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2678d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2678d4:
    // 0x2678d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2678d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2678d8:
    // 0x2678d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2678d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2678dc:
    // 0x2678dc: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x2678dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_2678e0:
    // 0x2678e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2678e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2678e4:
    // 0x2678e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2678e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2678e8:
    // 0x2678e8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2678e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2678ec:
    // 0x2678ec: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2678ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2678f0:
    // 0x2678f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2678f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2678f4:
    // 0x2678f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2678f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2678f8:
    // 0x2678f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2678f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2678fc:
    // 0x2678fc: 0x2484df28  addiu       $a0, $a0, -0x20D8
    ctx->pc = 0x2678fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958888));
label_267900:
    // 0x267900: 0xc041532  jal         func_1054C8
label_267904:
    if (ctx->pc == 0x267904u) {
        ctx->pc = 0x267904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267900u;
        // 0x267904: 0x8e1200d8  lw          $s2, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267908u;
        goto label_267908;
    }
    ctx->pc = 0x267900u;
    SET_GPR_U32(ctx, 31, 0x267908u);
    ctx->pc = 0x267904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267900u;
    // 0x267904: 0x8e1200d8  lw          $s2, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x267900u, 0x267908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267908u;
label_267908:
    // 0x267908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x267908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26790c:
    // 0x26790c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_267910:
    if (ctx->pc == 0x267910u) {
        ctx->pc = 0x267910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26790Cu;
        // 0x267910: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267914u;
        goto label_267914;
    }
    ctx->pc = 0x26790Cu;
    {
        const bool branch_taken_0x26790c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x267910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26790Cu;
        // 0x267910: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26790c) {
            ctx->pc = 0x267934u;
            goto label_267934;
        }
    }
    ctx->pc = 0x267914u;
label_267914:
    // 0x267914: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x267914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_267918:
    // 0x267918: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x267918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26791c:
    // 0x26791c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267920:
    // 0x267920: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x267920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_267924:
    // 0x267924: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x267924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_267928:
    // 0x267928: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x267928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26792c:
    // 0x26792c: 0xc041b20  jal         func_106C80
label_267930:
    if (ctx->pc == 0x267930u) {
        ctx->pc = 0x267930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26792Cu;
        // 0x267930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267934u;
        goto label_267934;
    }
    ctx->pc = 0x26792Cu;
    SET_GPR_U32(ctx, 31, 0x267934u);
    ctx->pc = 0x267930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26792Cu;
    // 0x267930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26792Cu, 0x267934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267934u;
label_267934:
    // 0x267934: 0xc05d484  jal         func_175210
label_267938:
    if (ctx->pc == 0x267938u) {
        ctx->pc = 0x267938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267934u;
        // 0x267938: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26793Cu;
        goto label_26793c;
    }
    ctx->pc = 0x267934u;
    SET_GPR_U32(ctx, 31, 0x26793Cu);
    ctx->pc = 0x267938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267934u;
    // 0x267938: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x267934u, 0x26793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26793Cu;
label_26793c:
    // 0x26793c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_267940:
    // 0x267940: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x267940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_267944:
    // 0x267944: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x267944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_267948:
    // 0x267948: 0xa0f809  jalr        $a1
label_26794c:
    if (ctx->pc == 0x26794Cu) {
        ctx->pc = 0x26794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267948u;
        // 0x26794c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267950u;
        goto label_267950;
    }
    ctx->pc = 0x267948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x267950u);
        ctx->pc = 0x26794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267948u;
        // 0x26794c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267948u, 0x267950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x267950u;
label_267950:
    // 0x267950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267954:
    // 0x267954: 0xc087016  jal         func_21C058
label_267958:
    if (ctx->pc == 0x267958u) {
        ctx->pc = 0x267958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267954u;
        // 0x267958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26795Cu;
        goto label_26795c;
    }
    ctx->pc = 0x267954u;
    SET_GPR_U32(ctx, 31, 0x26795Cu);
    ctx->pc = 0x267958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267954u;
    // 0x267958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x267954u, 0x26795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26795Cu;
label_26795c:
    // 0x26795c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26795cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_267960:
    // 0x267960: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x267960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_267964:
    // 0x267964: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x267964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_267968:
    // 0x267968: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x267968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26796c:
    // 0x26796c: 0xc099e80  jal         func_267A00
label_267970:
    if (ctx->pc == 0x267970u) {
        ctx->pc = 0x267970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26796Cu;
        // 0x267970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267974u;
        goto label_267974;
    }
    ctx->pc = 0x26796Cu;
    SET_GPR_U32(ctx, 31, 0x267974u);
    ctx->pc = 0x267970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26796Cu;
    // 0x267970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A00u, 0x26796Cu, 0x267974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267974u;
label_267974:
    // 0x267974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267978:
    // 0x267978: 0xc05d53a  jal         func_1754E8
label_26797c:
    if (ctx->pc == 0x26797Cu) {
        ctx->pc = 0x26797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267978u;
        // 0x26797c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267980u;
        goto label_267980;
    }
    ctx->pc = 0x267978u;
    SET_GPR_U32(ctx, 31, 0x267980u);
    ctx->pc = 0x26797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267978u;
    // 0x26797c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x267978u, 0x267980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267980u;
label_267980:
    // 0x267980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x267980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267984:
    // 0x267984: 0xc05d4f6  jal         func_1753D8
label_267988:
    if (ctx->pc == 0x267988u) {
        ctx->pc = 0x267988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267984u;
        // 0x267988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26798Cu;
        goto label_26798c;
    }
    ctx->pc = 0x267984u;
    SET_GPR_U32(ctx, 31, 0x26798Cu);
    ctx->pc = 0x267988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267984u;
    // 0x267988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x267984u, 0x26798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26798Cu;
label_26798c:
    // 0x26798c: 0xc0962a2  jal         func_258A88
label_267990:
    if (ctx->pc == 0x267990u) {
        ctx->pc = 0x267990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26798Cu;
        // 0x267990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267994u;
        goto label_267994;
    }
    ctx->pc = 0x26798Cu;
    SET_GPR_U32(ctx, 31, 0x267994u);
    ctx->pc = 0x267990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26798Cu;
    // 0x267990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A88u, 0x26798Cu, 0x267994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267994u;
label_267994:
    // 0x267994: 0xc087502  jal         func_21D408
label_267998:
    if (ctx->pc == 0x267998u) {
        ctx->pc = 0x267998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267994u;
        // 0x267998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26799Cu;
        goto label_26799c;
    }
    ctx->pc = 0x267994u;
    SET_GPR_U32(ctx, 31, 0x26799Cu);
    ctx->pc = 0x267998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267994u;
    // 0x267998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x267994u, 0x26799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26799Cu;
label_26799c:
    // 0x26799c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2679a0:
    // 0x2679a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2679a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2679a4:
    // 0x2679a4: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_2679a8:
    if (ctx->pc == 0x2679A8u) {
        ctx->pc = 0x2679A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679A4u;
        // 0x2679a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679ACu;
        goto label_2679ac;
    }
    ctx->pc = 0x2679A4u;
    {
        const bool branch_taken_0x2679a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2679a4) {
            ctx->pc = 0x2679A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2679A4u;
            // 0x2679a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2679DCu;
            goto label_2679dc;
        }
    }
    ctx->pc = 0x2679ACu;
label_2679ac:
    // 0x2679ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2679acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2679b0:
    // 0x2679b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2679b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2679b4:
    // 0x2679b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2679b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2679b8:
    // 0x2679b8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2679b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2679bc:
    // 0x2679bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2679bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2679c0:
    // 0x2679c0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2679c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2679c4:
    // 0x2679c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2679c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2679c8:
    // 0x2679c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2679c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2679cc:
    // 0x2679cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2679ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2679d0:
    // 0x2679d0: 0xc088178  jal         func_2205E0
label_2679d4:
    if (ctx->pc == 0x2679D4u) {
        ctx->pc = 0x2679D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679D0u;
        // 0x2679d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679D8u;
        goto label_2679d8;
    }
    ctx->pc = 0x2679D0u;
    SET_GPR_U32(ctx, 31, 0x2679D8u);
    ctx->pc = 0x2679D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679D0u;
    // 0x2679d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2679D0u, 0x2679D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679D8u;
label_2679d8:
    // 0x2679d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2679d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2679dc:
    // 0x2679dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2679dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2679e0:
    // 0x2679e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2679e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2679e4:
    // 0x2679e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2679e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2679e8:
    // 0x2679e8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2679e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2679ec:
    // 0x2679ec: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2679ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2679f0:
    // 0x2679f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2679f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2679f4:
    // 0x2679f4: 0x3e00008  jr          $ra
label_2679f8:
    if (ctx->pc == 0x2679F8u) {
        ctx->pc = 0x2679F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679F4u;
        // 0x2679f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679FCu;
        goto label_2679fc;
    }
    ctx->pc = 0x2679F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2679F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679F4u;
        // 0x2679f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2679F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2679FCu;
label_2679fc:
    // 0x2679fc: 0x0  nop
    ctx->pc = 0x2679fcu;
    // NOP
    ctx->pc = 0x267a00u;
}

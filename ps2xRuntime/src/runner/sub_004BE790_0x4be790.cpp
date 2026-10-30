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

// Function: sub_004BE790
// Address: 0x4be790 - 0x4be988
void sub_004BE790_0x4be790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE790_0x4be790");
#endif

    ctx->pc = 0x4be790u;

    // 0x4be790: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x4be790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4be794: 0x44046800  mfc1        $a0, $f13
    ctx->pc = 0x4be794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4be798: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4be798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be79c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4be79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4be7a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be7a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4be7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4be7a8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4be7a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4be7ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4be7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4be7b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4be7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4be7b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4be7b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4be7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE7C0u;
    // 0x4be7c0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4be7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4be7c4: 0x0  nop
    ctx->pc = 0x4be7c4u;
    // NOP
    // 0x4be7c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be7cc: 0x0  nop
    ctx->pc = 0x4be7ccu;
    // NOP
    // 0x4be7d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be7d4: 0x0  nop
    ctx->pc = 0x4be7d4u;
    // NOP
    // 0x4be7d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4be7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4be7dc: 0x0  nop
    ctx->pc = 0x4be7dcu;
    // NOP
    // 0x4be7e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be7e4: 0x0  nop
    ctx->pc = 0x4be7e4u;
    // NOP
    // 0x4be7e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4be7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4be7ec: 0x0  nop
    ctx->pc = 0x4be7ecu;
    // NOP
    // 0x4be7f0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x4be7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4be7f4: 0x0  nop
    ctx->pc = 0x4be7f4u;
    // NOP
    // 0x4be7f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4be7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4be7fc: 0x0  nop
    ctx->pc = 0x4be7fcu;
    // NOP
    // 0x4be800: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be804: 0x0  nop
    ctx->pc = 0x4be804u;
    // NOP
    // 0x4be808: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4be808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4be80c: 0x0  nop
    ctx->pc = 0x4be80cu;
    // NOP
    // 0x4be810: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be814: 0x0  nop
    ctx->pc = 0x4be814u;
    // NOP
    // 0x4be818: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be81c: 0x0  nop
    ctx->pc = 0x4be81cu;
    // NOP
    // 0x4be820: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be824: 0x0  nop
    ctx->pc = 0x4be824u;
    // NOP
    // 0x4be828: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4be828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4be82c: 0x0  nop
    ctx->pc = 0x4be82cu;
    // NOP
    // 0x4be830: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be834: 0x0  nop
    ctx->pc = 0x4be834u;
    // NOP
    // 0x4be838: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be83c: 0x0  nop
    ctx->pc = 0x4be83cu;
    // NOP
    // 0x4be840: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be844: 0x0  nop
    ctx->pc = 0x4be844u;
    // NOP
    // 0x4be848: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be84c: 0x0  nop
    ctx->pc = 0x4be84cu;
    // NOP
    // 0x4be850: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4be850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4be854: 0x0  nop
    ctx->pc = 0x4be854u;
    // NOP
    // 0x4be858: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4be858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4be85c: 0x0  nop
    ctx->pc = 0x4be85cu;
    // NOP
    // 0x4be860: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be864: 0x0  nop
    ctx->pc = 0x4be864u;
    // NOP
    // 0x4be868: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be86c: 0x0  nop
    ctx->pc = 0x4be86cu;
    // NOP
    // 0x4be870: 0x0  nop
    ctx->pc = 0x4be870u;
    // NOP
    // 0x4be874: 0x0  nop
    ctx->pc = 0x4be874u;
    // NOP
    // 0x4be878: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4be878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4be87c: 0x0  nop
    ctx->pc = 0x4be87cu;
    // NOP
    // 0x4be880: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be884: 0x0  nop
    ctx->pc = 0x4be884u;
    // NOP
    // 0x4be888: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4be888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4be88c: 0x0  nop
    ctx->pc = 0x4be88cu;
    // NOP
    // 0x4be890: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4be890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4be894: 0x0  nop
    ctx->pc = 0x4be894u;
    // NOP
    // 0x4be898: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be89c: 0x0  nop
    ctx->pc = 0x4be89cu;
    // NOP
    // 0x4be8a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be8a4: 0x0  nop
    ctx->pc = 0x4be8a4u;
    // NOP
    // 0x4be8a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4be8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4be8ac: 0x0  nop
    ctx->pc = 0x4be8acu;
    // NOP
    // 0x4be8b0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4be8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4be8b4: 0x0  nop
    ctx->pc = 0x4be8b4u;
    // NOP
    // 0x4be8b8: 0x27bd03c0  addiu       $sp, $sp, 0x3C0
    ctx->pc = 0x4be8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x4be8bc: 0x0  nop
    ctx->pc = 0x4be8bcu;
    // NOP
    // 0x4be8c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4be8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4be8c4: 0x0  nop
    ctx->pc = 0x4be8c4u;
    // NOP
    // 0x4be8c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4be8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4be8cc: 0x0  nop
    ctx->pc = 0x4be8ccu;
    // NOP
    // 0x4be8d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4be8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4be8d4: 0x0  nop
    ctx->pc = 0x4be8d4u;
    // NOP
    // 0x4be8d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4be8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4be8dc: 0x0  nop
    ctx->pc = 0x4be8dcu;
    // NOP
    // 0x4be8e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4be8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4be8e4: 0x0  nop
    ctx->pc = 0x4be8e4u;
    // NOP
    // 0x4be8e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be8ec: 0x0  nop
    ctx->pc = 0x4be8ecu;
    // NOP
    // 0x4be8f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be8f4: 0x0  nop
    ctx->pc = 0x4be8f4u;
    // NOP
    // 0x4be8f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be8fc: 0x0  nop
    ctx->pc = 0x4be8fcu;
    // NOP
    // 0x4be900: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be904: 0x0  nop
    ctx->pc = 0x4be904u;
    // NOP
    // 0x4be908: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be90c: 0x0  nop
    ctx->pc = 0x4be90cu;
    // NOP
    // 0x4be910: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4be910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4be914: 0x0  nop
    ctx->pc = 0x4be914u;
    // NOP
    // 0x4be918: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be91c: 0x0  nop
    ctx->pc = 0x4be91cu;
    // NOP
    // 0x4be920: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be924: 0x0  nop
    ctx->pc = 0x4be924u;
    // NOP
    // 0x4be928: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be92c: 0x0  nop
    ctx->pc = 0x4be92cu;
    // NOP
    // 0x4be930: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be934: 0x0  nop
    ctx->pc = 0x4be934u;
    // NOP
    // 0x4be938: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4be938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4be93c: 0x0  nop
    ctx->pc = 0x4be93cu;
    // NOP
    // 0x4be940: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4be940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4be944: 0x0  nop
    ctx->pc = 0x4be944u;
    // NOP
    // 0x4be948: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x4be948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x4be94c: 0x0  nop
    ctx->pc = 0x4be94cu;
    // NOP
    // 0x4be950: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4be950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4be954: 0x0  nop
    ctx->pc = 0x4be954u;
    // NOP
    // 0x4be958: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4be958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4be95c: 0x0  nop
    ctx->pc = 0x4be95cu;
    // NOP
    // 0x4be960: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x4be960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x4be964: 0x0  nop
    ctx->pc = 0x4be964u;
    // NOP
    // 0x4be968: 0x0  nop
    ctx->pc = 0x4be968u;
    // NOP
    // 0x4be96c: 0x0  nop
    ctx->pc = 0x4be96cu;
    // NOP
    // 0x4be970: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x4be970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x4be974: 0x0  nop
    ctx->pc = 0x4be974u;
    // NOP
    // 0x4be978: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4be978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4be97c: 0x0  nop
    ctx->pc = 0x4be97cu;
    // NOP
    // 0x4be980: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x4be980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x4be984: 0x0  nop
    ctx->pc = 0x4be984u;
    // NOP
    ctx->pc = 0x4be988u;
}
